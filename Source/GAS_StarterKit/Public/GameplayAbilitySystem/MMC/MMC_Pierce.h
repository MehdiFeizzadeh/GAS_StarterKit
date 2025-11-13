// GAS starter kit by Mehdi Feizzadeh

#pragma once

#include "CoreMinimal.h"
#include "MMC_Base.h"
#include "MMC_Pierce.generated.h"

/**
 * 
 */
UCLASS()
class GAS_STARTERKIT_API UMMC_Pierce : public UMMC_Base
{
	GENERATED_BODY()
public:
	UMMC_Pierce();
	virtual float CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const override;
private:
	FGameplayEffectAttributeCaptureDefinition ArmorPenetrationDef;
	FGameplayEffectAttributeCaptureDefinition AttackSpeedDef;
};
