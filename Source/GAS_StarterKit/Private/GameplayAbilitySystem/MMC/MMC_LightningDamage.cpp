// GAS starter kit by Mehdi Feizzadeh


#include "GameplayAbilitySystem/MMC/MMC_LightningDamage.h"

#include "GameplayAbilitySystem/Attributes/AS_Combat.h"

UMMC_LightningDamage::UMMC_LightningDamage()
{
	CaptureAttribute(SkillPowerDef);
	CaptureAttribute(EnergyAttackDef);
}

float UMMC_LightningDamage::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	const FAggregatorEvaluateParameters EvaluationParams = CaptureSourceAndTargetTags(Spec);
	
	const float EnergyAttack = GetCapturedAttributeValue(EnergyAttackDef, Spec, EvaluationParams);
	const float SkillPower = GetCapturedAttributeValue(SkillPowerDef, Spec, EvaluationParams);

	int32 PlayerLevel = 1;
	return EnergyAttack * 0.8f + SkillPower * 0.1f;
}
