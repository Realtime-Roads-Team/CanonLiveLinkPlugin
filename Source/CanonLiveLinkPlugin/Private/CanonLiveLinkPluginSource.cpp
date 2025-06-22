// Copyright 2024 Canon, Inc. All Rights Reserved.

#include "CanonLiveLinkPluginSource.h"

#include "ILiveLinkClient.h"
#include "CanonLiveLinkPluginRole.h"
#include "CanonLiveLinkPluginTypes.h"

#include "Async/Async.h"
#include "Common/UdpSocketBuilder.h"
#include "HAL/RunnableThread.h"
#include "Serialization/JsonSerializer.h"
#include "Sockets.h"
#include "SocketSubsystem.h"

#define LOCTEXT_NAMESPACE "CanonLiveLinkPluginSource"

#define RECV_BUFFER_SIZE 1024 * 1024
#define TIMECODE_DENOMINATOR_DF 1001
#define TIMECODE_DENOMINATOR_NDF 1000

FCanonLiveLinkPluginSource::FCanonLiveLinkPluginSource(FIPv4Endpoint InEndpoint)
: Socket(nullptr)
, Stopping(false)
, Thread(nullptr)
, WaitTime(FTimespan::FromMicroseconds(10))
{
	// defaults
	DeviceEndpoint = InEndpoint;
	SourceStatus = LOCTEXT("SourceStatus_DeviceNotFound", "Device Not Found");
	SourceType = LOCTEXT("CanonLiveLinkPluginSourceType", "Canon Live Link Source");
	SourceMachineName = FText::FromString(DeviceEndpoint.ToString());
	
	//setup socket
	if (DeviceEndpoint.Address.IsMulticastAddress())
	{
		Socket = FUdpSocketBuilder(TEXT("JSONSOCKET"))
			.AsNonBlocking()
			.AsReusable()
			.BoundToPort(DeviceEndpoint.Port)
			.WithReceiveBufferSize(RECV_BUFFER_SIZE)

			.BoundToAddress(FIPv4Address::Any)
			.JoinedToGroup(DeviceEndpoint.Address)
			.WithMulticastLoopback()
			.WithMulticastTtl(2);
					
	}
	else
	{
		Socket = FUdpSocketBuilder(TEXT("JSONSOCKET"))
			.AsNonBlocking()
			.AsReusable()
			.BoundToAddress(DeviceEndpoint.Address)
			.BoundToPort(DeviceEndpoint.Port)
			.WithReceiveBufferSize(RECV_BUFFER_SIZE);
	}

	RecvBuffer.SetNumUninitialized(RECV_BUFFER_SIZE);

	if ((Socket != nullptr) && (Socket->GetSocketType() == SOCKTYPE_Datagram))
	{
		SocketSubsystem = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM);

		Start();

		SourceStatus = LOCTEXT("SourceStatus_Receiving", "Receiving");
	}
}

FCanonLiveLinkPluginSource::~FCanonLiveLinkPluginSource()
{
	Stop();
	if (Thread != nullptr)
	{
		Thread->WaitForCompletion();
		delete Thread;
		Thread = nullptr;
	}
	if (Socket != nullptr)
	{
		Socket->Close();
		ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->DestroySocket(Socket);
	}
}

void FCanonLiveLinkPluginSource::ReceiveClient(ILiveLinkClient* InClient, FGuid InSourceGuid)
{
	Client = InClient;
	SourceGuid = InSourceGuid;
}

bool FCanonLiveLinkPluginSource::IsSourceStillValid() const
{
	// Source is valid if we have a valid thread and socket
	bool bIsSourceValid = !Stopping && Thread != nullptr && Socket != nullptr;
	return bIsSourceValid;
}


bool FCanonLiveLinkPluginSource::RequestSourceShutdown()
{
	Stop();

	return true;
}
// FRunnable interface

void FCanonLiveLinkPluginSource::Start()
{
	ThreadName = "JSON UDP Receiver ";
	ThreadName.AppendInt(FAsyncThreadIndex::GetNext());
	
	Thread = FRunnableThread::Create(this, *ThreadName, 128 * 1024, TPri_AboveNormal, FPlatformAffinity::GetPoolThreadMask());
}

void FCanonLiveLinkPluginSource::Stop()
{
	Stopping = true;
}

