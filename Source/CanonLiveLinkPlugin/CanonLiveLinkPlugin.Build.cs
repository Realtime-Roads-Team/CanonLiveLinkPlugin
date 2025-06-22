// Copyright 2024 Canon, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CanonLiveLinkPlugin : ModuleRules
{
	public CanonLiveLinkPlugin(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"LiveLinkInterface",
				"CinematicCamera",
				"LiveLinkComponents",
				"LiveLinkLens",
				"Messaging",
			});

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"InputCore",
				"Json",
				"JsonUtilities",
				"Networking",
				"Slate",
				"SlateCore",
				"Sockets",
			});
	}
}
