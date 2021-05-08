// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "MyAIController.generated.h"

/**
 * 
 */
UCLASS()
class QDFINAL_API AMyAIController : public AAIController
{
	GENERATED_BODY()
public:
	AMyAIController();

	virtual void BeginPlay() override;

	//virtual void Possess(APawn* Pawn) override;

	virtual void Tick(float DeltaSeconds) override;

	virtual FRotator GetControlRotation() const override;

	UFUNCTION()
	void OnPawnDetected(TArray<AActor*> DetectedPawns);

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = AI)
		float AISightRadius = 500.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = AI)
		float AISightAge = 5.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = AI)
		float AILoseSightRadius = AISightRadius + 5.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = AI)
		float AIFieldOfView = 90.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = AI)
		class UAISenseConfig_Sight* SightConfig;


	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Important")
		AActor* player;
};
