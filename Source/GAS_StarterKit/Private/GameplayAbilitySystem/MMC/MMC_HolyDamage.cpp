// GAS starter kit by Mehdi Feizzadeh


#include "GameplayAbilitySystem/MMC/MMC_HolyDamage.h"

#include "GameplayAbilitySystem/Attributes/AS_Combat.h"

UMMC_HolyDamage::UMMC_HolyDamage()
{
	CaptureAttribute(SkillPowerDef);
	CaptureAttribute(PhysicalAttackDef);
	CaptureAttribute(MaxHealthDef);
}

float UMMC_HolyDamage::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	const FAggregatorEvaluateParameters EvaluationParams = CaptureSourceAndTargetTags(Spec);
	
	const float MaxHealth = GetCapturedAttributeValue(MaxHealthDef, Spec, EvaluationParams);
	const float SkillPower = GetCapturedAttributeValue(SkillPowerDef, Spec, EvaluationParams);
	const float PhysicalAttack = GetCapturedAttributeValue(PhysicalAttackDef, Spec, EvaluationParams);
	
	int32 PlayerLevel = 1;
	return PhysicalAttack * 0.5 + SkillPower * .3f + MaxHealth * .001f;
}
