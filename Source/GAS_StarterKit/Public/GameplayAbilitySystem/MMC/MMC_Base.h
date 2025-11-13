// GAS starter kit by Mehdi Feizzadeh

#pragma once

#include "CoreMinimal.h"
#include "GameplayModMagnitudeCalculation.h"
#include "MMC_Base.generated.h"

/**
 * 
 */
UCLASS()
class GAS_STARTERKIT_API UMMC_Base : public UGameplayModMagnitudeCalculation
{
	GENERATED_BODY()
public:
	void CaptureAttribute(FGameplayEffectAttributeCaptureDefinition AttributeDef);
	static FAggregatorEvaluateParameters CaptureSourceAndTargetTags(const FGameplayEffectSpec& Spec);
	float GetCapturedAttributeValue(FGameplayEffectAttributeCaptureDefinition AttributeDef,
		const FGameplayEffectSpec&, const FAggregatorEvaluateParameters EvaluationParams) const;
};
