// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "RotatingActor.generated.h"

UCLASS()
class TRD_ASS_API ARotatingActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARotatingActor();
	virtual void Tick(float DeltaTime) override;
    // EditAnywhere 언리얼 디테일 패널에서 수치 변경이 가능하도록함
	// BlueprintReadWrite 블루프린트에서 읽기,쓰기 가능
	// Category = "Rotation" 언리얼에서 Rotation에 묶어서 보여줌
	UPROPERTY(EditAnywhere, Category = "Rotation")
	float RotationSpeed = 100.f;
	// 변경없는 기본 설정값 지정 
protected:
	// 게임 시작시 1회 호출
	virtual void BeginPlay() override;
	
private:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Mesh;
	//VisibleAnywhere 에디터에서 볼순있지만 수정은 불가하게함
};
