// GAS starter kit by Mehdi Feizzadeh

#pragma once

#include "CoreMinimal.h"
#include "GAS_CharacterID.generated.h"
USTRUCT(BlueprintType)
struct GAS_STARTERKIT_API FCharacterID
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ID;
};

/**
 * 
 */
class GAS_STARTERKIT_API GAS_CharacterID
{

};
