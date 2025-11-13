// GAS starter kit by Mehdi Feizzadeh


#include "GameplayAbilitySystem/MMC/MMC_Base.h"
#include "GameplayAbilitySystem/Attributes/AS_Combat.h"

void UMMC_Base::CaptureAttribute(FGameplayEffectAttributeCaptureDefinition AttributeDef)
{
	AttributeDef.AttributeToCapture = UAS_Combat::GetPhysicalAttackAttribute();
	AttributeDef.AttributeSource = EGameplayEffectAttributeCaptureSource::Source;
	AttributeDef.bSnapshot= false;
	RelevantAttributesToCapture.Add(AttributeDef);
}

FAggregatorEvaluateParameters UMMC_Base::CaptureSourceAndTargetTags(const FGameplayEffectSpec& Spec)
{
	const FGameplayTagContainer* SourceTags = Spec.CapturedSourceTags.GetAggregatedTags();
	const FGameplayTagContainer* TargetTags = Spec.CapturedTargetTags.GetAggregatedTags();

	FAggregatorEvaluateParameters EvaluationParams;
	EvaluationParams.SourceTags = SourceTags;
	EvaluationParams.TargetTags = TargetTags;
	
	return EvaluationParams;
}

float UMMC_Base::GetCapturedAttributeValue(FGameplayEffectAttributeCaptureDefinition AttributeDef,
	const FGameplayEffectSpec& Spec, const FAggregatorEvaluateParameters EvaluationParams) const
{
	float Meta = .0f;
	GetCapturedAttributeMagnitude(AttributeDef, Spec, EvaluationParams, Meta);
	Meta = FMath::Max<float>(Meta,0.f);
	return Meta;
}

