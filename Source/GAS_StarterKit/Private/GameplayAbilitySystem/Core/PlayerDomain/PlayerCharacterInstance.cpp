// GAS starter kit by Mehdi Feizzadeh


#include "GameplayAbilitySystem/Core/PlayerDomain/PlayerCharacterInstance.h"

void UPlayerCharacterInstance::Initialize(const UCharacterCatalogDataAsset* CatalogData,
	const FPlayerCharacterDataInfo& InPlayerData)
{
	PlayerData = InPlayerData;

	AbilitySystemComponent = NewObject<UAbilitySystemComponent>(this);
	if (AbilitySystemComponent)
	{
		//TODO: Apply base stats + progression modifiers
	}
}
