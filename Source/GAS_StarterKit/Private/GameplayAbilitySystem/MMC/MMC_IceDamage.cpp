// GAS starter kit by Mehdi Feizzadeh


#include "GameplayAbilitySystem/MMC/MMC_IceDamage.h"

#include "GameplayAbilitySystem/Attributes/AS_Combat.h"

UMMC_IceDamage::UMMC_IceDamage()
{	CaptureAttribute(SkillPowerDef);
	CaptureAttribute(MagicalAttackDef);
}

float UMMC_IceDamage::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	const FAggregatorEvaluateParameters EvaluationParams = CaptureSourceAndTargetTags(Spec);

	const float SkillPower = GetCapturedAttributeValue(SkillPowerDef, Spec, EvaluationParams);
	const float MagicalAttack = GetCapturedAttributeValue(MagicalAttackDef, Spec, EvaluationParams);

	int32 PlayerLevel = 1;
	return MagicalAttack * 0.6f + SkillPower * 0.2f;
}
