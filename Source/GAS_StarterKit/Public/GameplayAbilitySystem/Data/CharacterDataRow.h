// GAS starter kit by Mehdi Feizzadeh
#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayEffect.h"
#include "GameplayTagContainer.h"
#include "CharacterDataRow.generated.h"

class ABaseCharacter;

USTRUCT(BlueprintType)
struct FCharacterDataRow : public FTableRowBase
{
    GENERATED_BODY()

    /** Unique identifier for the character */
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 CharacterID;

    /** Display name */
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString CharacterName;

    /** Skeletal mesh reference */
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSoftObjectPtr<USkeletalMesh> SkeletalMesh;

    /** Initial stat setter GameplayEffect */
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSoftClassPtr<UGameplayEffect> InitialStatsEffect;

    /** Uniform system */
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString UniformName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 UniformID;

    /** Reference to the BaseCharacter class (for spawning/ASC/AS setup) */
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSoftClassPtr<ABaseCharacter> BaseCharacterClass;

    /** 🔮 Future-proof properties */

    // Portrait/Icon for UI
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSoftObjectPtr<UTexture2D> PortraitIcon;

    // Voice or sound cue
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSoftObjectPtr<USoundBase> VoiceCue;

    // Default ability set (could be a DataAsset or Blueprint class)
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSoftClassPtr<UObject> AbilitySet;

    // Tags for filtering (hero/villain, rarity, etc.)
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FGameplayTagContainer CharacterTags;

    // Rarity / Tier
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 RarityTier;

    // Unlock cost (currency, shards, etc.)
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 UnlockCost;

    // Default Animation Blueprint
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSoftClassPtr<UAnimInstance> DefaultAnimBP;

    // AI Controller class (for NPC versions)
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSoftClassPtr<AController> AIControllerClass;

    // Element/Type (fire, tech, mystic, etc.)
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString ElementType;

    // Stat growth curve (link to CurveTable for scaling)
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSoftObjectPtr<UCurveTable> StatGrowthCurve;
};