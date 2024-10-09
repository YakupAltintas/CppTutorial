// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "A_Cube.generated.h"

UCLASS()
class CPPTUTUROIAL_API AA_Cube : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AA_Cube();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY()
	float healt = 100.f;

	UFUNCTION()
	void healtDeincrement(float value);

};
