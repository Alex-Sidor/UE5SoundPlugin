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
	
	for (int i = 0; i < amountOfSoundPlayer; i++) {
		if (audioComponents[i])
		{
			audioComponents[i]->SetSound(CurrentSound);
			audioComponents[i]->Play();
			stopSample(i);
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

	updateCurrentSample(GetComponentLocation(), time); //passive sample recording
	if (time - lastSample > 0.0) {
		lastSample = time;
		createTimeSample(GetComponentLocation(), time);
	}

	//update all the cache values of all the sound trail segments
	for (int i = 0; i < soundTrail.Num(); i++) {
		updatePair(i, time);
	}

	int amountOfcandidate = 0;

	for (int i = 0; i < soundTrail.Num(); i++) {
		float currentInterp = soundTrail[i].currentInterp;
		float lastInterp = soundTrail[i].lastInterp;

		if (0 <= currentInterp && currentInterp <= 1) {

			FVector position = interpolatePair(i, currentInterp);

			/*if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(
					-1,
					5.0f,
					FColor::Red,
					FString::SanitizeFloat(currentInterp)
				);
			}*/

			float dtime = (lastInterp - currentInterp);

			playbackSample(position, dtime, amountOfcandidate);
			
			amountOfcandidate++;

			if (amountOfcandidate >= amountOfSoundPlayer) {
				break;
			}
		}
	}

	//mute the rest of the samples that are not playing
	for (int i = amountOfcandidate; i < amountOfSoundPlayer; i++) {
		stopSample(i);
	}

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(
			-1,
			5.0f,
			FColor::Red,
			FString::FromInt(amountOfcandidate)
		);
	}
}

void USoundObjectPlayer::createTimeSample(FVector position, float time)
{

	if (soundTrail.Num() >= maxSoundSamples && soundTrail.Num() != 0) {
		soundTrail.RemoveAt(0, 1, false);
	}

	FSoundPair sp;

	//these never change
	sp.start = position;
	sp.startTime = time;

	//set default values (difference is 0 so this sample has 0 length)
	sp.end = position;
	sp.endTime = time;

	soundTrail.Add(sp);
}

void USoundObjectPlayer::updateCurrentSample(FVector position, float time)
{
	int amount = soundTrail.Num() - 1;

	if (amount >= 0) {

		//update recording value (allows to playback sample if its still recording)
		soundTrail[amount].end = position;
		soundTrail[amount].endTime = time;
	}
}

void USoundObjectPlayer::updatePair(int i, float time)
{	
	float startTraveling = time - soundTrail[i].startTime;
	float endTraveling = time - soundTrail[i].endTime;

	float reletiveStart = (soundTrail[i].start - playerPosition).Length() / speedOfSound;
	float reletiveEnd = (soundTrail[i].end - playerPosition).Length() / speedOfSound;


	float startSoundTime = reletiveStart - startTraveling;
	float endSoundTime = reletiveEnd - endTraveling;

	soundTrail[i].lastInterp = soundTrail[i].currentInterp;

	soundTrail[i].currentInterp = endSoundTime / (endSoundTime - startSoundTime);

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
		DrawDebugSphere(
			GetWorld(),
			position,  // Center
			500.0f,               // Radius
			16,                  // Segments (higher = smoother)
			FColor::Red,         // Color
			false,               // Persistent
			0.0f,                // Lifetime (0 = one frame)
			0,                   // Depth priority
			2.0f                 // Thickness
		);

		audioComponents[index]->SetWorldLocation(position);

		FAudioParameter speedParam;
		speedParam.ParamName = pitchParamName;
		speedParam.FloatParam = log2f(pitch) * 12;
		speedParam.ParamType = EAudioParameterType::Float;

		audioComponents[index]->SetParameter(MoveTemp(speedParam));
	}
}

void USoundObjectPlayer::stopSample(int index)
{
	const float stp = log2f(0) * 12;

	if (audioComponents[index])
	{
		FAudioParameter speedParam;
		speedParam.ParamName = pitchParamName;
		speedParam.FloatParam = stp;
		speedParam.ParamType = EAudioParameterType::Float;

		audioComponents[index]->SetParameter(MoveTemp(speedParam));
	}
}
