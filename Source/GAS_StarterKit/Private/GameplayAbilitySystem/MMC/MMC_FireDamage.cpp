// GAS starter kit by Mehdi Feizzadeh


#include "GameplayAbilitySystem/MMC/MMC_FireDamage.h"

#include "GameplayAbilitySystem/Attributes/AS_Combat.h"

UMMC_FireDamage::UMMC_FireDamage()
{
	CaptureAttribute(SkillPowerDef);
	CaptureAttribute(MagicalAttackDef);
}

float UMMC_FireDamage::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	const FAggregatorEvaluateParameters EvaluationParams = CaptureSourceAndTargetTags(Spec);

	const float SkillPower = GetCapturedAttributeValue(SkillPowerDef, Spec, EvaluationParams);
	const float MagicalAttack = GetCapturedAttributeValue(MagicalAttackDef, Spec, EvaluationParams);

	int32 PlayerLevel = 1;
	return MagicalAttack * 0.7f + SkillPower * 0.15f ;
}
