// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"

#include "Components/AudioComponent.h"
#include "Sound/SoundBase.h"

#include "SoundObjectPlayer.generated.h"

USTRUCT()
struct FSoundPair {

	GENERATED_BODY()

	UPROPERTY()
	FVector position;

	UPROPERTY()
	float time;
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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
	USoundBase* CurrentSound;

	UPROPERTY(EditAnywhere, Category = "Audio")
	FName pitchParamName = TEXT("pitch");

private:

	UPROPERTY()
	FSoundPair currentSoundSample;

	UPROPERTY()
	bool playing = false;

	UPROPERTY()
	float sampleTimeInterval = 0.0f;
	UPROPERTY()
	int maxSoundSamples = 50;

	UPROPERTY()
	UAudioComponent* audioComponent;

	UPROPERTY()
	AActor* playerRef = nullptr;

	UPROPERTY()
	float trackLength = 0;

	UPROPERTY()
	FVector playerPosition = FVector::Zero();

	UFUNCTION()
	void createTimeSample(FVector position, float time);

	UFUNCTION()
	void playbackSample(float ttl);

	UPROPERTY()
	TArray<FSoundPair> soundTrail;
};
