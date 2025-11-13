// GAS starter kit by Mehdi Feizzadeh


#include "GameplayAbilitySystem/MMC/MMC_IgnoreDefense.h"

#include "GameplayAbilitySystem/Attributes/AS_Combat.h"

UMMC_IgnoreDefense::UMMC_IgnoreDefense()
{
	CaptureAttribute(ArmorPenetrationDef);
	CaptureAttribute(MagicPenetrationDef);
	CaptureAttribute(TrueDamageDef);
}

float UMMC_IgnoreDefense::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	const FAggregatorEvaluateParameters EvaluationParams = CaptureSourceAndTargetTags(Spec);

	const float ArmorPenetration = GetCapturedAttributeValue(ArmorPenetrationDef, Spec, EvaluationParams);
	const float MagicPenetration = GetCapturedAttributeValue(MagicPenetrationDef, Spec, EvaluationParams);
	const float TrueDamage = GetCapturedAttributeValue(TrueDamageDef, Spec, EvaluationParams);;

	int32 PlayerLevel = 1;
	return FMath::Max(ArmorPenetration, MagicPenetration) *.6f + TrueDamage * .001f;
}
