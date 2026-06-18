// Fill out your copyright notice in the Description page of Project Settings.

#include "RotatingActor.h"


ARotatingActor::ARotatingActor()
{
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = Mesh;
}


void ARotatingActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARotatingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	AddActorLocalRotation(
		FRotator(
			0.f,
			RotationSpeed * DeltaTime,
			0.f
		)
	);

}
