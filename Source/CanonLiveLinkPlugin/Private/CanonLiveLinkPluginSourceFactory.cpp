// Copyright 2024 Canon, Inc. All Rights Reserved.

#include "CanonLiveLinkPluginSourceFactory.h"
#include "CanonLiveLinkPluginSource.h"
#include "SCanonLiveLinkPluginSourceFactory.h"

#define LOCTEXT_NAMESPACE "CanonLiveLinkPluginSourceFactory"

FText UCanonLiveLinkPluginSourceFactory::GetSourceDisplayName() const
{
	return LOCTEXT("SourceDisplayName", "Canon Live Link Plugin");
}

FText UCanonLiveLinkPluginSourceFactory::GetSourceTooltip() const
{
	return LOCTEXT("SourceTooltip", "Create a connection to a CVProtocol Stream");
}

TSharedPtr<SWidget> UCanonLiveLinkPluginSourceFactory::BuildCreationPanel(FOnLiveLinkSourceCreated InOnLiveLinkSourceCreated) const
{
	return SNew(SCanonLiveLinkPluginSourceFactory)
		.OnOkClicked(SCanonLiveLinkPluginSourceFactory::FOnOkClicked::CreateUObject(this, &UCanonLiveLinkPluginSourceFactory::OnOkClicked, InOnLiveLinkSourceCreated));
}

TSharedPtr<ILiveLinkSource> UCanonLiveLinkPluginSourceFactory::CreateSource(const FString& InConnectionString) const
{
	FIPv4Endpoint DeviceEndPoint;
	if (!FIPv4Endpoint::Parse(InConnectionString, DeviceEndPoint))
	{
		return TSharedPtr<ILiveLinkSource>();
	}

	return MakeShared<FCanonLiveLinkPluginSource>(DeviceEndPoint);
}

void UCanonLiveLinkPluginSourceFactory::OnOkClicked(FIPv4Endpoint InEndpoint, FOnLiveLinkSourceCreated InOnLiveLinkSourceCreated) const
{
	InOnLiveLinkSourceCreated.ExecuteIfBound(MakeShared<FCanonLiveLinkPluginSource>(InEndpoint), InEndpoint.ToString());
}

#undef LOCTEXT_NAMESPACE