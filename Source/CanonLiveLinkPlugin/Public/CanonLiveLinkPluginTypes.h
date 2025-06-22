// Copyright 2024 Canon, Inc. All Rights Reserved.

#pragma once

#include "LiveLinkLensTypes.h"
#include "CineCameraComponent.h"

#include "CanonLiveLinkPluginTypes.generated.h"

/**
 * Struct for static lens data
 */
USTRUCT(BlueprintType)
struct CANONLIVELINKPLUGIN_API FCanonLiveLinkPluginStaticData : public FLiveLinkLensStaticData
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct CANONLIVELINKPLUGIN_API FCanonLiveLinkPluginCameraVer
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	FString Model;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	FString Serial;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	FString Version;
};

USTRUCT(BlueprintType)
struct CANONLIVELINKPLUGIN_API FCanonLiveLinkPluginCameraLens
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	FString Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	FString Serial;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	FString Version;
};

USTRUCT(BlueprintType)
struct CANONLIVELINKPLUGIN_API FCanonLiveLinkPluginCameraSensorSize
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	int Width = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	int Height = 0;
};

USTRUCT(BlueprintType)
struct CANONLIVELINKPLUGIN_API FCanonLiveLinkPluginCameraSensorPix
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	int Width = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	int Height = 0;
};

USTRUCT(BlueprintType)
struct CANONLIVELINKPLUGIN_API FCanonLiveLinkPluginCameraSensorFps
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	int Numerator = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	int Denominator = 0;
};

USTRUCT(BlueprintType)
struct CANONLIVELINKPLUGIN_API FCanonLiveLinkPluginCameraSensor
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	FCanonLiveLinkPluginCameraSensorSize Size;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	FCanonLiveLinkPluginCameraSensorPix Pix;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	FCanonLiveLinkPluginCameraSensorFps Fps;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	int ExpTime = 0;
};

USTRUCT(BlueprintType)
struct CANONLIVELINKPLUGIN_API FCanonLiveLinkPluginCameraPicturePix
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	float Width = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	float Height = 0.0;
};


USTRUCT(BlueprintType)
struct CANONLIVELINKPLUGIN_API FCanonLiveLinkPluginCameraPicture
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	FCanonLiveLinkPluginCameraPicturePix Pix;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	float Fps = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	FString Scan;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	FString Timecode;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	int SubFrame = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	bool DropFrame = true;
};

USTRUCT(BlueprintType)
struct CANONLIVELINKPLUGIN_API FCanonLiveLinkPluginCameraAv
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	int F = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	int T = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	int Shape = 0;
};

USTRUCT(BlueprintType)
struct CANONLIVELINKPLUGIN_API FCanonLiveLinkPluginCameraTv
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	int Angle = 0;
};

USTRUCT(BlueprintType)
struct CANONLIVELINKPLUGIN_API FCanonLiveLinkPluginCameraSv
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	int Iso = 0;
};

USTRUCT(BlueprintType)
struct CANONLIVELINKPLUGIN_API FCanonLiveLinkPluginCameraMatchMvData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	int MatchMvDataX = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	int MatchMvDataY = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	int MatchMvDataZ = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	int MatchMvDataPicth = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	int MatchMvDataYaw = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	int MatchMvDataRoll = 0;
};

USTRUCT(BlueprintType)
struct CANONLIVELINKPLUGIN_API FCanonLiveLinkPluginCameraCorrection
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	FString Distortion;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	FString Shading;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	FString ChromaAberration;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	FString FocusBreathing;
};

USTRUCT(BlueprintType)
struct CANONLIVELINKPLUGIN_API FCanonLiveLinkPluginCameraCalibSensorSize
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	float Width = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	float Height = 0.0;
};

USTRUCT(BlueprintType)
struct CANONLIVELINKPLUGIN_API FCanonLiveLinkPluginCameraCalibFlPix
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	float Fx = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	float Fy = 0.0;
};

USTRUCT(BlueprintType)
struct CANONLIVELINKPLUGIN_API FCanonLiveLinkPluginCameraCalibCenterPix
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	float Cx = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	float Cy = 0.0;
};

