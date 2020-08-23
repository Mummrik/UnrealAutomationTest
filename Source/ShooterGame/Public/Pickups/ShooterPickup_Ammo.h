// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "ShooterPickup.h"
#include "ShooterPickup_Ammo.generated.h"

class AShooterCharacter;
class AShooterWeapon;

// A pickup object that replenishes ammunition for a weapon
UCLASS(Abstract, Blueprintable)
class AShooterPickup_Ammo : public AShooterPickup
{
	GENERATED_UCLASS_BODY()

		/** check if pawn can use this pickup */
		UFUNCTION(Category = Pickup, BlueprintCallable)
		virtual bool CanBePickedUp(AShooterCharacter* TestPawn) const override;

	UFUNCTION(Category = Pickup, BlueprintCallable)
		bool IsForWeapon(UClass* WeaponClass);

protected:

	/** how much ammo does it give? */
	UPROPERTY(EditDefaultsOnly, Category = Pickup, BlueprintReadOnly)
		int32 AmmoClips;

	/** which weapon gets ammo? */
	UPROPERTY(EditDefaultsOnly, Category = Pickup, BlueprintReadOnly)
		TSubclassOf<AShooterWeapon> WeaponType;

	/** give pickup, returns true if sucessful */
	UFUNCTION(Category = Pickup, BlueprintCallable)
	virtual bool GivePickupTo(AShooterCharacter* Pawn) override;
};
