// GAS starter kit by Mehdi Feizzadeh


#include "GameplayAbilitySystem/Core/GlobalDomain/CharacterCatalogManager.h"


const UCharacterCatalogDataAsset* UCharacterCatalogManager::GetCharacterData(FName CharacterID) const
{
	if ( const UCharacterCatalogDataAsset* CharacterData = *CharacterCatalogMap.Find(CharacterID))
	{
		return CharacterData;
	}
	return nullptr;
	
}

void UCharacterCatalogManager::RegisterCatalogEntry(UCharacterCatalogDataAsset* CatalogEntry)
{
	if (CatalogEntry)
	{
		CharacterCatalogMap.Add(CatalogEntry->CharacterID, CatalogEntry);
	}
}
