// GAS starter kit by Mehdi Feizzadeh

#pragma once

#include "CoreMinimal.h"
#include "MMC_Base.h"
#include "MMC_ComboMultiplier.generated.h"

/**
 * 
 */
UCLASS()
class GAS_STARTERKIT_API UMMC_ComboMultiplier : public UMMC_Base
{
	GENERATED_BODY()
public:
	UMMC_ComboMultiplier();
	virtual float CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const override;
private:
	FGameplayEffectAttributeCaptureDefinition AttackSpeedDef;
	FGameplayEffectAttributeCaptureDefinition CritChanceDef;
};
