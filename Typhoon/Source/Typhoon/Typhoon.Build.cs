// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Typhoon : ModuleRules
{
	public Typhoon(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
