// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "CGLXGameMode.h"
#include "CGLXPawn.h"
#include "CGLXHud.h"

ACGLXGameMode::ACGLXGameMode()
{
	DefaultPawnClass = ACGLXPawn::StaticClass();
	HUDClass = ACGLXHud::StaticClass();
}
