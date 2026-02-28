// Fill out your copyright notice in the Description page of Project Settings.


#include "SoundSystem/SoundObjectPlayer.h"
#include "DrawDebugHelpers.h"
#include "AudioParameter.h"
#include "Kismet/GameplayStatics.h"

USoundObjectPlayer::USoundObjectPlayer()
{
	PrimaryComponentTick.bCanEverTick = true;
	//PrimaryComponentTick.TickGroup = TG_PostPhysics; //makes it only update after physics

	AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent"));
	AudioComponent->SetupAttachment(this);
	AudioComponent->bAutoActivate = false;

}

void USoundObjectPlayer::BeginPlay()
{
	Super::BeginPlay();
	
	if (CurrentSound)
    {
        AudioComponent->SetSound(CurrentSound);
		AudioComponent->Play();
    }

	playerRef = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	lastPosition = GetComponentLocation();
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

	if (time - lastSample > 0.0) {
		lastSample = time;
		createTimeSample(GetComponentLocation(), time);
	}

	//update all the cache values of all the sound trail segments
	for (int i = 0; i < soundTrail.Num(); i++) {
		updatePair(i, time);
	}

	bool didFindCandidate = false;

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

			playbackSample(position, dtime);
			didFindCandidate = true;
			break;
		}
	}



	if (!didFindCandidate) {
		playbackSample(FVector::Zero(), 0);
	}

	//remove audio samples that have finished
	/*for (int i = soundTrail.Num() - 1; i >= 0; i--) {
		if (soundTrail[i].played) {
			soundTrail.RemoveAt(i);
		}
	}*/
}

void USoundObjectPlayer::createTimeSample(FVector position, float time)
{

	if (soundTrail.Num() >= maxSoundSamples && soundTrail.Num() != 0) {
		soundTrail.RemoveAt(0, 1, false);
	}

	FSoundPair sp;

	sp.end = position;
	sp.endTime = time;

	sp.start = lastPosition;
	sp.startTime = lastTime;

	lastPosition = position;
	lastTime = time;

	soundTrail.Add(sp);
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

void USoundObjectPlayer::playbackSample(FVector position, float pitch)
{
	if (AudioComponent )
	{
		DrawDebugSphere(
			GetWorld(),
			position,  // Center
			30.0f,               // Radius
			16,                  // Segments (higher = smoother)
			FColor::Red,         // Color
			false,               // Persistent
			0.0f,                // Lifetime (0 = one frame)
			0,                   // Depth priority
			2.0f                 // Thickness
		);

		AudioComponent->SetWorldLocation(position);

		FAudioParameter speedParam;
		speedParam.ParamName = pitchParamName;
		speedParam.FloatParam = log2f(pitch) * 12;
		speedParam.ParamType = EAudioParameterType::Float;

		AudioComponent->SetParameter(MoveTemp(speedParam));
	}
}

