// Copyright 2024 Canon, Inc. All Rights Reserved.

#pragma once

#include "LiveLinkLensRole.h"

#include "CanonLiveLinkPluginRole.generated.h"

/**
 * Role associated with lens data
 */
UCLASS(BlueprintType, meta = (DisplayName = "Canon Role"))
class CANONLIVELINKPLUGIN_API UCanonLiveLinkPluginRole : public ULiveLinkLensRole
{
	GENERATED_BODY()

public:
	//~ Begin ULiveLinkRole interface
	virtual UScriptStruct* GetStaticDataStruct() const override;
	virtual UScriptStruct* GetFrameDataStruct() const override;
	virtual UScriptStruct* GetBlueprintDataStruct() const override;

	virtual bool InitializeBlueprintData(const FLiveLinkSubjectFrameData& InSourceData, FLiveLinkBlueprintDataStruct& OutBlueprintData) const override;

	virtual FText GetDisplayName() const override;
	//~ End ULiveLinkRole interface
};
