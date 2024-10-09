// Fill out your copyright notice in the Description page of Project Settings.

#include "CollisionActor.h"
#include "Components/BoxComponent.h"
#include "CppTuturoialCharacter.h"

ACollisionActor::ACollisionActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponentCpp"));
	BoxCollision->SetupAttachment(GetRootComponent());
	BoxCollision->SetBoxExtent(FVector(50.f, 50.f, 50.f));
	//BoxCollision->SetCollisionProfileName(TEXT("Trigger"));
	BoxCollision->OnComponentBeginOverlap.AddDynamic(this, &ACollisionActor::OnOverlapBegin);
	BoxCollision->OnComponentEndOverlap.AddDynamic(this, &ACollisionActor::OnOverlapEnd);

}

void ACollisionActor::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor,
	class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
	ACppTuturoialCharacter* character = Cast<ACppTuturoialCharacter>(OtherActor);
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
		// Akt�r ismini al
		FString actorName = OtherActor->GetName();

		// Akt�r ismini ekrana yazd�r
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, FString::Printf(TEXT("Akt�r ismi: %s"), *actorName));
		}
	}
}

	void ACollisionActor::OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor,
		class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {

	}


// Called when the game starts or when spawned
void ACollisionActor::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ACollisionActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

