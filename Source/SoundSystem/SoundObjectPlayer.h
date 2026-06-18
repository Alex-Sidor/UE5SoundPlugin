// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"

#include "Components/AudioComponent.h"
#include "Sound/SoundBase.h"

#include "SoundObjectPlayer.generated.h"

UENUM(BlueprintType)
enum class ESampleStatus : uint8
{
	Waiting = 0,
	Started = 1,
	Finished = 2
};

USTRUCT()
struct FSoundSample {

	GENERATED_BODY()

	UPROPERTY()
	FVector position;

	UPROPERTY()
	float time;

	UPROPERTY()
	FVector movement;

	UPROPERTY()
	ESampleStatus status = ESampleStatus::Waiting;

	UPROPERTY()
	float interp = 0;
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SOUNDSYSTEM_API USoundObjectPlayer : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USoundObjectPlayer();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere)
	float speedOfSound = 34300;

	UPROPERTY(EditAnywhere)
	float samplePollingFrequency = 10.0f;

	UPROPERTY(EditAnywhere)
	float maxAttenuationDistance = 300.0f;

	UPROPERTY(EditAnywhere)
	int numberOfSoundPlayers = 3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
	USoundBase* CurrentSound;

	UPROPERTY(EditAnywhere, Category = "Audio")
	FName pitchParamName = TEXT("pitch");

private:
	
	//data

	UPROPERTY()
	TArray<FSoundSample> soundQueue;
	// sound samples get put in here if they are due to play
	// every audio player plays their sample. e.g sound player 1 always plays whatever is in sample 1, sound player 2, in sample 2 ect...
	// items get put in by whatever slot is free first, if it cannot be put in, it doesn't play.

	UPROPERTY()
	TArray<FSoundSample> soundTrail;

	UPROPERTY()
	TArray<UAudioComponent*> audioComponents;

	UPROPERTY()
	AActor* playerRef = nullptr;

	UPROPERTY()
	FVector lastPosition = FVector::Zero();


	//useful math numbers

	UPROPERTY()
	float sampleTimeInterval = 0.0f;

	UPROPERTY()
	float trackLength = 0;

	UPROPERTY()
	FVector playerPosition = FVector::Zero();

	UPROPERTY()
	FVector playerMovementVector = FVector::Zero();

	UPROPERTY()
	float lifeLength = 1;

	//funcs

	UFUNCTION()
	void createTimeSample(FVector position, float time, float dt);

	UFUNCTION()
	void playSamples(float dt);

	UFUNCTION()
	void addToQueue(FSoundSample sound);

	UFUNCTION()
	float getDopplerShift(FVector p0, FVector v0, FVector p1, FVector v1);

	UFUNCTION()
	void setPitch(float p, int i);

	UFUNCTION()
	void setTrack(float t, int i);

	UFUNCTION()
	void setPosition(FVector p, int i);
};
