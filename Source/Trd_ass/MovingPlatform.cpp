// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"

AMovingPlatform::AMovingPlatform()
{
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));		
	RootComponent = Mesh;
}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();

	StartLocation = GetActorLocation();
}

void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector CurrentLocation = GetActorLocation();

	if (bMoveForward)
	{
		CurrentLocation.X += MoveSpeed * DeltaTime;

		if (CurrentLocation.X >= StartLocation.X + MaxRange)
		{
			bMoveForward = false;
		}
	}
	else
	{
		CurrentLocation.X -= MoveSpeed * DeltaTime;

		if (CurrentLocation.X <= StartLocation.X)
		{
			bMoveForward = true;
		}
	}

	SetActorLocation(CurrentLocation);
}
