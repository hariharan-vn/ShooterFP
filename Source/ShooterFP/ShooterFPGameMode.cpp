// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShooterFPGameMode.h"
#include "ShooterFPHUD.h"
#include "ShooterFPCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShooterFPGameMode::AShooterFPGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AShooterFPHUD::StaticClass();
}
