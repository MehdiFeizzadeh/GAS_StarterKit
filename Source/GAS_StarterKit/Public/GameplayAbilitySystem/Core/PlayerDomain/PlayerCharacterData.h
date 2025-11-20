// GAS starter kit by Mehdi Feizzadeh

#pragma once

#include "CoreMinimal.h"
#include "PlayerCharacterData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerCharacterDataInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName CharacterID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CurrentLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CurrentTier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CurrentMastery;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> EquippedItems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> ActiveBuffs;
};

UCLASS()
class UPlayerCharacterData : public UObject
{
	GENERATED_BODY()

public:
	
};
