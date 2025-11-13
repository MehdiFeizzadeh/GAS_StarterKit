// GAS starter kit by Mehdi Feizzadeh

#pragma once

#include "CoreMinimal.h"
#include "MMC_Base.h"
#include "MMC_BurstPotential.generated.h"

/**
 * 
 */
UCLASS()
class GAS_STARTERKIT_API UMMC_BurstPotential : public UMMC_Base
{
	GENERATED_BODY()
public:
	UMMC_BurstPotential();
	virtual float CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const override;

private:
	FGameplayEffectAttributeCaptureDefinition EnergyAttackDef;
	FGameplayEffectAttributeCaptureDefinition PhysicalAttackDef;
	FGameplayEffectAttributeCaptureDefinition MagicalAttackDef;
	FGameplayEffectAttributeCaptureDefinition AttackSpeedDef;
	FGameplayEffectAttributeCaptureDefinition CriticalDamageDef;
	FGameplayEffectAttributeCaptureDefinition SkillPowerDef;
};
