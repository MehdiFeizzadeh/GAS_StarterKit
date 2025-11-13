// GAS starter kit by Mehdi Feizzadeh


#include "GameplayAbilitySystem/MMC/MMC_PoisonDamage.h"

#include "GameplayAbilitySystem/Attributes/AS_Combat.h"

UMMC_PoisonDamage::UMMC_PoisonDamage()
{
	CaptureAttribute(SkillPowerDef);
	CaptureAttribute(MagicalAttackDef);
	CaptureAttribute(PhysicalAttackDef);
}

float UMMC_PoisonDamage::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	const FAggregatorEvaluateParameters EvaluationParams = CaptureSourceAndTargetTags(Spec);
	
	const float SkillPower = GetCapturedAttributeValue(SkillPowerDef, Spec, EvaluationParams);
	const float PhysicalAttack = GetCapturedAttributeValue(PhysicalAttackDef, Spec, EvaluationParams);
	const float MagicalAttack = GetCapturedAttributeValue(MagicalAttackDef, Spec, EvaluationParams);
	
	int32 PlayerLevel = 1;
	return PhysicalAttack* 0.3f+ MagicalAttack * 0.4f + SkillPower * 0.15f;
}
