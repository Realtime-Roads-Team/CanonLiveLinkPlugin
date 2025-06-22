// Copyright 2024 Canon, Inc. All Rights Reserved.

#include "CanonLiveLinkPluginController.h"

#include "CineCameraComponent.h"
#include "Engine/Engine.h"
#include "Engine/World.h"
#include "CanonLiveLinkPluginRole.h"
#include "CanonLiveLinkPluginTypes.h"
#include "Runtime/Launch/Resources/Version.h"


UCanonLiveLinkPluginController::UCanonLiveLinkPluginController()
{
}

void UCanonLiveLinkPluginController::Tick(float DeltaTime, const FLiveLinkSubjectFrameData& SubjectData)
{
	const FCanonLiveLinkPluginStaticData* StaticData = SubjectData.StaticData.Cast<FCanonLiveLinkPluginStaticData>();
	const FCanonLiveLinkPluginFrameData* FrameData = SubjectData.FrameData.Cast<FCanonLiveLinkPluginFrameData>();

	if (StaticData && FrameData)
	{
#if ENGINE_MAJOR_VERSION == 4
		if (UCameraComponent* CameraComponent = Cast<UCameraComponent>(AttachedComponent))
#elif ENGINE_MAJOR_VERSION == 5
#if ENGINE_MINOR_VERSION == 0
		if (UCameraComponent* CameraComponent = Cast<UCameraComponent>(AttachedComponent))
#else
		if (UCameraComponent* CameraComponent = Cast<UCameraComponent>(GetAttachedComponent()))
#endif
#endif
		{
			if (UpdateFlags.bApplyShutterSpeed)
			{
				CameraComponent->PostProcessSettings.CameraShutterSpeed = FrameData->ShutterSpeed;
			}

			if (UCineCameraComponent* CineCameraComponent = Cast<UCineCameraComponent>(CameraComponent))
			{
				FVector Location;
				Location.X = FrameData->EntrancePupil;
				Location.Y = 0;
				Location.Z = 0;
				CineCameraComponent->SetRelativeLocation( Location );
			}
		}
	}
}

bool UCanonLiveLinkPluginController::IsRoleSupported(const TSubclassOf<ULiveLinkRole>& RoleToSupport)
{
	return RoleToSupport == UCanonLiveLinkPluginRole::StaticClass();
}

TSubclassOf<UActorComponent> UCanonLiveLinkPluginController::GetDesiredComponentClass() const
{
	return UCineCameraComponent::StaticClass();
}

void UCanonLiveLinkPluginController::Cleanup()
{
}

void UCanonLiveLinkPluginController::PostDuplicate(bool bDuplicateForPIE)
{
}

void UCanonLiveLinkPluginController::PostEditImport()
{
}
