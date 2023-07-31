// Copyright Epic Games, Inc. All Rights Reserved.


#include "GeometrySandboxNewGameModeBase.h"
#include "SandboxPawn.h"
#include "SandboxPlayerController.h"

AGeometrySandboxNewGameModeBase::AGeometrySandboxNewGameModeBase()
{
	DefaultPawnClass = ASandboxPawn::StaticClass();
	PlayerControllerClass = ASandboxPlayerController::StaticClass();
}
