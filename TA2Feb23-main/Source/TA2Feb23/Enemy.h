// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemy.generated.h"

class UBoxComponent;

UCLASS()
class TA2FEB23_API AEnemy : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/* Components */

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UBoxComponent* Collider {nullptr};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* StaticMesh;

	/* Public functions */

	UFUNCTION()
		void OnOverlap(UPrimitiveComponent* OverlappedComponent,
					   AActor* OtherActor,
					   UPrimitiveComponent* OtherComponent,
					   int32 OtherBodyIndex,
					   bool bFromSweep,
					   const FHitResult& SweepResult);

	UFUNCTION()
		void DestroyEnemy();

	/* Public variables */

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "My Variables")
		float EnemySpeed = 950.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "My Variables")
		float XKillPosition;

private:

	APawn* PlayerActor = nullptr;

};
