// Copyright C 2019 Virtual Lilies

using UnrealBuildTool;
using System.Collections.Generic;

public class OculusDevEditorTarget : TargetRules
{
	public OculusDevEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "OculusDev" } );
	}
}