USTRUCT(BlueprintType)
struct CANONLIVELINKPLUGIN_API FCanonLiveLinkPluginCameraCalibKn
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	float K1 = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	float K2 = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	float K3 = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	float K4 = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	float K5 = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	float K6 = 0.0;
};

USTRUCT(BlueprintType)
struct CANONLIVELINKPLUGIN_API FCanonLiveLinkPluginCameraCalibPn
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	float P1 = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	float P2 = 0.0;
};

USTRUCT(BlueprintType)
struct CANONLIVELINKPLUGIN_API FCanonLiveLinkPluginCameraCalibDistortion
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	FCanonLiveLinkPluginCameraCalibKn Kn;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	FCanonLiveLinkPluginCameraCalibPn Pn;
};

USTRUCT(BlueprintType)
struct CANONLIVELINKPLUGIN_API FCanonLiveLinkPluginCameraCalibOpenCV
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	FCanonLiveLinkPluginCameraCalibFlPix FlPix;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	FCanonLiveLinkPluginCameraCalibCenterPix CenterPix;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	FCanonLiveLinkPluginCameraCalibDistortion Distortion;
};

USTRUCT(BlueprintType)
struct CANONLIVELINKPLUGIN_API FCanonLiveLinkPluginCameraCalib
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	FCanonLiveLinkPluginCameraCalibSensorSize SensorSize;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	float FlOutImg = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	FCanonLiveLinkPluginCameraCalibOpenCV OpenCV;
};

USTRUCT(BlueprintType)
struct CANONLIVELINKPLUGIN_API FCanonLiveLinkPluginCameraMetaData
{
	GENERATED_BODY()

	// version
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	FString Version;
	// camera
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	FCanonLiveLinkPluginCameraVer Camera;
	// lens
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	FCanonLiveLinkPluginCameraLens Lens;
	//sensor
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	FCanonLiveLinkPluginCameraSensor Sensor;
	//picture
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	FCanonLiveLinkPluginCameraPicture Picture;
	//cameraIdx
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	FString CameraIndex;
	//av
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	FCanonLiveLinkPluginCameraAv Av;
	//tv
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	FCanonLiveLinkPluginCameraTv Tv;
	//sv
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	FCanonLiveLinkPluginCameraSv Sv;
	//nd
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	float Nd = 0.0;
	//focalLength
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	float FocalLength = 0.0;
	//focusDistance
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	float FocusDistance = 0.0;
	//matchMvData
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	FCanonLiveLinkPluginCameraMatchMvData MatchMvData;
	//tilt
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	float Tilt = 0.0;
	//roll
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	float Roll = 0.0;
	//colorTemp
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	int ColorTemperature = 0;
	//tint
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	float Tint = 0.0;
	//correction
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	FCanonLiveLinkPluginCameraCorrection Correction;
	//entPupilPos
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	float EntrancePupil = 0.0;
	//cameraCalib
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	FCanonLiveLinkPluginCameraCalib CameraCalib;
};

/**
 * Struct for dynamic (per-frame) lens data
 */
USTRUCT(BlueprintType)
struct CANONLIVELINKPLUGIN_API FCanonLiveLinkPluginFrameData : public FLiveLinkLensFrameData
{
	GENERATED_BODY()

	// Entrance Pupil Position of the camera
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	float EntrancePupil = 0.0;

	// Shutter Speed of the camera in terms of seconds
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	float ShutterSpeed = 60.0;

	// Additional CameraMetaData
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	FCanonLiveLinkPluginCameraMetaData CameraMetaData;
};



/**
 * Facility structure to handle lens data in blueprint
 */
USTRUCT(BlueprintType)
struct CANONLIVELINKPLUGIN_API FCanonLiveLinkPluginBlueprintData : public FLiveLinkBaseBlueprintData
{
	GENERATED_BODY()

	/** Static data that should not change every frame */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	FCanonLiveLinkPluginStaticData StaticData;

	/** Dynamic data that can change every frame  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LiveLink")
	FCanonLiveLinkPluginFrameData FrameData;
};
