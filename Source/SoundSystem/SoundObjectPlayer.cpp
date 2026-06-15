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

	maxSoundSamples = sampleLifeLength / sampleTimeInterval;


	if (audioComponent)
	{
		audioComponent->SetVolumeMultiplier(0.0f);
		audioComponent->SetSound(CurrentSound);

		audioComponent->OnAudioPlaybackPercent.AddDynamic(this, &USoundObjectPlayer::HandlePlaybackPercentage);

		audioComponent->Play();
	}

	trackLength = CurrentSound->GetDuration();

	playerRef = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
}


// Called every frame
void USoundObjectPlayer::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	//update player location

	if (playerRef)
	{
		playerPosition = playerRef->GetActorLocation();
	}

	float time = GetWorld()->GetTimeSeconds();

	currentTrackTime = FMath::Fmod(time, trackLength);
	
	if (time - lastSample >= sampleTimeInterval) {//create a new sample every x amount of time
		lastSample = time;
		createTimeSample(GetComponentLocation(), time, currentTrackTime);
	}

	for (int i = 0; i < soundTrail.Num(); i++) {
		
	}

	/*if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(
			-1,
			5.0f,
			FColor::Red,
			FString::FromInt(amountOfcandidate)
		);
	}*/

	playbackSample(PrimaryComponentTick.TickInterval);
}

void USoundObjectPlayer::createTimeSample(FVector position, float time, float trackTime)
{
	if (soundTrail.Num() >= maxSoundSamples && soundTrail.Num() != 0) {
		soundTrail.RemoveAt(0, EAllowShrinking::No);
	}

	FSoundPair sp;

	sp.position = position;
	sp.time = time;
	sp.trackTime = trackTime;

	soundTrail.Add(sp);
}


void USoundObjectPlayer::playbackSample(float ttl)
{
	if (!playing) {
		audioComponent->SetVolumeMultiplier(0.0f);
		return;
	}

	if (audioComponent)
	{
		FVector pos = currentSoundSample.position;
		float time = currentSoundSample.time;

		float pitch = (time - currentPlayingTrackTime) / ttl;

		pitch = log2f(pitch) * 12; // convert from speed into octaves

		audioComponent->SetWorldLocation(pos);

		FAudioParameter speedParam;
		speedParam.ParamName = pitchParamName;

		speedParam.FloatParam = pitch;
		speedParam.ParamType = EAudioParameterType::Float;

		audioComponent->SetParameter(MoveTemp(speedParam));

		audioComponent->SetVolumeMultiplier(1.0f);

		//Debug

		if (GEngine)
		{
			/*GEngine->AddOnScreenDebugMessage(
				-1,
				5.0f,
				FColor::Red,
				FString::SanitizeFloat(pitch)
			);*/

			DrawDebugSphere(
				GetWorld(),
				pos,
				500.0f,
				16,
				FColor::Red,
				false,
				0.0f,
				0,
				2.0f
			);
		}
	}
}

void USoundObjectPlayer::HandlePlaybackPercentage(const USoundWave* PlayingSoundWave, const float PlaybackPercent)
{
	if (PlayingSoundWave)
	{
		float CurrentTimeSeconds = trackLength * PlaybackPercent;
	}
}