// Fill out your copyright notice in the Description page of Project Settings.


#include "A_Cube.h"

// Sets default values
AA_Cube::AA_Cube()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AA_Cube::BeginPlay()
{
	Super::BeginPlay();
	
}

void AA_Cube::healtDeincrement(float value) {
	healt += value;
}

// Called every frame
void AA_Cube::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

