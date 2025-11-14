// GAS starter kit by Mehdi Feizzadeh


#include "Managers/GameAssetManager.h"
#include "GameplayTags/Tags_Master.h"

UGameAssetManager& UGameAssetManager::Get()
{
	check(GEngine);
	UGameAssetManager* GameAssetManager = Cast<UGameAssetManager>(GEngine->AssetManager);
	return *GameAssetManager;
}

void UGameAssetManager::StartInitialLoading()
{
	Super::StartInitialLoading();
	
	FTags_Master::InitializeNativeGameplayTags();
}
