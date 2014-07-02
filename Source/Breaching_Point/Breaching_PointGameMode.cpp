// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#include "Breaching_Point.h"
#include "Breaching_PointGameMode.h"
#include "Breaching_PointHUD.h"

ABreaching_PointGameMode::ABreaching_PointGameMode(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FObjectFinder<UBlueprint> PlayerPawnObject(TEXT("/Game/Blueprints/MyCharacter"));
	if (PlayerPawnObject.Object != NULL)
	{
		DefaultPawnClass = (UClass*)PlayerPawnObject.Object->GeneratedClass;
	}

	// use our custom HUD class
	HUDClass = ABreaching_PointHUD::StaticClass();
}
