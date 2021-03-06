// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "Testing_Ground.h"
#include "Testing_GroundGameMode.h"
#include "Testing_GroundHUD.h"
#include "Player/FirstPersonCharacter.h"

ATesting_GroundGameMode::ATesting_GroundGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Dynamic/Character/Behavior/Character"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATesting_GroundHUD::StaticClass();
}
