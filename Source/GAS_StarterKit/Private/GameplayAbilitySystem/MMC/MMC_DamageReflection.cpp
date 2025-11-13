// GAS starter kit by Mehdi Feizzadeh


#include "GameplayAbilitySystem/MMC/MMC_DamageReflection.h"

#include "CookerSettings.h"
#include "GameplayAbilitySystem/Attributes/AS_Combat.h"

UMMC_DamageReflection::UMMC_DamageReflection()
{
	CaptureAttribute(MaxHealthDef);
	CaptureAttribute(MagicPenetrationDef);
	CaptureAttribute(ArmorPenetrationDef);
}

float UMMC_DamageReflection::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	const FAggregatorEvaluateParameters EvaluationParams = CaptureSourceAndTargetTags(Spec);
	
	const float ArmorPenetration = GetCapturedAttributeValue(ArmorPenetrationDef, Spec, EvaluationParams);
	const float MagicPenetration = GetCapturedAttributeValue(MagicPenetrationDef, Spec, EvaluationParams);
	const float MaxHealth = GetCapturedAttributeValue(MaxHealthDef, Spec, EvaluationParams);
	
	int32 PlayerLevel = 1;
	return 10.f + MaxHealth* 0.005f + (ArmorPenetration + MagicPenetration) * 0.001f ;
}
