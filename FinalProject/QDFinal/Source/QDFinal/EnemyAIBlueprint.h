// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EnemyAIBlueprint.generated.h"

/**
 * 
 */
UCLASS()
class QDFINAL_API UEnemyAIBlueprint : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "EnemyAI")
	static void AccelerateTowardsPlayer(AActor* player);
};
