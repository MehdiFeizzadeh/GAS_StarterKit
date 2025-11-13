// GAS starter kit by Mehdi Feizzadeh


#include "GameplayAbilitySystem/MMC/MMC_MaxHealth.h"

UMMC_MaxHealth::UMMC_MaxHealth()
{
}

float UMMC_MaxHealth::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	const FAggregatorEvaluateParameters EvaluationParams = CaptureSourceAndTargetTags(Spec);
	return Super::CalculateBaseMagnitude_Implementation(Spec);
}
