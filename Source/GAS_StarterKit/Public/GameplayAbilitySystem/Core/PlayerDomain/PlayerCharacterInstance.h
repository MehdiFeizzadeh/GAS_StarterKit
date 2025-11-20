// GAS starter kit by Mehdi Feizzadeh

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "PlayerCharacterData.h"
#include "GameplayAbilitySystem/Core/GlobalDomain/CharacterCatalogDataAsset.h"
#include "UObject/NoExportTypes.h"
#include "PlayerCharacterInstance.generated.h"

/**
 * 
 */
UCLASS()
class GAS_STARTERKIT_API UPlayerCharacterInstance : public UObject
{
	GENERATED_BODY()

public:
	void Initialize(const UCharacterCatalogDataAsset* CatalogData, const FPlayerCharacterDataInfo& InPlayerData);
private:
	UPROPERTY()
	UAbilitySystemComponent* AbilitySystemComponent;
	UPROPERTY()
	FPlayerCharacterDataInfo PlayerData;
};
