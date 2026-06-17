// Fill out your copyright notice in the Description page of Project Settings.


#include "SoundSystem/SoundObjectPlayer.h"
#include "DrawDebugHelpers.h"
#include "AudioParameter.h"
#include "Kismet/GameplayStatics.h"

USoundObjectPlayer::USoundObjectPlayer()
{
	PrimaryComponentTick.bCanEverTick = true;
	//PrimaryComponentTick.TickGroup = TG_PostPhysics; //makes it only update after physics

	PrimaryComponentTick.TickInterval = 0.1f;
}

void USoundObjectPlayer::BeginPlay()
{
	Super::BeginPlay();

	if (samplePollingFrequency == 0.0f) {
		sampleTimeInterval = 0.1f;
	}
	else {
		sampleTimeInterval = 1.0f / samplePollingFrequency;
	}

	float sampleLifeLength = maxAttenuationDistance / speedOfSound;

	for (int i = 0; i < numberOfSoundPlayers; i++)
	{
		FSoundSample EmptySample;
		EmptySample.status = ESampleStatus::Finished;
		soundQueue.Add(EmptySample);
	}

	for (int i = 0; i < numberOfSoundPlayers; i++) {
		FName name = *FString::Printf(TEXT("AudioComponent_%d"), i);

		UAudioComponent* NewComp = NewObject<UAudioComponent>(this, name);

		if (NewComp)
		{
			NewComp->RegisterComponent();
			NewComp->AttachToComponent(this, FAttachmentTransformRules::KeepRelativeTransform);
			NewComp->bAutoActivate = false;
			NewComp->SetSound(CurrentSound);

			audioComponents.Add(NewComp);
		}
	}

	playerRef = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	this->SetComponentTickInterval(sampleTimeInterval);
}


// Called every frame
void USoundObjectPlayer::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	//update player location

	if (playerRef)
	{
		playerPosition = playerRef->GetActorLocation();
		playerMovementVector = playerRef->GetVelocity();
	}

	float time = GetWorld()->GetTimeSeconds();

	createTimeSample(GetComponentLocation(), time, DeltaTime);

	for (int i = soundTrail.Num() - 1; i >= 0; i--)
	{
		float dt = time - soundTrail[i].time;
		float dp = (soundTrail[i].position - playerPosition).Length();
		float soundTime = (dp / speedOfSound);

		if (dt >= soundTime)
		{
			addToQueue(soundTrail[i]);

			soundTrail.RemoveAt(i);
		}
	}

	playSamples(DeltaTime);
}

void USoundObjectPlayer::createTimeSample(FVector position, float time, float dt)
{
	static FVector pos = FVector::Zero();

	FVector change = position - pos;
	pos = position;

	FSoundSample sp;

	sp.position = position;
	sp.time = time;
	sp.movement = change;

	soundTrail.Add(sp);
}


void USoundObjectPlayer::playSamples(float dt)
{
	
	for (int i = soundQueue.Num() - 1; i >= 0; i--){
		if (soundQueue[i].status == ESampleStatus::Waiting) {
			setTrack(soundQueue[i].time, i);
			soundQueue[i].status = ESampleStatus::Started;
		}

		if (soundQueue[i].status == ESampleStatus::Started) {

			soundQueue[i].interp += dt;

			FVector soundPos = (soundQueue[i].interp * soundQueue[i].movement) + soundQueue[i].position;

			float pitch = getDopplerShift(soundPos, soundQueue[i].movement / dt, playerPosition, playerMovementVector);

			setPitch(pitch, i);
			
			setPosition(soundPos, i);

			if (soundQueue[i].interp > sampleTimeInterval) {
				audioComponents[i]->Stop();
				soundQueue[i].status = ESampleStatus::Finished;
			}
		}
	}
}

void USoundObjectPlayer::addToQueue(FSoundSample sound) {
	for (int i = 0; i < numberOfSoundPlayers; i++) {
		if (soundQueue[i].status == ESampleStatus::Finished) {

			soundQueue[i].status = ESampleStatus::Waiting;
			soundQueue[i].interp = 0;

			soundQueue[i] = sound;
			break;
		}
	}
}

float USoundObjectPlayer::getDopplerShift(FVector p0, FVector v0, FVector p1, FVector v1) {
	
	FVector soundDir = (p1 - p0).GetSafeNormal();

	FVector velocity = (v0 - v1) / 100.0f;
	
	float rel = FVector::DotProduct(velocity, soundDir);

	return (speedOfSound + rel) / FMath::Max(0.001f, speedOfSound); // doppler equasion
}

void USoundObjectPlayer::setPitch(float p, int i)
{
	FAudioParameter speedParam;
	speedParam.ParamName = pitchParamName;
	speedParam.FloatParam = log2f(p) * 12;
	speedParam.ParamType = EAudioParameterType::Float;

	audioComponents[i]->SetParameter(MoveTemp(speedParam));

	//audioComponents[index]->SetVolumeMultiplier(1.0f);
}

void USoundObjectPlayer::setPosition(FVector p, int i) {
	audioComponents[i]->SetWorldLocation(p);
}

void USoundObjectPlayer::setTrack(float p, int i)
{
	audioComponents[i]->Play(p);
}
