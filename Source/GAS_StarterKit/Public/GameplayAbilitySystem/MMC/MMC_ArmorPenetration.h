// GAS starter kit by Mehdi Feizzadeh

#pragma once

#include "CoreMinimal.h"
#include "MMC_Base.h"
#include "MMC_ArmorPenetration.generated.h"

/**
 * 
 */
UCLASS()
class GAS_STARTERKIT_API UMMC_ArmorPenetration : public UMMC_Base
{
	GENERATED_BODY()
public:
	UMMC_ArmorPenetration();
	virtual float CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const override;

private:
	FGameplayEffectAttributeCaptureDefinition PhysicalAttackDef;
	FGameplayEffectAttributeCaptureDefinition SkillPowerDef;
};
