// GAS starter kit by Mehdi Feizzadeh

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CharacterCatalogDataAsset.generated.h"

/**
 * The properties of Character catalog. The universal properties
 */
UCLASS()
class GAS_STARTERKIT_API UCharacterCatalogDataAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	//Bsae info
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Stats")
	FName CharacterID;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Stats")
	FName DisplayName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Stats")
	FName Description;

	//Base attribute values
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Stats")
	int32 BaseHealth;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Stats")
	int32 BaseAttack;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Stats")
	int32 BaseDefense;

	//Growth variables
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Progression")
	UCurveTable* GrowthCurves;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Progression")
	float TierModifier;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Progression")
	float MasteryModifier;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Progression")
	int32 LevelModifier;
	
};
