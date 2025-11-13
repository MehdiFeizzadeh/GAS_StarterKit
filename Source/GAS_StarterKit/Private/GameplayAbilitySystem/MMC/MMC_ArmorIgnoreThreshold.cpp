// GAS starter kit by Mehdi Feizzadeh


#include "GameplayAbilitySystem/MMC/MMC_ArmorIgnoreThreshold.h"

UMMC_ArmorIgnoreThreshold::UMMC_ArmorIgnoreThreshold()
{
	CaptureAttribute(IgnoreDefenseDef);
	CaptureAttribute(BurstPotentialDef);
}

float UMMC_ArmorIgnoreThreshold::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	const FAggregatorEvaluateParameters EvaluationParams = CaptureSourceAndTargetTags(Spec);

	const float IgnoreDefense = GetCapturedAttributeValue(IgnoreDefenseDef, Spec, EvaluationParams);
	const float BurstPotential = GetCapturedAttributeValue(BurstPotentialDef, Spec, EvaluationParams);
	
	int32 PlayerLevel = 1;
	return IgnoreDefense* .25f + BurstPotential* .3f;
}
