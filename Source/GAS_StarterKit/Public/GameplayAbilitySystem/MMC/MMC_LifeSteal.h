// GAS starter kit by Mehdi Feizzadeh

#pragma once

#include "CoreMinimal.h"
#include "MMC_Base.h"
#include "MMC_LifeSteal.generated.h"

/**
 * 
 */
UCLASS()
class GAS_STARTERKIT_API UMMC_LifeSteal : public UMMC_Base
{
	GENERATED_BODY()
public:
	UMMC_LifeSteal();
	virtual float CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const override;

private:
	FGameplayEffectAttributeCaptureDefinition CriticalDamageDef;
	FGameplayEffectAttributeCaptureDefinition DarkDamageDef;
};
