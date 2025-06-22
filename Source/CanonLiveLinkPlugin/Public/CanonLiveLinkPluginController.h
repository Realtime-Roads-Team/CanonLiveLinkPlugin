// Copyright 2024 Canon, Inc. All Rights Reserved.

#pragma once

#include "LiveLinkControllerBase.h"

#include "CanonLiveLinkPluginController.generated.h"

/** Flags to control whether incoming values from LiveLink Canon FrameData should be applied or not */
USTRUCT()
struct FCanonLiveLinkPluginControllerUpdateFlags
{
	GENERATED_BODY()

	/** Whether to apply Shutter Speed if it's available in LiveLink FrameData */
	UPROPERTY(EditAnywhere, Category = "Updates")
	bool bApplyShutterSpeed = true;
};


/**
 * LiveLink Controller for the CanonRole to drive lens distortion data
 */
UCLASS()
class CANONLIVELINKPLUGIN_API UCanonLiveLinkPluginController : public ULiveLinkControllerBase
{
	GENERATED_BODY()

public:
	UCanonLiveLinkPluginController();

	//~ Begin ULiveLinkControllerBase interface
	virtual void Tick(float DeltaTime, const FLiveLinkSubjectFrameData& SubjectData) override;
	virtual bool IsRoleSupported(const TSubclassOf<ULiveLinkRole>& RoleToSupport) override;
	virtual TSubclassOf<UActorComponent> GetDesiredComponentClass() const override;
	virtual void Cleanup() override;
	//~ End ULiveLinkControllerBase interface

	//~ Begin UObject Interface
	virtual void PostDuplicate(bool bDuplicateForPIE) override;
	virtual void PostEditImport() override;
	//~ End UObject Interface

protected:
	/** Used to control which data from LiveLink is actually applied to camera */
	UPROPERTY(EditAnywhere, Category = "Settings")
	FCanonLiveLinkPluginControllerUpdateFlags UpdateFlags;
};
