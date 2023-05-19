// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Blueprint/UserWidget.h"
#include "MyPlayer.h"
#include <TA2Feb23Classes.h>
#include "MyPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class TA2FEB23_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
		TSubclassOf<UUserWidget> ScreenUIWidget;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
		TSubclassOf<UUserWidget> AmmoWidget;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
		TSubclassOf<UUserWidget> HPWidget;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
		UUserWidget* ScreenUI = nullptr;
};
