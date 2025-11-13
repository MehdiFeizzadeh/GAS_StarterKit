// GAS starter kit by Mehdi Feizzadeh

#pragma once

#include "CoreMinimal.h"
#include "MMC_Base.h"
#include "MMC_OverPenetration.generated.h"

/**
 * 
 */
UCLASS()
class GAS_STARTERKIT_API UMMC_OverPenetration : public UMMC_Base
{
	GENERATED_BODY()
public:
	UMMC_OverPenetration();
	virtual float CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const override;
private:
	FGameplayEffectAttributeCaptureDefinition ArmorPenetrationDef;
	FGameplayEffectAttributeCaptureDefinition MagicPenetrationDef;
	FGameplayEffectAttributeCaptureDefinition TrueDamageDef;
};
