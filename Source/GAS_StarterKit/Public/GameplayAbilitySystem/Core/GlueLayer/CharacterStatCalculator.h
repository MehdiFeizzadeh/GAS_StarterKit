// GAS starter kit by Mehdi Feizzadeh

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "GameplayAbilitySystem/Core/GlobalDomain/CharacterCatalogDataAsset.h"
#include "GameplayAbilitySystem/Core/PlayerDomain/PlayerCharacterData.h"
#include "UObject/NoExportTypes.h"
#include "CharacterStatCalculator.generated.h"

/**
 * 
 */
UCLASS()
class GAS_STARTERKIT_API UCharacterStatCalculator : public UObject
{
	GENERATED_BODY()

public:
	static FGameplayAttributeData CalculateFinalStats(
		const UCharacterCatalogDataAsset* CatalogData, const FPlayerCharacterDataInfo& PlayerData);
};
