// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "FPSCharacter.h"
#include "FPSProjectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Animation/AnimSequence.h"

#include "ParticleHelper.h"
#include "Particles/ParticleSystem.h"
#include "Particles/ParticleSystemComponent.h"




AFPSCharacter::AFPSCharacter()
{
	// Create a CameraComponent	
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	CameraComponent->SetupAttachment(GetCapsuleComponent());
	CameraComponent->SetRelativeLocation(FVector(0, 0, BaseEyeHeight)); // Position the camera
	CameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1PComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh"));
	Mesh1PComponent->SetupAttachment(CameraComponent);
	Mesh1PComponent->CastShadow = false;
	Mesh1PComponent->SetRelativeRotation(FRotator(2.0f, -15.0f, 5.0f));
	Mesh1PComponent->SetRelativeLocation(FVector(0, 0, -160.0f));

	// Create a gun mesh component
	GunMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FP_Gun"));
	GunMeshComponent->CastShadow = false;
	GunMeshComponent->SetupAttachment(Mesh1PComponent, "GripPoint");

	FSubDelegateName sd1, sd2, sd3;
	sd1.BindUFunction(this, FName("SpawnExplosionClose"));
	sd2.BindUFunction(this, FName("SpawnExplosionMedium"));
	sd3.BindUFunction(this, FName("SpawnExplosionFar"));
	myDelegate.Add(sd1);
	myDelegate.Add(sd2);
	myDelegate.Add(sd3);
}


void AFPSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	check(PlayerInputComponent);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AFPSCharacter::Fire);
	PlayerInputComponent->BindAction("FireAlt", IE_Pressed, this, &AFPSCharacter::FireAlt);
	PlayerInputComponent->BindAction("FireAltRelease", IE_Released, this, &AFPSCharacter::FireAltRelease);

	PlayerInputComponent->BindAction("TimerDelegate", IE_Released, this, &AFPSCharacter::BeginDestructionSequence);
	PlayerInputComponent->BindAction("TimerDelegateHold", IE_Pressed, this, &AFPSCharacter::ChargeDestructionSequence);

	PlayerInputComponent->BindAxis("MoveForward", this, &AFPSCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AFPSCharacter::MoveRight);

	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);

	PlayerInputComponent->BindAction("SpawnBomb", IE_Pressed, this, &AFPSCharacter::SpawnBomb);
}

void AFPSCharacter::BeginDestructionSequence()
{
	FTimerHandle Timer;
	FTimerDelegate TimerDel;
	float RandomScale = FMath::RandRange(1.0f, 1.0f + (GetWorld()->GetTimeSeconds() - chargeTimeStamp2));

	TimerDel.BindUFunction(this, FName("ActivateDestructionSequence"), RandomScale);

	UWorld* const World = GetWorld();

	if (World != nullptr)
	{
		World->GetTimerManager().SetTimer(Timer, TimerDel, 3.0f, false);
	}
}

void AFPSCharacter::ActivateDestructionSequence(float _Scale)
{
	if (ActorsToDestroy.Num() == 0) return;

	

	uint8 Length = ActorsToDestroy.Num();
	for (size_t i = 0; i < Length; i++)
	{
		if (ActorsToDestroy[i] != nullptr)
		{
			ActorsToDestroy[i]->SetActorHiddenInGame(true);
			PlayExplosionEffect(_Scale, ActorsToDestroy[i]->GetActorLocation());
			
			
		}
	}

	myDelegate.Broadcast(_Scale);
}

void AFPSCharacter::SpawnExplosionClose(float scale)
{
	PlayExplosionEffect(scale, this->GetActorLocation() + FVector(150.f, 150.f, 0.f));
}

void AFPSCharacter::SpawnExplosionMedium(float scale)
{
	PlayExplosionEffect(scale, this->GetActorLocation() + FVector(-150.f, 150.f, 0.f));
}

