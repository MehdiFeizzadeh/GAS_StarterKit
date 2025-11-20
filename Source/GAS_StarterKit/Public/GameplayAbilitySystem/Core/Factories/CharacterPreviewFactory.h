// GAS starter kit by Mehdi Feizzadeh

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "GameplayAbilitySystem/Core/GlobalDomain/CharacterCatalogDataAsset.h"
#include "UObject/NoExportTypes.h"
#include "CharacterPreviewFactory.generated.h"

/**
 * 
 */
UCLASS()
class GAS_STARTERKIT_API UCharacterPreviewFactory : public UObject
{
	GENERATED_BODY()
public:
	UAbilitySystemComponent* CreatePreviewASC(
		const UCharacterCatalogDataAsset* CatalogData,
		int32 HypotheticalLevel,int32 HypotheticalTier, int32 HypotheticalMastery);
};
