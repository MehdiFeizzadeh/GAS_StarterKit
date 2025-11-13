// GAS starter kit by Mehdi Feizzadeh


#include "GameplayAbilitySystem/MMC/MMC_LifeSteal.h"

#include "GameplayAbilitySystem/Attributes/AS_Combat.h"

UMMC_LifeSteal::UMMC_LifeSteal()
{
	CaptureAttribute(CriticalDamageDef);
	CaptureAttribute(DarkDamageDef);
}

float UMMC_LifeSteal::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	const FAggregatorEvaluateParameters EvaluationParams = CaptureSourceAndTargetTags(Spec);

	const float CriticalDamage = GetCapturedAttributeValue(CriticalDamageDef, Spec, EvaluationParams);
	const float DarkDamage = GetCapturedAttributeValue(DarkDamageDef, Spec, EvaluationParams);
	
	int32 PlayerLevel = 1;
	return 5.0f + (CriticalDamage - 1)*10 + DarkDamage * 0.002f ;
}
