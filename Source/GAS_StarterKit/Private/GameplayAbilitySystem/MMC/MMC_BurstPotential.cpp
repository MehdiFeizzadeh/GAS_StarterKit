// GAS starter kit by Mehdi Feizzadeh


#include "GameplayAbilitySystem/MMC/MMC_BurstPotential.h"

UMMC_BurstPotential::UMMC_BurstPotential()
{
	CaptureAttribute(SkillPowerDef);
	CaptureAttribute(EnergyAttackDef);
	CaptureAttribute(MagicalAttackDef);
	CaptureAttribute(PhysicalAttackDef);
	CaptureAttribute(CriticalDamageDef);
	CaptureAttribute(AttackSpeedDef);
}

float UMMC_BurstPotential::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	const FAggregatorEvaluateParameters EvaluationParams = CaptureSourceAndTargetTags(Spec);

	const float EnergyAttack = 	GetCapturedAttributeValue(EnergyAttackDef,Spec, EvaluationParams);
	const float MagicalAttack = GetCapturedAttributeValue(MagicalAttackDef,Spec, EvaluationParams);
	const float PhysicalAttack = GetCapturedAttributeValue(PhysicalAttackDef,Spec, EvaluationParams);
	const float CriticalDamage = GetCapturedAttributeValue(CriticalDamageDef,Spec, EvaluationParams);
	const float AttackSpeed = GetCapturedAttributeValue(AttackSpeedDef,Spec, EvaluationParams);
	const float SkillPower = GetCapturedAttributeValue(SkillPowerDef,Spec, EvaluationParams);

	
	int32 PlayerLevel = 1;
	return (PhysicalAttack + MagicalAttack + EnergyAttack)* AttackSpeed * 0.01f + CriticalDamage * 0.3f + SkillPower* 0.02f;
}
