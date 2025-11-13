// GAS starter kit by Mehdi Feizzadeh

#pragma once

#include "CoreMinimal.h"
#include "MMC_Base.h"
#include "MMC_ResistanceShred.generated.h"

/**
 * 
 */
UCLASS()
class GAS_STARTERKIT_API UMMC_ResistanceShred : public UMMC_Base
{
	GENERATED_BODY()
public:
	UMMC_ResistanceShred();
	virtual float CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const override;

private:
	FGameplayEffectAttributeCaptureDefinition MagicalAttackDef;
	FGameplayEffectAttributeCaptureDefinition EnergyAttackDef;
	FGameplayEffectAttributeCaptureDefinition FireDamageDef;
	FGameplayEffectAttributeCaptureDefinition IceDamageDef;
	FGameplayEffectAttributeCaptureDefinition LightningDamageDef;
	FGameplayEffectAttributeCaptureDefinition PoisonDamageDef;
};
