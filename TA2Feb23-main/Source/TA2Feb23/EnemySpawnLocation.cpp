// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemySpawnLocation.h"

float CurrentSpawnCycle = 0.0f;

// Sets default values
AEnemySpawnLocation::AEnemySpawnLocation()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SpawnTime = 5.0f;
	Variance = 2.0f;

}

// Called when the game starts or when spawned
void AEnemySpawnLocation::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemySpawnLocation::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	CurrentSpawnCycle += DeltaTime;
	if (CurrentSpawnCycle >= SpawnTime)
	{
		CurrentSpawnCycle -= SpawnTime + FMath::RandRange(0.0f, Variance);
		GetWorld()->SpawnActor<AActor>(SpawnedObject, GetActorLocation(), GetActorRotation());
	}
}

