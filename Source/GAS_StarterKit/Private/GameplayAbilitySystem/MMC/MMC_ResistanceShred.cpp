// GAS starter kit by Mehdi Feizzadeh


#include "GameplayAbilitySystem/MMC/MMC_ResistanceShred.h"

#include "GameplayAbilitySystem/Attributes/AS_Combat.h"

UMMC_ResistanceShred::UMMC_ResistanceShred()
{
	CaptureAttribute(EnergyAttackDef);
	CaptureAttribute(MagicalAttackDef);
	CaptureAttribute(FireDamageDef);
	CaptureAttribute(IceDamageDef);
	CaptureAttribute(LightningDamageDef);
	CaptureAttribute(PoisonDamageDef);
}

float UMMC_ResistanceShred::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	const FAggregatorEvaluateParameters EvaluationParams = CaptureSourceAndTargetTags(Spec);

	const float EnergyAttack = GetCapturedAttributeValue(EnergyAttackDef, Spec, EvaluationParams);
	const float FireDamage = GetCapturedAttributeValue(FireDamageDef, Spec, EvaluationParams);
	const float IceDamage = GetCapturedAttributeValue(IceDamageDef, Spec, EvaluationParams);
	const float LightningDamage = GetCapturedAttributeValue(LightningDamageDef, Spec, EvaluationParams);
	const float PoisonDamage = GetCapturedAttributeValue(PoisonDamageDef, Spec, EvaluationParams);
	const float MagicalAttack = GetCapturedAttributeValue(MagicalAttackDef, Spec, EvaluationParams);

	int32 PlayerLevel = 1;
	return (EnergyAttack + MagicalAttack)* 0.0015f + (FireDamage + IceDamage+ LightningDamage+PoisonDamage)*0.0002f;
}
