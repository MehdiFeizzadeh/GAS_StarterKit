// GAS starter kit by Mehdi Feizzadeh

#pragma once

#include "CoreMinimal.h"
#include "MMC_Base.h"
#include "MMC_DamageReflection.generated.h"

/**
 * 
 */
UCLASS()
class GAS_STARTERKIT_API UMMC_DamageReflection : public UMMC_Base
{
	GENERATED_BODY()
public:
	UMMC_DamageReflection();
	virtual float CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const override;

private:
	FGameplayEffectAttributeCaptureDefinition ArmorPenetrationDef;
	FGameplayEffectAttributeCaptureDefinition MagicPenetrationDef;
	FGameplayEffectAttributeCaptureDefinition MaxHealthDef;
};
