// GAS starter kit by Mehdi Feizzadeh


#include "GameplayAbilitySystem/MMC/MMC_TrueStrike.h"

UMMC_TrueStrike::UMMC_TrueStrike()
{
	CaptureAttribute(CritChanceDef);
	CaptureAttribute(AccuracyDef);
}

float UMMC_TrueStrike::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	const FAggregatorEvaluateParameters EvaluationParams = CaptureSourceAndTargetTags(Spec);

	const float CritChance = GetCapturedAttributeValue(CritChanceDef, Spec, EvaluationParams);
	const float Accuracy = GetCapturedAttributeValue(AccuracyDef, Spec, EvaluationParams);
	
	int32 PlayerLevel = 1;
	return 10.f + Accuracy* .01f + CritChance* .5f;
}
