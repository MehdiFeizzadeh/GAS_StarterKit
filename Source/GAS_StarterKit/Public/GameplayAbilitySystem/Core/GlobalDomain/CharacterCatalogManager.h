// GAS starter kit by Mehdi Feizzadeh

#pragma once

#include "CoreMinimal.h"
#include "CharacterCatalogDataAsset.h"
#include "CharacterCatalogManager.generated.h"

/**
 * 
 */
UCLASS()
class GAS_STARTERKIT_API UCharacterCatalogManager : public UObject
{
	GENERATED_BODY()
public:
	//Get catalog character data by CharacterID
	const UCharacterCatalogDataAsset* GetCharacterData(FName CharacterID) const;

	// Function to add characters to catalog characters map
	void RegisterCatalogEntry(UCharacterCatalogDataAsset* CatalogEntry);

private:

	//A map for stored Catalog characters
	UPROPERTY()
	TMap<FName, UCharacterCatalogDataAsset*> CharacterCatalogMap;
};
