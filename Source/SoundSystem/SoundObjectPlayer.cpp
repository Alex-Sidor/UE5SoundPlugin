// Fill out your copyright notice in the Description page of Project Settings.


#include "SoundSystem/SoundObjectPlayer.h"
#include "DrawDebugHelpers.h"
#include "AudioParameter.h"
#include "Kismet/GameplayStatics.h"

USoundObjectPlayer::USoundObjectPlayer()
{
	PrimaryComponentTick.bCanEverTick = true;
	//PrimaryComponentTick.TickGroup = TG_PostPhysics; //makes it only update after physics

	audioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent"));

	if (audioComponent)
	{
		audioComponent->SetupAttachment(this);
		audioComponent->bAutoActivate = false;
	}

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

	if (audioComponent)
	{
		audioComponent->SetVolumeMultiplier(0.0f);
		audioComponent->SetSound(CurrentSound);

		audioComponent->Play();

		trackLength = CurrentSound->GetDuration();
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

			break;
		}
	}



	playbackSample(DeltaTime);
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


void USoundObjectPlayer::playbackSample(float ttl, float dt)
{
	static float trackedTime = 0;

	static float ttlLast = 0;


	for (int i = soundQueue.Num() - 1; i >= 0; i--)
	{
		
	}


	FVector pos = currentSoundSampleposition;
	FVector movement = currentSoundSample->movement;
	float time = currentSoundSample->time;

	float ddt = (ttl - ttlLast)/ dt;
	ttlLast = ttl;

	float p = 1 - FMath::Fmod(trackedTime, sampleTimeInterval);

	FVector newPos = pos - movement * p;

	if (ddt < 0) {
		return; // add support for playing sound backwards
	}

	if (!playing) {
		FAudioParameter speedParam;
		speedParam.ParamName = pitchParamName;

		speedParam.FloatParam = -INFINITY;
		speedParam.ParamType = EAudioParameterType::Float;

		audioComponent->SetParameter(MoveTemp(speedParam));

		return;
	}

	if (audioComponent)
	{

		float pitch = ddt;

		trackedTime += dt * pitch;

		pitch = log2f(ddt) * 12; // convert from speed into octaves

		audioComponent->SetWorldLocation(newPos);

		FAudioParameter speedParam;
		speedParam.ParamName = pitchParamName;

		speedParam.FloatParam = pitch;
		speedParam.ParamType = EAudioParameterType::Float;

		audioComponent->SetParameter(MoveTemp(speedParam));

		audioComponent->SetVolumeMultiplier(1.0f);

		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(
				-1,
				5.0f,
				FColor::Red,
				FString::SanitizeFloat(ddt)
			);
		}
	}
}

void USoundObjectPlayer::addToQueue(FSoundSample sound) {
	for (int i = 0; i < numberOfSoundPlayers; i++) {
		if (soundQueue[i].marked) {
			soundQueue[i] = sound;
		}
	}
}

float USoundObjectPlayer::getDopplerShift(FVector p0, FVector v0, FVector p1, FVector v1) {
	
	FVector soundDir = (p1 - p0).GetSafeNormal();

	FVector velocity = (v0 - v1) / 100.0f;
	
	float rel = FVector::DotProduct(velocity, soundDir);

	return (speedOfSound + rel) / FMath::Max(0.001f, speedOfSound); // doppler equasion
}