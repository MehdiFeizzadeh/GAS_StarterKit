// GAS starter kit by Mehdi Feizzadeh


#include "GameplayAbilitySystem/MMC/MMC_OverPenetration.h"

#include "GameplayAbilitySystem/Attributes/AS_Combat.h"

UMMC_OverPenetration::UMMC_OverPenetration()
{
	CaptureAttribute(TrueDamageDef);
	CaptureAttribute(MagicPenetrationDef);
	CaptureAttribute(ArmorPenetrationDef);
}

float UMMC_OverPenetration::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	const FAggregatorEvaluateParameters EvaluationParams = CaptureSourceAndTargetTags(Spec);
	
	const float ArmorPenetration = GetCapturedAttributeValue(ArmorPenetrationDef, Spec, EvaluationParams);
	const float MagicPenetration = GetCapturedAttributeValue(MagicPenetrationDef, Spec, EvaluationParams);
	const float TrueDamage = GetCapturedAttributeValue(TrueDamageDef, Spec, EvaluationParams);;
	
	int32 PlayerLevel = 1;
	return (ArmorPenetration + MagicPenetration) * 0.1f + TrueDamage *.001f ;
}
