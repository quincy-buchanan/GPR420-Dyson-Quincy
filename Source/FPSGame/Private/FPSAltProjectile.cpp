// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSAltProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "ExplodingBlock.h"
#include "Kismet/GameplayStatics.h"
#include "Components/SphereComponent.h"

// Sets default values
AFPSAltProjectile::AFPSAltProjectile()
{
	// Use a sphere as a simple collision representation
	CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	CollisionComp->InitSphereRadius(5.0f);
	CollisionComp->SetCollisionProfileName("Projectile");
	CollisionComp->OnComponentHit.AddDynamic(this, &AFPSAltProjectile::OnHit);	// set up a notification for when this component hits something blocking

	// Players can't walk on it
	CollisionComp->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
	CollisionComp->CanCharacterStepUpOn = ECB_No;

	// Set as root component
	RootComponent = CollisionComp;

	// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
	ProjectileMovement->UpdatedComponent = CollisionComp;
	ProjectileMovement->InitialSpeed = 3000.f;
	ProjectileMovement->MaxSpeed = 3000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = true;

	// Die after 3 seconds by default
	InitialLifeSpan = 3.0f;

}

void AFPSAltProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AActor::StaticClass(), FoundActors);

	
	for (AActor* element : FoundActors)
	{
		//UPrimitiveComponent* UPrimitiveComp = (UPrimitiveComponent*)element->GetComponentByClass(UPrimitiveComponent::StaticClass());
		// Only add impulse and destroy projectile if we hit a physics
		if ((element != NULL) && (element != this) && (!element->IsA(APawn::StaticClass())) && (element->ActorHasTag("Destroyable")) && this->GetDistanceTo(element) < 500.0f)
		{
			element->Destroy();
		}
		
	}
}

void AFPSAltProjectile::SpawnObject(FVector Loc, FRotator Rot)
{
	FActorSpawnParameters SpawnParams;
	AActor* ActorSpawnRef = GetWorld()->SpawnActor<AActor>(ActorToSpawn, Loc, Rot, SpawnParams);
}

void AFPSAltProjectile::SpawnExplodingBlock(FVector Loc, FRotator Rot)
{
	FActorSpawnParameters SpawnParams;
	AExplodingBlock* ActorSpawnRef = GetWorld()->SpawnActor<AExplodingBlock>(ExplodingBlock, Loc, Rot, SpawnParams);
}

