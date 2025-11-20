// GAS starter kit by Mehdi Feizzadeh


#include "GameplayAbilitySystem/Core/GlueLayer/CharacterStatCalculator.h"

FGameplayAttributeData UCharacterStatCalculator::CalculateFinalStats(const UCharacterCatalogDataAsset* CatalogData,
	const FPlayerCharacterDataInfo& PlayerData)
{
	FGameplayAttributeData Result;
	if (CatalogData)
	{
		float BaseHealth = CatalogData->BaseHealth;
		float TierBonus = CatalogData->TierModifier * PlayerData.CurrentTier;
		float MasteryBonus = CatalogData->MasteryModifier * PlayerData.CurrentMastery;
		Result.SetCurrentValue(BaseHealth +TierBonus + MasteryBonus);
	}
	return Result;
}
