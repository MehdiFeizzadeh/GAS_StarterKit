// GAS starter kit by Mehdi Feizzadeh


#include "GameplayAbilitySystem/MMC/MMC_CriticalDamage.h"

#include "GameplayAbilitySystem/Attributes/AS_Combat.h"

UMMC_CriticalDamage::UMMC_CriticalDamage()
{
	CaptureAttribute(SkillPowerDef);
	CaptureAttribute(PhysicalAttackDef);
	CaptureAttribute(MagicalAttackDef);
}

float UMMC_CriticalDamage::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	const FAggregatorEvaluateParameters EvaluationParams = CaptureSourceAndTargetTags(Spec);

	const float PhysicalAttack = GetCapturedAttributeValue(SkillPowerDef, Spec, EvaluationParams);
	const float MagicalAttack = GetCapturedAttributeValue(PhysicalAttackDef, Spec, EvaluationParams);
	const float SkillPower = GetCapturedAttributeValue(MagicalAttackDef, Spec, EvaluationParams);
	
	int32 PlayerLevel = 1;
	return 1.5f + (PhysicalAttack + MagicalAttack) *0.001f + SkillPower *.002f;
}
