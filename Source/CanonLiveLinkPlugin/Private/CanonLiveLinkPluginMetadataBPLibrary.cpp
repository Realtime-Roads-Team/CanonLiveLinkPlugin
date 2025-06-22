// Copyright 2024 Canon, Inc. All Rights Reserved.

#include "CanonLiveLinkPluginBPLibrary.h"

FString UCanonLiveLinkPluginMetadataBPLibrary::getCanonMetaDataVersion(const FCanonLiveLinkPluginBlueprintData CV_MetaData)
{
	return CV_MetaData.FrameData.CameraMetaData.Version;
}

FCanonLiveLinkPluginCameraVer UCanonLiveLinkPluginMetadataBPLibrary::getCanonMetaDataCamera(const FCanonLiveLinkPluginBlueprintData CV_MetaData)
{
	return CV_MetaData.FrameData.CameraMetaData.Camera;
}

FCanonLiveLinkPluginCameraLens UCanonLiveLinkPluginMetadataBPLibrary::getCanonMetaDataLens(const FCanonLiveLinkPluginBlueprintData CV_MetaData)
{
	return CV_MetaData.FrameData.CameraMetaData.Lens;
}

FCanonLiveLinkPluginCameraSensor UCanonLiveLinkPluginMetadataBPLibrary::getCanonMetaDataSensor(const FCanonLiveLinkPluginBlueprintData CV_MetaData)
{
	return CV_MetaData.FrameData.CameraMetaData.Sensor;
}

FCanonLiveLinkPluginCameraPicture UCanonLiveLinkPluginMetadataBPLibrary::getCanonMetaDataPicture(const FCanonLiveLinkPluginBlueprintData CV_MetaData)
{
	return CV_MetaData.FrameData.CameraMetaData.Picture;
}

FString UCanonLiveLinkPluginMetadataBPLibrary::getCanonMetaDataCameraIndex(const FCanonLiveLinkPluginBlueprintData CV_MetaData)
{
	return CV_MetaData.FrameData.CameraMetaData.CameraIndex;
}

FCanonLiveLinkPluginCameraAv UCanonLiveLinkPluginMetadataBPLibrary::getCanonMetaDataAv(const FCanonLiveLinkPluginBlueprintData CV_MetaData)
{
	return CV_MetaData.FrameData.CameraMetaData.Av;
}

FCanonLiveLinkPluginCameraTv UCanonLiveLinkPluginMetadataBPLibrary::getCanonMetaDataTv(const FCanonLiveLinkPluginBlueprintData CV_MetaData)
{
	return CV_MetaData.FrameData.CameraMetaData.Tv;
}

FCanonLiveLinkPluginCameraSv UCanonLiveLinkPluginMetadataBPLibrary::getCanonMetaDataSv(const FCanonLiveLinkPluginBlueprintData CV_MetaData)
{
	return CV_MetaData.FrameData.CameraMetaData.Sv;
}

float UCanonLiveLinkPluginMetadataBPLibrary::getCanonMetaDataNd(const FCanonLiveLinkPluginBlueprintData CV_MetaData)
{
	return CV_MetaData.FrameData.CameraMetaData.Nd;
}

float UCanonLiveLinkPluginMetadataBPLibrary::getCanonMetaDataFocalLength(const FCanonLiveLinkPluginBlueprintData CV_MetaData)
{
	return CV_MetaData.FrameData.CameraMetaData.FocalLength;
}

FCanonLiveLinkPluginCameraMatchMvData UCanonLiveLinkPluginMetadataBPLibrary::getCanonMetaDataMatchMvData(const FCanonLiveLinkPluginBlueprintData CV_MetaData)
{
	return CV_MetaData.FrameData.CameraMetaData.MatchMvData;
}

float UCanonLiveLinkPluginMetadataBPLibrary::getCanonMetaDataTilt(const FCanonLiveLinkPluginBlueprintData CV_MetaData)
{
	return CV_MetaData.FrameData.CameraMetaData.Tilt;
}

float UCanonLiveLinkPluginMetadataBPLibrary::getCanonMetaDataRoll(const FCanonLiveLinkPluginBlueprintData CV_MetaData)
{
	return CV_MetaData.FrameData.CameraMetaData.Roll;
}

int UCanonLiveLinkPluginMetadataBPLibrary::getCanonMetaDataColorTemperature(const FCanonLiveLinkPluginBlueprintData CV_MetaData)
{
	return CV_MetaData.FrameData.CameraMetaData.ColorTemperature;
}

float UCanonLiveLinkPluginMetadataBPLibrary::getCanonMetaDataTint(const FCanonLiveLinkPluginBlueprintData CV_MetaData)
{
	return CV_MetaData.FrameData.CameraMetaData.Tint;
}

FCanonLiveLinkPluginCameraCorrection UCanonLiveLinkPluginMetadataBPLibrary::getCanonMetaDataCorrection(const FCanonLiveLinkPluginBlueprintData CV_MetaData)
{
	return CV_MetaData.FrameData.CameraMetaData.Correction;
}

FCanonLiveLinkPluginCameraCalib UCanonLiveLinkPluginMetadataBPLibrary::getCanonMetaDataCameraCalib(const FCanonLiveLinkPluginBlueprintData CV_MetaData)
{
	return CV_MetaData.FrameData.CameraMetaData.CameraCalib;
}
