// GAS starter kit by Mehdi Feizzadeh

#pragma once

#include "CoreMinimal.h"
#include "MMC_Base.h"
#include "MMC_ArmorIgnoreThreshold.generated.h"

/**
 * 
 */
UCLASS()
class GAS_STARTERKIT_API UMMC_ArmorIgnoreThreshold : public UMMC_Base
{
	GENERATED_BODY()

public:
	UMMC_ArmorIgnoreThreshold();
	virtual float CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const override;

private:
	FGameplayEffectAttributeCaptureDefinition IgnoreDefenseDef;
	FGameplayEffectAttributeCaptureDefinition BurstPotentialDef;
};
