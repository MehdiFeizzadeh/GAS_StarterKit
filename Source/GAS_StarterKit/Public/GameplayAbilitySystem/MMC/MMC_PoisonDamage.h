// GAS starter kit by Mehdi Feizzadeh

#pragma once

#include "CoreMinimal.h"
#include "MMC_Base.h"
#include "MMC_PoisonDamage.generated.h"

/**
 * 
 */
UCLASS()
class GAS_STARTERKIT_API UMMC_PoisonDamage : public UMMC_Base
{
	GENERATED_BODY()
public:
	UMMC_PoisonDamage();
	virtual float CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const override;

private:
	FGameplayEffectAttributeCaptureDefinition PhysicalAttackDef;
	FGameplayEffectAttributeCaptureDefinition MagicalAttackDef;
	FGameplayEffectAttributeCaptureDefinition SkillPowerDef;
};
