// GAS starter kit by Mehdi Feizzadeh


#include "GameplayAbilitySystem/MMC/MMC_Pierce.h"

UMMC_Pierce::UMMC_Pierce()
{
	CaptureAttribute(ArmorPenetrationDef);
	CaptureAttribute(AttackSpeedDef);
}

float UMMC_Pierce::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	const FAggregatorEvaluateParameters EvaluationParams = CaptureSourceAndTargetTags(Spec);
	const float ArmorPenetration = GetCapturedAttributeValue(ArmorPenetrationDef, Spec, EvaluationParams);
	const float AttackSpeed = GetCapturedAttributeValue(AttackSpeedDef, Spec, EvaluationParams);
	
	int32 PlayerLevel = 1;
	return 1.f + AttackSpeed* 0.01f + ArmorPenetration*0.005f;
}
