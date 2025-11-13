// GAS starter kit by Mehdi Feizzadeh

#pragma once

#include "CoreMinimal.h"
#include "MMC_Base.h"
#include "MMC_TrueDamage.generated.h"

/**
 * 
 */
UCLASS()
class GAS_STARTERKIT_API UMMC_TrueDamage : public UMMC_Base
{
	GENERATED_BODY()
public:
	UMMC_TrueDamage();
	virtual float CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const override;
	
private:
	FGameplayEffectAttributeCaptureDefinition PhysicalAttackDef;
	FGameplayEffectAttributeCaptureDefinition MagicalAttackDef;
	FGameplayEffectAttributeCaptureDefinition EnergyAttackDef;
	FGameplayEffectAttributeCaptureDefinition SkillPowerDef;
};
