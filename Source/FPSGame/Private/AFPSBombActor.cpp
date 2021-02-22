// Fill out your copyright notice in the Description page of Project Settings.


#include "AFPSBombActor.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Engine.h"

// Sets default values
AAFPSBombActor::AAFPSBombActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	ExplodeDelay = 2.0f;
}

void AAFPSBombActor::Explode()
{
	
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionTemplate, GetActorLocation());
	
	Destroy();
}

// Called when the game starts or when spawned
void AAFPSBombActor::BeginPlay()
{
	Super::BeginPlay();
	

	FTimerHandle Explode_TimerHandle;
	GetWorldTimerManager().SetTimer(Explode_TimerHandle, this, &AAFPSBombActor::Explode, ExplodeDelay, false);
}

// Called every frame
void AAFPSBombActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

