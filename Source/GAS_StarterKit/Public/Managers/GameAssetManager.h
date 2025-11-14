// GAS starter kit by Mehdi Feizzadeh

#pragma once

#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "GameAssetManager.generated.h"

/**
 * 
 */
UCLASS()
class GAS_STARTERKIT_API UGameAssetManager : public UAssetManager
{
	GENERATED_BODY()
public:
	static UGameAssetManager& Get();
protected:
	virtual void StartInitialLoading() override;
};
