// GAS starter kit by Mehdi Feizzadeh


#include "GameplayAbilitySystem/MMC/MMC_DamageOverTimePower.h"

UMMC_DamageOverTimePower::UMMC_DamageOverTimePower()
{
	CaptureAttribute(MagicalAttackDef);
	CaptureAttribute(FireDamageDef);
	CaptureAttribute(PoisonDamageDef);
}

float UMMC_DamageOverTimePower::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	const FAggregatorEvaluateParameters EvaluationParams = CaptureSourceAndTargetTags(Spec);

	const float MagicalAttack = GetCapturedAttributeValue(MagicalAttackDef, Spec, EvaluationParams);
	const float FireDamage = GetCapturedAttributeValue(FireDamageDef, Spec, EvaluationParams);
	const float PoisonDamage = GetCapturedAttributeValue(PoisonDamageDef, Spec, EvaluationParams);
	
	int32 PlayerLevel = 1;
	return MagicalAttack * 0.4f + (FireDamage + PoisonDamage) * 0.002f;
}
