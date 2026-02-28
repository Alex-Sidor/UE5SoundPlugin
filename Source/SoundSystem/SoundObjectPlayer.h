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
	FVector start;
	UPROPERTY()
	FVector end;


	UPROPERTY()
	float startTime;
	UPROPERTY()
	float endTime;


	UPROPERTY()
	float currentInterp = 0;
	UPROPERTY()
	float lastInterp = 0;
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
	float speedOfSound = 343;

	UPROPERTY(EditAnywhere)
	int maxSoundSamples = 50;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Audio")
	UAudioComponent* AudioComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
	USoundBase* CurrentSound;

	UPROPERTY(EditAnywhere, Category = "Audio")
	FName pitchParamName = TEXT("pitch");

private:

	UPROPERTY()
	AActor* playerRef = nullptr;

	UPROPERTY()
	FVector playerPosition = FVector::Zero();

	//for creating new samples
	UPROPERTY()
	FVector lastPosition = FVector::Zero();
	UPROPERTY()
	float lastTime = 0;
	
	UPROPERTY()
	float lastSample = 0;

	UFUNCTION()
	void createTimeSample(FVector position, float time);

	UFUNCTION()
	void updatePair(int i, float time);

	UFUNCTION()
	FVector interpolatePair(int i, float interp);


	UFUNCTION()
	void playbackSample(FVector position, float pitch);

	UPROPERTY()
	TArray<FSoundPair> soundTrail;
};
