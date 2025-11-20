// GAS starter kit by Mehdi Feizzadeh

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "GameplayAbilitySystem/Core/GlobalDomain/CharacterCatalogDataAsset.h"
#include "GameplayAbilitySystem/Core/PlayerDomain/PlayerCharacterData.h"
#include "UObject/NoExportTypes.h"
#include "CharacterLiveFactory.generated.h"

/**
 * 
 */
UCLASS()
class GAS_STARTERKIT_API UCharacterLiveFactory : public UObject
{
	GENERATED_BODY()
public:
	UAbilitySystemComponent* CreateLiveASC(const UCharacterCatalogDataAsset* CatalogData,
		const FPlayerCharacterDataInfo* PlayerData);
};
