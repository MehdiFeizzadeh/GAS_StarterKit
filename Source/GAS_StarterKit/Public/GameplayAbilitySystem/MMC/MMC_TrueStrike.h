// GAS starter kit by Mehdi Feizzadeh

#pragma once

#include "CoreMinimal.h"
#include "MMC_Base.h"
#include "MMC_TrueStrike.generated.h"

/**
 * 
 */
UCLASS()
class GAS_STARTERKIT_API UMMC_TrueStrike : public UMMC_Base
{
	GENERATED_BODY()
public:
	UMMC_TrueStrike();
	virtual float CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const override;
private:
	FGameplayEffectAttributeCaptureDefinition AccuracyDef;
	FGameplayEffectAttributeCaptureDefinition CritChanceDef;
};
