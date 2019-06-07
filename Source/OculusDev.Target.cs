// Copyright C 2019 Virtual Lilies

using UnrealBuildTool;
using System.Collections.Generic;

public class OculusDevTarget : TargetRules
{
	public OculusDevTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "OculusDev" } );
	}
}
