

using UnrealBuildTool;
using System.Collections.Generic;

public class EfficityTarget : TargetRules
{
	public EfficityTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "Efficity" } );
	}
}
