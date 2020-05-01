// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "CGXGameJamGameMode.h"
#include "CGXGameJamPlayerController.h"
#include "CGXGameJamCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACGXGameJamGameMode::ACGXGameJamGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ACGXGameJamPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}