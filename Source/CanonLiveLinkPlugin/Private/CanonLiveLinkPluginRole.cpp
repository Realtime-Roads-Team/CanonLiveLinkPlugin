// Copyright 2024 Canon, Inc. All Rights Reserved.

#include "CanonLiveLinkPluginRole.h"
#include "CanonLiveLinkPluginTypes.h"

#define LOCTEXT_NAMESPACE "LiveLinkRole"

UScriptStruct* UCanonLiveLinkPluginRole::GetStaticDataStruct() const
{
	return FCanonLiveLinkPluginStaticData::StaticStruct();
}

UScriptStruct* UCanonLiveLinkPluginRole::GetFrameDataStruct() const
{
	return FCanonLiveLinkPluginFrameData::StaticStruct();
}

UScriptStruct* UCanonLiveLinkPluginRole::GetBlueprintDataStruct() const
{
	return FCanonLiveLinkPluginBlueprintData::StaticStruct();
}

bool UCanonLiveLinkPluginRole::InitializeBlueprintData(const FLiveLinkSubjectFrameData& InSourceData, FLiveLinkBlueprintDataStruct& OutBlueprintData) const
{
	bool bSuccess = false;

	FCanonLiveLinkPluginBlueprintData* BlueprintData = OutBlueprintData.Cast<FCanonLiveLinkPluginBlueprintData>();
	const FCanonLiveLinkPluginStaticData* StaticData = InSourceData.StaticData.Cast<FCanonLiveLinkPluginStaticData>();
	const FCanonLiveLinkPluginFrameData* FrameData = InSourceData.FrameData.Cast<FCanonLiveLinkPluginFrameData>();
	if (BlueprintData && StaticData && FrameData)
	{
		GetStaticDataStruct()->CopyScriptStruct(&BlueprintData->StaticData, StaticData);
		GetFrameDataStruct()->CopyScriptStruct(&BlueprintData->FrameData, FrameData);
		bSuccess = true;
	}

	return bSuccess;
}

FText UCanonLiveLinkPluginRole::GetDisplayName() const
{
	return LOCTEXT("CanonRole", "Canon Camera");
}

#undef LOCTEXT_NAMESPACE