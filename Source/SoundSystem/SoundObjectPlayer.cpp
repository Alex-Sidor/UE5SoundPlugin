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

		trackLength = CurrentSound->GetDuration();
	}

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

	currentTrackTime = time;
	
	if (time - lastSample >= sampleTimeInterval) {//create a new sample every x amount of time
		lastSample = time;
		createTimeSample(GetComponentLocation(), time, currentTrackTime);
	}

	float ttl = 1;

	for(int i = 0; i < soundTrail.Num(); i++){
		
		float dt = time - soundTrail[i].time; //difference in time

		float dp = (soundTrail[i].position - playerPosition).Length(); //difference in position

		float tillDueToStart = dt - (dp / speedOfSound);

		if (tillDueToStart < 0) {
			currentSoundSample = soundTrail[i];
			playing = true;

			ttl = time - (dp / speedOfSound);

			break;
		}

		if (i == soundTrail.Num()) {
			// couldn't find any sound

			playing = false;
		}
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

	playbackSample(ttl);
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
	static float ttlLast = 0;
	FVector pos = currentSoundSample.position;
	float time = currentSoundSample.trackTime;
	float ddt = (ttl - ttlLast)/ PrimaryComponentTick.TickInterval;
	ttlLast = ttl;

	if (ddt < 0) {
		return; // add support for playing sound backwards
	}

	if (!playing) {
		audioComponent->SetVolumeMultiplier(0.0f);
		return;
	}

	if (audioComponent)
	{

		float pitch = ddt;

		pitch = log2f(ddt) * 12; // convert from speed into octaves

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
			GEngine->AddOnScreenDebugMessage(
				-1,
				5.0f,
				FColor::Red,
				FString::SanitizeFloat(ddt)
			);

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
		currentTrackTime = trackLength * PlaybackPercent;
	}
}