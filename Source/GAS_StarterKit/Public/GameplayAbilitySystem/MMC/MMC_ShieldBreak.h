// GAS starter kit by Mehdi Feizzadeh

#pragma once

#include "CoreMinimal.h"
#include "MMC_Base.h"
#include "MMC_ShieldBreak.generated.h"

/**
 * 
 */
UCLASS()
class GAS_STARTERKIT_API UMMC_ShieldBreak : public UMMC_Base
{
	GENERATED_BODY()
public:
	UMMC_ShieldBreak();
	virtual float CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const override;

private:
	FGameplayEffectAttributeCaptureDefinition EnergyAttackDef;
	FGameplayEffectAttributeCaptureDefinition SkillPowerDef;
};
