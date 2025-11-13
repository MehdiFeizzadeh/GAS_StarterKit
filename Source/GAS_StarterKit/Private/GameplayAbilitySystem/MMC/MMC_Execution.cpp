// GAS starter kit by Mehdi Feizzadeh


#include "GameplayAbilitySystem/MMC/MMC_Execution.h"

UMMC_Execution::UMMC_Execution()
{
	CaptureAttribute(BurstPotentialDef);
	CaptureAttribute(ComboMultiplierDef);
}

float UMMC_Execution::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	const FAggregatorEvaluateParameters EvaluationParams = CaptureSourceAndTargetTags(Spec);
	
	const float BurstPotential = GetCapturedAttributeValue(BurstPotentialDef, Spec, EvaluationParams);
	const float ComboMultiplier = GetCapturedAttributeValue(ComboMultiplierDef, Spec, EvaluationParams);
	
	int32 PlayerLevel = 1;
	return 5.f + BurstPotential * .15f + ComboMultiplier* .01f;
}
