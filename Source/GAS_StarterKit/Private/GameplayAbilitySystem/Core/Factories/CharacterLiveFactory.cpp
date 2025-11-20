// GAS starter kit by Mehdi Feizzadeh


#include "GameplayAbilitySystem/Core/Factories/CharacterLiveFactory.h"

UAbilitySystemComponent* UCharacterLiveFactory::CreateLiveASC(const UCharacterCatalogDataAsset* CatalogData,
	const FPlayerCharacterDataInfo* PlayerData)
{
	UAbilitySystemComponent* LiveASC = NewObject<UAbilitySystemComponent>(this);
	if (CatalogData && LiveASC)
	{
		//TODO: Initialize ASC with catalog base stats  + player progression
	}
	return LiveASC;
}
