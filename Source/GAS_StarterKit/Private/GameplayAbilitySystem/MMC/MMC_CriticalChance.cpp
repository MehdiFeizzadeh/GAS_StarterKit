// GAS starter kit by Mehdi Feizzadeh


#include "GameplayAbilitySystem/MMC/MMC_CriticalChance.h"

#include "GameplayAbilitySystem/Attributes/AS_Combat.h"

UMMC_CriticalChance::UMMC_CriticalChance()
{
	CaptureAttribute(SkillPowerDef);
	CaptureAttribute(AccuracyDef);
}

float UMMC_CriticalChance::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	const FAggregatorEvaluateParameters EvaluationParams = CaptureSourceAndTargetTags(Spec);

	float SkillPower = 	GetCapturedAttributeValue(SkillPowerDef,Spec, EvaluationParams);
	float Accuracy = GetCapturedAttributeValue(AccuracyDef,Spec, EvaluationParams);
	
	int32 PlayerLevel = 1;
	return 5.f *Accuracy + FMath::Min<float>(SkillPower*.01f, 25.f);
	
}
