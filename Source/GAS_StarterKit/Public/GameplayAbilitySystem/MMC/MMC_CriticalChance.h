// GAS starter kit by Mehdi Feizzadeh

#pragma once

#include "CoreMinimal.h"
#include "MMC_Base.h"
#include "MMC_CriticalChance.generated.h"

/**
 * 
 */
UCLASS()
class GAS_STARTERKIT_API UMMC_CriticalChance : public UMMC_Base
{
	GENERATED_BODY()
public:
	UMMC_CriticalChance();
	virtual float CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const override;

private:
	FGameplayEffectAttributeCaptureDefinition AccuracyDef;
	FGameplayEffectAttributeCaptureDefinition SkillPowerDef;
};
