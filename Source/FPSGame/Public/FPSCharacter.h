// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FPSAltProjectile.h"
#include "AFPSBombActor.h"
#include "UObject/SoftObjectPtr.h"
#include "Delegate.h"
#include "FPSCharacter.generated.h"





class UInputComponent;
class USkeletalMeshComponent;
class UCameraComponent;
class AFPSProjectile;
class AFPSAltProjectile;
class AAFPSBombActor;
class USoundBase;
class UAnimSequence;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDelegateName, float, size);

DECLARE_DYNAMIC_DELEGATE_OneParam(FSubDelegateName, float, size);
UCLASS()
class AFPSCharacter : public ACharacter
{
	GENERATED_BODY()

protected:

	/** Pawn mesh: 1st person view  */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Mesh")
	USkeletalMeshComponent* Mesh1PComponent;

	/** Gun mesh: 1st person view (seen only by self) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Mesh")
	USkeletalMeshComponent* GunMeshComponent;

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	UCameraComponent* CameraComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Custom", meta = (AllowPrivateAccess = "true"))
	TArray<AActor*> ActorsToDestroy;


public:
	AFPSCharacter();

	/** Projectile class to spawn */
	UPROPERTY(EditDefaultsOnly, Category="Projectile")
	TSubclassOf<AFPSProjectile> ProjectileClass;

	UPROPERTY(EditDefaultsOnly, Category = "Projectile")
	TSubclassOf<AFPSAltProjectile> AltProjectileClass;

	UPROPERTY(EditDefaultsOnly, Category = "Bombs")
	TSubclassOf<AAFPSBombActor> BombClass;

	/** Sound to play each time we fire */
	UPROPERTY(EditDefaultsOnly, Category="Gameplay")
	USoundBase* FireSound;

	UPROPERTY(EditDefaultsOnly, Category = "Gameplay")
	UParticleSystem* ExplosionEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
		class UParticleSystem* ExplosionEffect2;

	/** AnimMontage to play each time we fire */
	UPROPERTY(EditDefaultsOnly, Category = "Gameplay")
	UAnimSequence* FireAnimation;

protected:
	
	/** Fires a projectile. */
	void Fire();

	void Fire2();

	void FireAlt();

	void FireAltRelease();

	UFUNCTION()
	void PlayExplosionEffect(float size, const FVector& location);

	UFUNCTION()
	void Garbage(); //does nothing but timer won't work without it

	UFUNCTION()
		void ChargeDestructionSequence();

	UFUNCTION()
	void BeginDestructionSequence();

	UFUNCTION()
	void ActivateDestructionSequence(float _Scale);

	UFUNCTION()
		void SpawnExplosionClose(float scale);

	UFUNCTION()
		void SpawnExplosionMedium(float scale);

	UFUNCTION()
		void SpawnExplosionLong(float scale);

	void SpawnBomb();

	/** Handles moving forward/backward */
	void MoveForward(float Val);

	/** Handles strafing movement, left and right */
	void MoveRight(float Val);

	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;

	FTimerHandle mCooldown, mCharging;

	float chargeTimeStamp2;

	FDelegateName myDelegate;


public:
	/** Returns Mesh1P subobject **/
	USkeletalMeshComponent* GetMesh1P() const { return Mesh1PComponent; }

	/** Returns FirstPersonCameraComponent subobject **/
	UCameraComponent* GetFirstPersonCameraComponent() const { return CameraComponent; }

};

