// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ShooterFP : ModuleRules
{
	public ShooterFP(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
