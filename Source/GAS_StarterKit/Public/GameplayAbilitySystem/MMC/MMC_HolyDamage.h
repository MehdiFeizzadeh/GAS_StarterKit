// GAS starter kit by Mehdi Feizzadeh

#pragma once

#include "CoreMinimal.h"
#include "MMC_Base.h"
#include "MMC_HolyDamage.generated.h"

/**
 * 
 */
UCLASS()
class GAS_STARTERKIT_API UMMC_HolyDamage : public UMMC_Base
{
	GENERATED_BODY()
public:
	UMMC_HolyDamage();
	virtual float CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const override;

	public:
	FGameplayEffectAttributeCaptureDefinition PhysicalAttackDef;
	FGameplayEffectAttributeCaptureDefinition MaxHealthDef;
	FGameplayEffectAttributeCaptureDefinition SkillPowerDef;
};
