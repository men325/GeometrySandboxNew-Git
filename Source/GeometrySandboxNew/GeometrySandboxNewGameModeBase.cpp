// Copyright Epic Games, Inc. All Rights Reserved.


#include "GeometrySandboxNewGameModeBase.h"
#include "SandboxPawn.h"

AGeometrySandboxNewGameModeBase::AGeometrySandboxNewGameModeBase()
{
	DefaultPawnClass = ASandboxPawn::StaticClass();
}
