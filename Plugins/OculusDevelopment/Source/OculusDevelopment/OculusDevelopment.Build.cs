// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class OculusDevelopment : ModuleRules
{

    public OculusDevelopment(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
        {
                "Core",
                "CoreUObject",
                "Engine",
                //"InputCore",
                "PhysX",
                //"FLEX", remove comment if building in the NVIDIA flex branch - NOTE when put in place FLEX only listed win32 and win64 at compatible platforms
                "HeadMountedDisplay",
                //"RHI",
                //"RenderCore",
                //"ShaderCore",
                //"NetworkReplayStreaming",
                //"AIModule",
                "UMG",
                "NavigationSystem",
                "AIModule",
                //"Renderer",
                //"UtilityShaders"
        }
        );


        PrivateDependencyModuleNames.AddRange(
			new string[]
			{
                //"Core",
                //"CoreUObject",
                //"Engine",
                "InputCore",
                //"PhysX",
                //"FLEX", remove comment if building in the NVIDIA flex branch - NOTE when put in place FLEX only listed win32 and win64 at compatible platforms
                //"HeadMountedDisplay",
                "RHI",
                "RenderCore",
                //"ShaderCore",
                "NetworkReplayStreaming",
                "AIModule",
                "UMG",
                "GameplayTags",
                "PhysXVehicles"
                //"Renderer",
                //"UtilityShaders"	
			}
            );
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
