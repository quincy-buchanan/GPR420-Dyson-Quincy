// Fill out your copyright notice in the Description page of Project Settings.


#include "ExplodingBlock.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AExplodingBlock::AExplodingBlock()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	RootComponent = MeshComp;
}

// Called when the game starts or when spawned
void AExplodingBlock::BeginPlay()
{
	Super::BeginPlay();
	
}

void AExplodingBlock::Explode()
{
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionTemplate, GetActorLocation());

	Destroy();
}

// Called every frame
void AExplodingBlock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