uint32 FCanonLiveLinkPluginSource::Run()
{
	TSharedRef<FInternetAddr> Sender = SocketSubsystem->CreateInternetAddr();
	
	while (!Stopping)
	{
		if (Socket->Wait(ESocketWaitConditions::WaitForRead, WaitTime))
		{
			uint32 Size;

			while (Socket->HasPendingData(Size))
			{
				int32 Read = 0;

				if (Socket->RecvFrom(RecvBuffer.GetData(), RecvBuffer.Num(), Read, *Sender))
				{
					if (Read > 0)
					{
						TSharedPtr<TArray<uint8>, ESPMode::ThreadSafe> ReceivedData = MakeShareable(new TArray<uint8>());
						ReceivedData->SetNumUninitialized(Read);
						memcpy(ReceivedData->GetData(), RecvBuffer.GetData(), Read);
						AsyncTask(ENamedThreads::GameThread, [this, ReceivedData]() { HandleReceivedData(ReceivedData); });
					}
				}
			}
		}
	}
	return 0;
}

void FCanonLiveLinkPluginSource::HandleReceivedData(TSharedPtr<TArray<uint8>, ESPMode::ThreadSafe> ReceivedData)
{
	FString JsonString;
	JsonString.Empty(ReceivedData->Num());
	for (uint8& Byte : *ReceivedData.Get())
	{
		JsonString += TCHAR(Byte);
	}

	TSharedPtr<FJsonObject> JsonObject;
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JsonString);
	if (FJsonSerializer::Deserialize(Reader, JsonObject))
	{
		FLiveLinkStaticDataStruct StaticDataStruct = FLiveLinkStaticDataStruct(FCanonLiveLinkPluginStaticData::StaticStruct());
		FCanonLiveLinkPluginStaticData& StaticData = *StaticDataStruct.Cast<FCanonLiveLinkPluginStaticData>();
		
		FLiveLinkFrameDataStruct FrameDataStruct = FLiveLinkFrameDataStruct(FCanonLiveLinkPluginFrameData::StaticStruct());
		FCanonLiveLinkPluginFrameData& FrameData = *FrameDataStruct.Cast<FCanonLiveLinkPluginFrameData>();
		
		if (StaticDataStruct.IsValid() && FrameDataStruct.IsValid())
		{
			StaticData.LensModel = "None";
			/* version */
			if (JsonObject->HasField(TEXT("ver"))) FrameData.CameraMetaData.Version = JsonObject->GetStringField(TEXT("ver"));
			
			/* camera */
			FName SubjectName;
			if (JsonObject->HasField(TEXT("camera"))) {
				TSharedPtr<FJsonObject> Camera = JsonObject->GetObjectField(TEXT("camera"));
				if (Camera->HasField(TEXT("model"))) FrameData.CameraMetaData.Camera.Model = Camera->GetStringField(TEXT("model"));
				if (Camera->HasField(TEXT("serial")))FrameData.CameraMetaData.Camera.Serial = Camera->GetStringField(TEXT("serial"));
				if (Camera->HasField(TEXT("ver"))) FrameData.CameraMetaData.Camera.Version = Camera->GetStringField(TEXT("ver"));
				SubjectName = FName(FrameData.CameraMetaData.Camera.Model + "@" + DeviceEndpoint.ToString());
			}

			/* lens */
			if (JsonObject->HasField(TEXT("lens"))) {
				TSharedPtr<FJsonObject> Lens = JsonObject->GetObjectField(TEXT("lens"));
				if (Lens->HasField(TEXT("name"))) FrameData.CameraMetaData.Lens.Name = Lens->GetStringField(TEXT("name"));
				if (Lens->HasField(TEXT("serial"))) FrameData.CameraMetaData.Lens.Serial = Lens->GetStringField(TEXT("serial"));
				if (Lens->HasField(TEXT("ver"))) FrameData.CameraMetaData.Lens.Version = Lens->GetStringField(TEXT("ver"));
			}

			/* Sensor */
			TArray<int> a_SensorSize;
			TArray<int> a_SensorPix;
			TArray<int> a_SensorFrameRate;
			if (JsonObject->HasField(TEXT("sensor"))) {
				TSharedPtr<FJsonObject> Sensor = JsonObject->GetObjectField(TEXT("sensor"));
				if (Sensor->HasField(TEXT("size"))) {
					for (TSharedPtr<FJsonValue> SensorSize : Sensor->GetArrayField(TEXT("size")))
					{
						a_SensorSize.Add(SensorSize->AsNumber());
					}
					if (a_SensorSize.Num() >= 2) {
						FrameData.CameraMetaData.Sensor.Size.Width = a_SensorSize[0];
						FrameData.CameraMetaData.Sensor.Size.Height = a_SensorSize[1];
					}
				}
				if (Sensor->HasField(TEXT("pix"))) {
					for (TSharedPtr<FJsonValue> SensorPix : Sensor->GetArrayField(TEXT("pix")))
					{
						a_SensorPix.Add(SensorPix->AsNumber());
					}
					if (a_SensorPix.Num() >= 2) {
						FrameData.CameraMetaData.Sensor.Pix.Width = a_SensorPix[0];
						FrameData.CameraMetaData.Sensor.Pix.Height = a_SensorPix[1];
					}
				}
				if (Sensor->HasField(TEXT("fps"))) {
					for (TSharedPtr<FJsonValue> SensorFrameRate : Sensor->GetArrayField(TEXT("fps")))
					{
						a_SensorFrameRate.Add(SensorFrameRate->AsNumber());
					}
					if (a_SensorFrameRate.Num() >= 2) {
						FrameData.CameraMetaData.Sensor.Fps.Numerator = a_SensorFrameRate[0];
						FrameData.CameraMetaData.Sensor.Fps.Denominator = a_SensorFrameRate[1];
					}
				}
				if (Sensor->HasField(TEXT("expTime"))) FrameData.CameraMetaData.Sensor.ExpTime = Sensor->GetNumberField(TEXT("expTime"));
			}

			/* Picture */
			TArray<float> a_PicturePix;
			float CaptureFrameRate = 59.94;
			FString Timecode;
			if (JsonObject->HasField(TEXT("picture"))) {
				TSharedPtr<FJsonObject> Picture = JsonObject->GetObjectField(TEXT("picture"));
				if (Picture->HasField(TEXT("pix"))) {
					for (TSharedPtr<FJsonValue> PicturePix : Picture->GetArrayField(TEXT("pix")))
					{
						a_PicturePix.Add(PicturePix->AsNumber());
					}
					if (a_PicturePix.Num() >= 2) {
						FrameData.CameraMetaData.Picture.Pix.Width = a_PicturePix[0];
						FrameData.CameraMetaData.Picture.Pix.Height = a_PicturePix[1];
					}
				}
				if (Picture->HasField(TEXT("scan"))) FrameData.CameraMetaData.Picture.Scan = Picture->GetStringField(TEXT("scan"));
				if (Picture->HasField(TEXT("subFrame"))) FrameData.CameraMetaData.Picture.SubFrame = Picture->GetNumberField(TEXT("subFrame"));
				if (Picture->HasField(TEXT("fps"))){
					CaptureFrameRate = Picture->GetNumberField(TEXT("fps"));
					FrameData.CameraMetaData.Picture.Fps = CaptureFrameRate;
					if (Picture->HasField(TEXT("timecode")) && Picture->HasField(TEXT("dropframe")))				
					{
						Timecode = Picture->GetStringField(TEXT("timecode"));
						int32 Hours = FCString::Atoi(*(Timecode.Mid(0, 2)));
						int32 Minutes = FCString::Atoi(*(Timecode.Mid(3, 2)));
						int32 Seconds = FCString::Atoi(*(Timecode.Mid(6, 2)));
						int32 Frames = FCString::Atoi(*(Timecode.Mid(9, 2)));
						int32 TimecodeFrames = (CaptureFrameRate <= 30.00) ? Frames : (2 * Frames + FrameData.CameraMetaData.Picture.SubFrame);
						bool DropFrame = Picture->GetBoolField(TEXT("dropframe"));
						int32 timebase_numerator = (int32)(CaptureFrameRate + 0.5) * 1000;
						int32 timebase_denominator = DropFrame ? TIMECODE_DENOMINATOR_DF : TIMECODE_DENOMINATOR_NDF;
						FrameData.MetaData.SceneTime = FQualifiedFrameTime(FTimecode(Hours, Minutes, Seconds, TimecodeFrames, DropFrame), FFrameRate(timebase_numerator, timebase_denominator));
						FrameData.CameraMetaData.Picture.Timecode = Timecode;
						FrameData.CameraMetaData.Picture.DropFrame = DropFrame;
					}
				}
			}

			/* cameraIdx */
			if (JsonObject->HasField(TEXT("cameraIdx"))) FrameData.CameraMetaData.CameraIndex = JsonObject->GetStringField(TEXT("cameraIdx"));

			/* av */
			if (JsonObject->HasField(TEXT("av"))) {
				TSharedPtr<FJsonObject> Av = JsonObject->GetObjectField(TEXT("av"));
				if (Av->HasField(TEXT("t"))) FrameData.CameraMetaData.Av.T = Av->GetNumberField(TEXT("t"));
				if (Av->HasField(TEXT("f"))) {
					FrameData.CameraMetaData.Av.F = Av->GetNumberField(TEXT("f"));
					FrameData.Aperture = FrameData.CameraMetaData.Av.F / 1000.0;
				}
				if (Av->HasField(TEXT("shape"))) FrameData.CameraMetaData.Av.Shape = Av->GetNumberField(TEXT("shape"));
			}

			/* tv */
			if (JsonObject->HasField(TEXT("tv"))) {
				TSharedPtr<FJsonObject> Tv = JsonObject->GetObjectField(TEXT("tv"));
				if (Tv->HasField(TEXT("angle"))) {
					FrameData.CameraMetaData.Tv.Angle = Tv->GetNumberField(TEXT("angle"));
					if(FrameData.CameraMetaData.Tv.Angle != 0) FrameData.ShutterSpeed = (CaptureFrameRate * 360) / ( FrameData.CameraMetaData.Tv.Angle / 100.0 );
				}
			}
			/* sv */
			if (JsonObject->HasField(TEXT("sv"))) {
				TSharedPtr<FJsonObject> Sv = JsonObject->GetObjectField(TEXT("sv"));
				if (Sv->HasField(TEXT("iso"))) FrameData.CameraMetaData.Sv.Iso = Sv->GetNumberField(TEXT("iso"));
			}
			/* nd */
			if (JsonObject->HasField(TEXT("nd"))) FrameData.CameraMetaData.Nd = JsonObject->GetNumberField(TEXT("nd"));

			/* focalLength */
			if (JsonObject->HasField(TEXT("focalLength")))FrameData.CameraMetaData.FocalLength = JsonObject->GetNumberField(TEXT("focalLength"));

			/* entPupilPos */
			float EntrancePupil = 0.0;
			if (JsonObject->HasField(TEXT("entPupilPos"))) {
				EntrancePupil = JsonObject->GetNumberField(TEXT("entPupilPos"));
				FrameData.EntrancePupil = EntrancePupil / 10;
				FrameData.CameraMetaData.EntrancePupil = EntrancePupil;
			}

			/* focusDistance */	
			float FocusDistance = 0.0;
			if (JsonObject->HasField(TEXT("focusDistance"))) {
				FocusDistance = JsonObject->GetNumberField(TEXT("focusDistance"));
				FrameData.FocusDistance = (FocusDistance - EntrancePupil) / 10;
				FrameData.CameraMetaData.FocusDistance = FocusDistance;
			}

			/* matchMvData */
			TArray<int> a_MatchMvData;
			if (JsonObject->HasField(TEXT("matchMvData"))) {
				for (TSharedPtr<FJsonValue> MatchMvData : JsonObject->GetArrayField(TEXT("matchMvData")))
				{
					a_MatchMvData.Add(MatchMvData->AsNumber());
				}
				if (a_MatchMvData.Num() >= 6)
				{
					FrameData.CameraMetaData.MatchMvData.MatchMvDataX = a_MatchMvData[0];
					FrameData.CameraMetaData.MatchMvData.MatchMvDataY = a_MatchMvData[1];
					FrameData.CameraMetaData.MatchMvData.MatchMvDataZ = a_MatchMvData[2];
					FrameData.CameraMetaData.MatchMvData.MatchMvDataPicth = a_MatchMvData[3];
					FrameData.CameraMetaData.MatchMvData.MatchMvDataYaw = a_MatchMvData[4];
					FrameData.CameraMetaData.MatchMvData.MatchMvDataRoll = a_MatchMvData[5];
				}
			}

			/* tilt */
			if (JsonObject->HasField(TEXT("tilt"))) FrameData.CameraMetaData.Tilt = JsonObject->GetNumberField(TEXT("tilt"));

			/* roll */
			if (JsonObject->HasField(TEXT("roll"))) FrameData.CameraMetaData.Roll = JsonObject->GetNumberField(TEXT("roll"));

			/* colorTemp */
			if (JsonObject->HasField(TEXT("colorTemp"))) FrameData.CameraMetaData.ColorTemperature = JsonObject->GetNumberField(TEXT("colorTemp"));

			/* tint */
			if (JsonObject->HasField(TEXT("tint"))) FrameData.CameraMetaData.Tint = JsonObject->GetNumberField(TEXT("tint"));

			/* correction */
			if (JsonObject->HasField(TEXT("correction"))) {
				TSharedPtr<FJsonObject> Correction = JsonObject->GetObjectField(TEXT("correction"));
				if (Correction->HasField(TEXT("distortion")))
					FrameData.CameraMetaData.Correction.Distortion = Correction->GetStringField(TEXT("distortion"));
				if (Correction->HasField(TEXT("shading")))
					FrameData.CameraMetaData.Correction.Shading= Correction->GetStringField(TEXT("shading"));
				if (Correction->HasField(TEXT("chromaAberration")))
					FrameData.CameraMetaData.Correction.ChromaAberration = Correction->GetStringField(TEXT("chromaAberration"));
				if (Correction->HasField(TEXT("focusBreathing")))
					FrameData.CameraMetaData.Correction.FocusBreathing = Correction->GetStringField(TEXT("focusBreathing"));
			}

			/* cameraCalib */
			TArray<float> a_OpenCVSensorSize;
			TArray<float> a_FlPix;
			TArray<float> a_CenterPix;
			TArray<float> a_Kn;
			TArray<float> a_Pn;
			if (JsonObject->HasField(TEXT("cameraCalib"))) {
				TSharedPtr<FJsonObject> CameraCalib = JsonObject->GetObjectField(TEXT("cameraCalib"));
				if (CameraCalib->HasField(TEXT("sensorSize"))) {
					for (TSharedPtr<FJsonValue> OpenCVSensorSize : CameraCalib->GetArrayField(TEXT("sensorSize")))
					{
						a_OpenCVSensorSize.Add(OpenCVSensorSize->AsNumber());
					}
					if (a_OpenCVSensorSize.Num() >= 2) {
						StaticData.FilmBackWidth = a_OpenCVSensorSize[0];
						StaticData.FilmBackHeight = a_OpenCVSensorSize[1];
						FrameData.CameraMetaData.CameraCalib.SensorSize.Width = a_OpenCVSensorSize[0];
						FrameData.CameraMetaData.CameraCalib.SensorSize.Height = a_OpenCVSensorSize[1];
					}
				}

				if (CameraCalib->HasField(TEXT("flOutImg"))) {
					float FlOutImg = CameraCalib->GetNumberField(TEXT("flOutImg"));
					if (FlOutImg != 0) {
						FrameData.FieldOfView = 2 * FMath::Atan(StaticData.FilmBackWidth / (2 * FlOutImg)) * 180 / PI;
					}
					FrameData.FocalLength = FlOutImg;
					FrameData.CameraMetaData.CameraCalib.FlOutImg = FlOutImg;
				}

				/* cameraCalib -> opencv */
				if (CameraCalib->HasField(TEXT("opencv"))) {
					TSharedPtr<FJsonObject> OpenCV = CameraCalib->GetObjectField(TEXT("opencv"));
					if (OpenCV->HasField(TEXT("flPix"))) {
						for (TSharedPtr<FJsonValue> FlPix : OpenCV->GetArrayField(TEXT("flPix")))
						{
							a_FlPix.Add(FlPix->AsNumber());
						}
						if (a_FlPix.Num() >= 2) {
							FrameData.CameraMetaData.CameraCalib.OpenCV.FlPix.Fx = a_FlPix[0];
							FrameData.CameraMetaData.CameraCalib.OpenCV.FlPix.Fy = a_FlPix[1];
						}
					}
					if (OpenCV->HasField(TEXT("centerPix"))) {
						for (TSharedPtr<FJsonValue> CenterPix : OpenCV->GetArrayField(TEXT("centerPix")))
						{
							a_CenterPix.Add(CenterPix->AsNumber());
						}
						if (a_CenterPix.Num() >= 2) {
							FrameData.CameraMetaData.CameraCalib.OpenCV.CenterPix.Cx = a_CenterPix[0];
							FrameData.CameraMetaData.CameraCalib.OpenCV.CenterPix.Cy = a_CenterPix[1];
						}
					}

					if (OpenCV->HasField(TEXT("distortion"))) {
						TSharedPtr<FJsonObject> Distortion = OpenCV->GetObjectField(TEXT("distortion"));
						FrameData.DistortionParameters.Init(0, 5); 
						StaticData.LensModel = "Spherical Lens Model";
						if (Distortion->HasField(TEXT("Kn"))) {
							for (TSharedPtr<FJsonValue> Kn : Distortion->GetArrayField(TEXT("Kn")))
							{
								a_Kn.Add(Kn->AsNumber());
							}
							if (a_Kn.Num() >= 3) {
								FrameData.DistortionParameters[0]  = a_Kn[0];
								FrameData.DistortionParameters[1]  = a_Kn[1];
								FrameData.DistortionParameters[2]  = a_Kn[2];
								FrameData.CameraMetaData.CameraCalib.OpenCV.Distortion.Kn.K1 = a_Kn[0];
								FrameData.CameraMetaData.CameraCalib.OpenCV.Distortion.Kn.K2 = a_Kn[1];
								FrameData.CameraMetaData.CameraCalib.OpenCV.Distortion.Kn.K3 = a_Kn[2];
								if (a_Kn.Num() >= 6) {
									FrameData.CameraMetaData.CameraCalib.OpenCV.Distortion.Kn.K4 = a_Kn[3];
									FrameData.CameraMetaData.CameraCalib.OpenCV.Distortion.Kn.K5 = a_Kn[4];
									FrameData.CameraMetaData.CameraCalib.OpenCV.Distortion.Kn.K6 = a_Kn[5];
								}
							}
						}
						if (Distortion->HasField(TEXT("Pn"))) {
							for (TSharedPtr<FJsonValue> Pn : Distortion->GetArrayField(TEXT("Pn")))
							{
								a_Pn.Add(Pn->AsNumber());
							}
							if (a_Pn.Num() >= 2) {
								FrameData.DistortionParameters[3] = a_Pn[0];
								FrameData.DistortionParameters[4] = a_Pn[1];
								FrameData.CameraMetaData.CameraCalib.OpenCV.Distortion.Pn.P1 = a_Pn[0];
								FrameData.CameraMetaData.CameraCalib.OpenCV.Distortion.Pn.P2 = a_Pn[1];
							}
						}
					}
				}
			}
			
			StaticData.bIsLocationSupported = false;
			StaticData.bIsRotationSupported = false;
			StaticData.bIsFieldOfViewSupported = true;
			StaticData.bIsFocusDistanceSupported = true;
			StaticData.bIsApertureSupported = true;
			
			Client->PushSubjectStaticData_AnyThread({ SourceGuid, SubjectName }, UCanonLiveLinkPluginRole::StaticClass(), MoveTemp(StaticDataStruct));

			if (FrameData.CameraMetaData.Picture.Pix.Width != 0 && FrameData.CameraMetaData.Picture.Pix.Height != 0) {
				FrameData.FxFy = FVector2D(
					FrameData.CameraMetaData.CameraCalib.OpenCV.FlPix.Fx / FrameData.CameraMetaData.Picture.Pix.Width, 
					FrameData.CameraMetaData.CameraCalib.OpenCV.FlPix.Fy / FrameData.CameraMetaData.Picture.Pix.Height
				);
				FrameData.PrincipalPoint = FVector2D(
					FrameData.CameraMetaData.CameraCalib.OpenCV.CenterPix.Cx / FrameData.CameraMetaData.Picture.Pix.Width,
					FrameData.CameraMetaData.CameraCalib.OpenCV.CenterPix.Cy / FrameData.CameraMetaData.Picture.Pix.Height
				);
			}
			
			Client->PushSubjectFrameData_AnyThread({ SourceGuid, SubjectName }, MoveTemp(FrameDataStruct));
		}
	}
}

#undef LOCTEXT_NAMESPACE
