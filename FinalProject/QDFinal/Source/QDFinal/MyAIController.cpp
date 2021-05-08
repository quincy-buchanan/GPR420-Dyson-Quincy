// Fill out your copyright notice in the Description page of Project Settings.

// used tutorial at https://youtu.be/P12uWSFVSIc

#include "MyAIController.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"


AMyAIController::AMyAIController()
{
	PrimaryActorTick.bCanEverTick = true;

	SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sight Config"));
	SetPerceptionComponent(*CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("Perception Component")));
	SightConfig->SightRadius = AISightRadius;
	SightConfig->LoseSightRadius = AILoseSightRadius;
	SightConfig->PeripheralVisionAngleDegrees = AIFieldOfView;
	SightConfig->SetMaxAge(AISightAge);

	SightConfig->DetectionByAffiliation.bDetectEnemies = true;
	SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
	SightConfig->DetectionByAffiliation.bDetectNeutrals = true;

	GetPerceptionComponent()->SetDominantSense(*SightConfig->GetSenseImplementation());
	//GetPerceptionComponent()->OnPerceptionUpdated.AddDynamic(this, &AMyAIController::OnPawnDetected);
	GetPerceptionComponent()->ConfigureSense(*SightConfig);
}

void AMyAIController::BeginPlay()
{
	Super::BeginPlay();

	if (GetPerceptionComponent() != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("All Systems Set"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Some problem occured"));
	}
}

//void AMyAIController::Possess(APawn* Pawn)
//{
//	Super::Possess(Pawn);
//}



void AMyAIController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	//SetActorLocation(FMath::VInterpTo(this->GetActorLocation(), player->GetActorLocation(), DeltaSeconds, 1));
}

FRotator AMyAIController::GetControlRotation() const
{
	if (GetPawn() == nullptr)
	{
		return FRotator(0.0f, 0.0f, 0.0f);
	}
	return FRotator(0.0f, GetPawn()->GetActorRotation().Yaw, 0.0f);
}

void AMyAIController::OnPawnDetected(TArray<AActor*> DetectedPawns)
{

}
