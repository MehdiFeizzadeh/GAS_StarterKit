// GAS starter kit by Mehdi Feizzadeh

#pragma once

#include "CoreMinimal.h"
#include "MMC_Base.h"
#include "MMC_MagicPenetration.generated.h"

/**
 * 
 */
UCLASS()
class GAS_STARTERKIT_API UMMC_MagicPenetration : public UMMC_Base
{
	GENERATED_BODY()
public:
	UMMC_MagicPenetration();
	virtual float CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const override;
private:
	FGameplayEffectAttributeCaptureDefinition MagicalAttackDef;
	FGameplayEffectAttributeCaptureDefinition SkillPowerDef;
};
