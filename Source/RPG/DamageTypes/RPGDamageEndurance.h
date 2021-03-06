#pragma once
#include "RPGDamageType.h"
#include "RPGDamageEndurance.generated.h"

UCLASS(MinimalAPI, const, Blueprintable, BlueprintType)
class URPGDamageEndurance : public URPGDamageType
{
	GENERATED_UCLASS_BODY()

	
	virtual float DealDamage(class ARPGCharacter* target, class ARPGCharacter* causer, float damageAmount) OVERRIDE;
};