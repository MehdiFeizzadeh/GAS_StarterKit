// GAS starter kit by Mehdi Feizzadeh


#include "GameplayAbilitySystem/MMC/MMC_ArmorPenetration.h"

#include "GameplayAbilitySystem/Attributes/AS_Combat.h"

UMMC_ArmorPenetration::UMMC_ArmorPenetration()
{
	CaptureAttribute(PhysicalAttackDef);
	CaptureAttribute(SkillPowerDef);
}

float UMMC_ArmorPenetration::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	const FAggregatorEvaluateParameters EvaluationParams = CaptureSourceAndTargetTags(Spec);

	const float PhysicalAttack = GetCapturedAttributeValue(PhysicalAttackDef, Spec, EvaluationParams);
	const float SkillPower = GetCapturedAttributeValue(SkillPowerDef, Spec, EvaluationParams);
	
	int32 PlayerLevel = 1;
	return PhysicalAttack* .25f + SkillPower* .3f;
}
