// GAS starter kit by Mehdi Feizzadeh


#include "GameplayAbilitySystem/MMC/MMC_DarkDamage.h"

#include "GameplayAbilitySystem/Attributes/AS_Combat.h"

UMMC_DarkDamage::UMMC_DarkDamage()
{
	CaptureAttribute(SkillPowerDef);
	CaptureAttribute(MagicalAttackDef);
}

float UMMC_DarkDamage::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	const FAggregatorEvaluateParameters EvaluationParams = CaptureSourceAndTargetTags(Spec);

	const float SkillPower = GetCapturedAttributeValue(SkillPowerDef, Spec, EvaluationParams);
	const float MagicalAttack = GetCapturedAttributeValue(MagicalAttackDef, Spec, EvaluationParams);

	int32 PlayerLevel = 1;
	return MagicalAttack * 0.65f + SkillPower * 0.25f ;
}
