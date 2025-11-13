// GAS starter kit by Mehdi Feizzadeh


#include "GameplayAbilitySystem/MMC/MMC_TrueDamage.h"

#include "GameplayAbilitySystem/Attributes/AS_Combat.h"

UMMC_TrueDamage::UMMC_TrueDamage()
{	CaptureAttribute(SkillPowerDef);
	CaptureAttribute(MagicalAttackDef);
	CaptureAttribute(PhysicalAttackDef);
	CaptureAttribute(EnergyAttackDef);
}

float UMMC_TrueDamage::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	const FAggregatorEvaluateParameters EvaluationParams = CaptureSourceAndTargetTags(Spec);


	const float SkillPower = GetCapturedAttributeValue(SkillPowerDef, Spec, EvaluationParams);
	const float PhysicalAttack = GetCapturedAttributeValue(PhysicalAttackDef, Spec, EvaluationParams);
	const float MagicalAttack = GetCapturedAttributeValue(MagicalAttackDef, Spec, EvaluationParams);
	const float EnergyAttack = GetCapturedAttributeValue(EnergyAttackDef, Spec, EvaluationParams);
	
	int32 PlayerLevel = 1;
	int32 BaseTrueDamage = 10;
	return (PhysicalAttack + MagicalAttack + EnergyAttack) *0.15f + SkillPower *.5f +BaseTrueDamage;	
}
