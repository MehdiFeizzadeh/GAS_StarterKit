// GAS starter kit by Mehdi Feizzadeh


#include "GameplayAbilitySystem/Core/Factories/CharacterPreviewFactory.h"

UAbilitySystemComponent* UCharacterPreviewFactory::CreatePreviewASC(const UCharacterCatalogDataAsset* CatalogData,
	int32 HypotheticalLevel, int32 HypotheticalTier, int32 HypotheticalMastery)
{
	UAbilitySystemComponent* PreviewASC = NewObject<UAbilitySystemComponent>(this);
	if (CatalogData && PreviewASC)
	{
		//TODO: Initialize ASC with base stats + growth curves
	}
	return PreviewASC;
}
