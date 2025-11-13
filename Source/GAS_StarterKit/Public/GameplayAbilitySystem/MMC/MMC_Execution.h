// GAS starter kit by Mehdi Feizzadeh

#pragma once

#include "CoreMinimal.h"
#include "MMC_Base.h"
#include "MMC_Execution.generated.h"

/**
 * 
 */
UCLASS()
class GAS_STARTERKIT_API UMMC_Execution : public UMMC_Base
{
	GENERATED_BODY()
public:
	UMMC_Execution();
	virtual float CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const override;
private:
	FGameplayEffectAttributeCaptureDefinition BurstPotentialDef;
	FGameplayEffectAttributeCaptureDefinition ComboMultiplierDef;
};