void AFPSCharacter::ChargeDestructionSequence()
{
	chargeTimeStamp2 = GetWorld()->GetTimeSeconds();
}

void AFPSCharacter::Fire()
{
	// try and fire a projectile
	if (ProjectileClass)
	{
		// Grabs location from the mesh that must have a socket called "Muzzle" in his skeleton
		FVector MuzzleLocation = GunMeshComponent->GetSocketLocation("Muzzle");
		// Use controller rotation which is our view direction in first person
		FRotator MuzzleRotation = GetControlRotation();

		//Set Spawn Collision Handling Override
		FActorSpawnParameters ActorSpawnParams;
		ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

		// spawn the projectile at the muzzle
		GetWorld()->SpawnActor<AFPSProjectile>(ProjectileClass, MuzzleLocation, MuzzleRotation, ActorSpawnParams);
	}

	// try and play the sound if specified
	if (FireSound)
	{
		UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
	}

	// try and play a firing animation if specified
	if (FireAnimation)
	{
		// Get the animation object for the arms mesh
		UAnimInstance* AnimInstance = Mesh1PComponent->GetAnimInstance();
		if (AnimInstance)
		{
			AnimInstance->PlaySlotAnimationAsDynamicMontage(FireAnimation, "Arms", 0.0f);
		}
	}
}

void AFPSCharacter::Fire2()
{
	GetWorld()->GetTimerManager().SetTimer(mCooldown, this, &AFPSCharacter::Garbage, 3.0f, false);
	// try and fire a projectile
	if (ProjectileClass)
	{
		// Grabs location from the mesh that must have a socket called "Muzzle" in his skeleton
		FVector MuzzleLocation = GunMeshComponent->GetSocketLocation("Muzzle");
		// Use controller rotation which is our view direction in first person
		FRotator MuzzleRotation = GetControlRotation();

		//Set Spawn Collision Handling Override
		FActorSpawnParameters ActorSpawnParams;
		ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

		// spawn the projectile at the muzzle
		GetWorld()->SpawnActor<AFPSAltProjectile>(AltProjectileClass, MuzzleLocation, MuzzleRotation, ActorSpawnParams);
	}

	// try and play the sound if specified
	if (FireSound)
	{
		UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
	}

	// try and play a firing animation if specified
	if (FireAnimation)
	{
		// Get the animation object for the arms mesh
		UAnimInstance* AnimInstance = Mesh1PComponent->GetAnimInstance();
		if (AnimInstance)
		{
			AnimInstance->PlaySlotAnimationAsDynamicMontage(FireAnimation, "Arms", 0.0f, 0.25f, .25f);
		}
	}
}

void AFPSCharacter::FireAlt()
{
	if (GetWorld()->GetTimerManager().GetTimerRemaining(mCooldown) <= 0.0f)
	{
		GetWorld()->GetTimerManager().SetTimer(mCharging, this, &AFPSCharacter::Fire2, 1.5f, false);
	}
}

void AFPSCharacter::FireAltRelease()
{
	GetWorld()->GetTimerManager().PauseTimer(mCharging);
}

void AFPSCharacter::PlayExplosionEffect(float size, const FVector& location)
{
	if (ExplosionEffect != nullptr)
	{
		UParticleSystemComponent* PS = UGameplayStatics::SpawnEmitterAtLocation(this, ExplosionEffect, location);
		if (PS != nullptr)
		{
			PS->SetWorldScale3D(FVector(size));
		}
	}
}

void AFPSCharacter::SpawnExplosionLong(float scale)
{
	PlayExplosionEffect(scale, this->GetActorLocation() + FVector(150.f, -150.f, 0.f));
}

void AFPSCharacter::SpawnBomb()
{

	AAFPSBombActor* myBomb = GetWorld()->SpawnActor<AAFPSBombActor>(BombClass, GetActorLocation(), GetActorRotation());
}


void AFPSCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}


void AFPSCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void AFPSCharacter::Garbage()
{
	return;
}


