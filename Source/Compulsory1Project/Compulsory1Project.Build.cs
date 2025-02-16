// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Compulsory1Project : ModuleRules
{
	public Compulsory1Project(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
