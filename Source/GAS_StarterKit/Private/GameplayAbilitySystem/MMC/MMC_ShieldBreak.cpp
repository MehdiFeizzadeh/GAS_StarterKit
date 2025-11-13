// GAS starter kit by Mehdi Feizzadeh


#include "GameplayAbilitySystem/MMC/MMC_ShieldBreak.h"

#include "GameplayAbilitySystem/Attributes/AS_Combat.h"

UMMC_ShieldBreak::UMMC_ShieldBreak()
{
	CaptureAttribute(SkillPowerDef);
	CaptureAttribute(EnergyAttackDef);
}

float UMMC_ShieldBreak::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	const FAggregatorEvaluateParameters EvaluationParams = CaptureSourceAndTargetTags(Spec);

	const float EnergyAttack = GetCapturedAttributeValue(EnergyAttackDef, Spec, EvaluationParams);
	const float SkillPower = GetCapturedAttributeValue(SkillPowerDef, Spec, EvaluationParams);
	
	int32 PlayerLevel = 1;
	return EnergyAttack *0.4f + SkillPower *.005f;
}
