// GAS starter kit by Mehdi Feizzadeh


#include "GameplayAbilitySystem/MMC/MMC_MagicPenetration.h"

#include "GameplayAbilitySystem/Attributes/AS_Combat.h"

UMMC_MagicPenetration::UMMC_MagicPenetration()
{
	CaptureAttribute(SkillPowerDef);
	CaptureAttribute(MagicalAttackDef);
}

float UMMC_MagicPenetration::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	const FAggregatorEvaluateParameters EvaluationParams = CaptureSourceAndTargetTags(Spec);
	
	const float SkillPower = GetCapturedAttributeValue(SkillPowerDef, Spec, EvaluationParams);
	const float MagicalAttack = GetCapturedAttributeValue(MagicalAttackDef, Spec, EvaluationParams);

	int32 PlayerLevel = 1;
	return MagicalAttack *0.2f + SkillPower *.1f;
}
