// GAS starter kit by Mehdi Feizzadeh

#pragma once

#include "CoreMinimal.h"
#include "MMC_Base.h"
#include "MMC_LightningDamage.generated.h"

/**
 * 
 */
UCLASS()
class GAS_STARTERKIT_API UMMC_LightningDamage : public UMMC_Base
{
	GENERATED_BODY()
public:
	UMMC_LightningDamage();
	virtual float CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const override;

private:
	FGameplayEffectAttributeCaptureDefinition EnergyAttackDef;
	FGameplayEffectAttributeCaptureDefinition SkillPowerDef;
};
