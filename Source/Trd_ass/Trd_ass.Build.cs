// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Trd_ass : ModuleRules
{
	public Trd_ass(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
