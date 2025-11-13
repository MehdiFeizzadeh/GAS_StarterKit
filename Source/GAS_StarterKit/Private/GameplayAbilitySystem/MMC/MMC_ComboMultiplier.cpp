// GAS starter kit by Mehdi Feizzadeh


#include "GameplayAbilitySystem/MMC/MMC_ComboMultiplier.h"

UMMC_ComboMultiplier::UMMC_ComboMultiplier()
{
	CaptureAttribute(AttackSpeedDef);
	CaptureAttribute(CritChanceDef);
}

float UMMC_ComboMultiplier::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	const FAggregatorEvaluateParameters EvaluationParams = CaptureSourceAndTargetTags(Spec);
	const float CritChance = GetCapturedAttributeValue(CritChanceDef, Spec, EvaluationParams);
	const float AttackSpeed = GetCapturedAttributeValue(AttackSpeedDef, Spec, EvaluationParams);
	
	return 1.f + AttackSpeed * 0.01f + CritChance * 0.001f;
}
