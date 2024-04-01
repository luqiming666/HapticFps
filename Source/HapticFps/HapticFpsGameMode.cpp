// Copyright Epic Games, Inc. All Rights Reserved.

#include "HapticFpsGameMode.h"
#include "HapticFpsHUD.h"
#include "HapticFpsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHapticFpsGameMode::AHapticFpsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AHapticFpsHUD::StaticClass();
}
