// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"

void AMyPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (ScreenUIWidget)
	{
		ScreenUI = CreateWidget<UUserWidget>(this, ScreenUIWidget);
	}

	ScreenUI->AddToViewport();
	ScreenUI->SetVisibility(ESlateVisibility::Visible);
}
