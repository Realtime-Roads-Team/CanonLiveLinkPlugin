// Copyright 2024 Canon, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "CanonLiveLinkPluginTypes.h"

#include "CanonLiveLinkPluginBPLibrary.generated.h"

UCLASS()
class UCanonLiveLinkPluginMetadataBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Canon")
	static FString getCanonMetaDataVersion(const FCanonLiveLinkPluginBlueprintData CV_MetaData);

	UFUNCTION(BlueprintCallable, Category = "Canon")
	static FCanonLiveLinkPluginCameraVer getCanonMetaDataCamera(const FCanonLiveLinkPluginBlueprintData CV_MetaData);

	UFUNCTION(BlueprintCallable, Category = "Canon")
	static FCanonLiveLinkPluginCameraLens getCanonMetaDataLens(const FCanonLiveLinkPluginBlueprintData CV_MetaData);

	UFUNCTION(BlueprintCallable, Category = "Canon")
	static FCanonLiveLinkPluginCameraSensor getCanonMetaDataSensor(const FCanonLiveLinkPluginBlueprintData CV_MetaData);

	UFUNCTION(BlueprintCallable, Category = "Canon")
	static FCanonLiveLinkPluginCameraPicture getCanonMetaDataPicture(const FCanonLiveLinkPluginBlueprintData CV_MetaData);

	UFUNCTION(BlueprintCallable, Category = "Canon")
	static FString getCanonMetaDataCameraIndex(const FCanonLiveLinkPluginBlueprintData CV_MetaData);

	UFUNCTION(BlueprintCallable, Category = "Canon")
	static FCanonLiveLinkPluginCameraAv getCanonMetaDataAv(const FCanonLiveLinkPluginBlueprintData CV_MetaData);

	UFUNCTION(BlueprintCallable, Category = "Canon")
	static FCanonLiveLinkPluginCameraTv getCanonMetaDataTv(const FCanonLiveLinkPluginBlueprintData CV_MetaData);
	
	UFUNCTION(BlueprintCallable, Category = "Canon")
	static FCanonLiveLinkPluginCameraSv getCanonMetaDataSv(const FCanonLiveLinkPluginBlueprintData CV_MetaData);

	UFUNCTION(BlueprintCallable, Category = "Canon")
	static float getCanonMetaDataNd(const FCanonLiveLinkPluginBlueprintData CV_MetaData);

	UFUNCTION(BlueprintCallable, Category = "Canon")
	static float getCanonMetaDataFocalLength(const FCanonLiveLinkPluginBlueprintData CV_MetaData);

	UFUNCTION(BlueprintCallable, Category = "Canon")
	static FCanonLiveLinkPluginCameraMatchMvData getCanonMetaDataMatchMvData(const FCanonLiveLinkPluginBlueprintData CV_MetaData);

	UFUNCTION(BlueprintCallable, Category = "Canon")
	static float getCanonMetaDataTilt(const FCanonLiveLinkPluginBlueprintData CV_MetaData);

	UFUNCTION(BlueprintCallable, Category = "Canon")
	static float getCanonMetaDataRoll(const FCanonLiveLinkPluginBlueprintData CV_MetaData);

	UFUNCTION(BlueprintCallable, Category = "Canon")
	static int getCanonMetaDataColorTemperature(const FCanonLiveLinkPluginBlueprintData CV_MetaData);

	UFUNCTION(BlueprintCallable, Category = "Canon")
	static float getCanonMetaDataTint(const FCanonLiveLinkPluginBlueprintData CV_MetaData);

	UFUNCTION(BlueprintCallable, Category = "Canon")
	static FCanonLiveLinkPluginCameraCorrection getCanonMetaDataCorrection(const FCanonLiveLinkPluginBlueprintData CV_MetaData);

	UFUNCTION(BlueprintCallable, Category = "Canon")
	static FCanonLiveLinkPluginCameraCalib getCanonMetaDataCameraCalib(const FCanonLiveLinkPluginBlueprintData CV_MetaData);
};
