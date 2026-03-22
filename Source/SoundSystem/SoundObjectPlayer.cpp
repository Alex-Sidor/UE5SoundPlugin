// Fill out your copyright notice in the Description page of Project Settings.


#include "SoundSystem/SoundObjectPlayer.h"
#include "DrawDebugHelpers.h"
#include "AudioParameter.h"
#include "Kismet/GameplayStatics.h"

USoundObjectPlayer::USoundObjectPlayer()
{
	PrimaryComponentTick.bCanEverTick = true;
	//PrimaryComponentTick.TickGroup = TG_PostPhysics; //makes it only update after physics
	
	for (int i = 0; i < amountOfSoundPlayer; i++) {
		FName name = *FString::Printf(TEXT("AudioComponent_%d"), i);

		UAudioComponent* NewComp = CreateDefaultSubobject<UAudioComponent>(name);

		if (NewComp)
		{
			NewComp->SetupAttachment(this);
			NewComp->bAutoActivate = false;
			audioComponents.Add(NewComp);
		}
	}
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
	
	for (int i = 0; i < amountOfSoundPlayer; i++) {
		if (audioComponents[i])
		{
			audioComponents[i]->SetSound(CurrentSound);
			audioComponents[i]->Play();
			audioComponents[i]->SetVolumeMultiplier(0.0f);
		}
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
	
	if (time - lastSample >= sampleTimeInterval) {//create a new sample every x amount of time
		lastSample = time;
		createTimeSample(GetComponentLocation(), time);
	}

	updatePairs(time); //update the cache values of all sound segments

	int amountOfcandidate = 0;

	for (int i = 0; i < soundTrail.Num(); i++) {
		float currentInterp = soundTrail[i].currentInterp;
		float lastInterp = soundTrail[i].lastInterp;

		if (0 <= currentInterp && currentInterp <= 1) {

			float dtime = (currentInterp - lastInterp);

			FVector position = interpolatePair(i, currentInterp);
			playbackSample(position, dtime, amountOfcandidate);
			
			amountOfcandidate++;
			if (amountOfcandidate >= amountOfSoundPlayer) {
				break;
			}
		}
	}

	//mute the rest of the samples that are not playing
	for (int i = amountOfcandidate; i < amountOfSoundPlayer; i++) {
		audioComponents[i]->SetVolumeMultiplier(0.0f);
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
}

void USoundObjectPlayer::createTimeSample(FVector position, float time)
{

	if (soundTrail.Num() >= maxSoundSamples && soundTrail.Num() != 0) {
		soundTrail.RemoveAt(0, EAllowShrinking::No);
	}

	FSoundPair sp;

	//these never change
	sp.start = lastPosition;
	sp.startTime = lastTime;

	//set default values (difference is 0 so this sample has 0 length)
	sp.end = position;
	sp.endTime = time;


	lastPosition = position;
	lastTime = time;

	soundTrail.Add(sp);
}

void USoundObjectPlayer::updatePairs(float time)
{
	for (int i = 0; i < soundTrail.Num(); i++) {
		updatePair(i, time);
	}
}

void USoundObjectPlayer::updatePair(int i, float time)
{	
	float startTraveling = time - soundTrail[i].startTime; //how long in seconds have the sample points been travelling towards the audio listener
	float endTraveling = time - soundTrail[i].endTime;

	float reletiveStart = (soundTrail[i].start - playerPosition).Length() / speedOfSound; //how long in seconds it would take for each sample to reach the listener
	float reletiveEnd = (soundTrail[i].end - playerPosition).Length() / speedOfSound;

	float startSoundTime = reletiveStart - startTraveling; //the amount of time in seconds (till/after) reaching the listener
	float endSoundTime = reletiveEnd - endTraveling;

	/*GEngine->AddOnScreenDebugMessage(
		-1,
		5.0f,
		FColor::Red,
		FString::SanitizeFloat(startSoundTime)
	);*/

	soundTrail[i].lastInterp = soundTrail[i].currentInterp; 

	// (end - start)*currentInterp + start == 0
	// -start/(end-start) = currentInterp
	// start / (start - end )

	soundTrail[i].currentInterp = startSoundTime / (startSoundTime - endSoundTime);

}

FVector USoundObjectPlayer::interpolatePair(int i, float interp)
{
	FVector vec = soundTrail[i].end + (interp * (soundTrail[i].start - soundTrail[i].end));

	return vec;
}

void USoundObjectPlayer::playbackSample(FVector position, float pitch, int index)
{
	if (audioComponents[index])
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(
				-1,
				5.0f,
				FColor::Red,
				FString::SanitizeFloat(pitch)
			);

			DrawDebugSphere(
				GetWorld(),
				position,
				500.0f,
				16,
				FColor::Red,
				false,
				0.0f,
				0,
				2.0f
			);
		}

		audioComponents[index]->SetWorldLocation(position);

		FAudioParameter speedParam;
		speedParam.ParamName = pitchParamName;
		speedParam.FloatParam = log2f(pitch) * 12;
		speedParam.ParamType = EAudioParameterType::Float;

		audioComponents[index]->SetParameter(MoveTemp(speedParam));

		audioComponents[index]->SetVolumeMultiplier(1.0f);
	}
}
