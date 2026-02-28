// Fill out your copyright notice in the Description page of Project Settings.


#include "SoundSystem/MovingActor.h"

// Sets default values
AMovingActor::AMovingActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMovingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
	float interpValue = fmod(time,2);

	if (interpValue > 1) {
		interpValue = 2 - interpValue;
	}

	FVector position = ((endPosition - startPosition) * interpValue) + startPosition;

	SetActorLocation(position);

	time += DeltaTime * (speed/ (endPosition - startPosition).Length());


}

