// GAS starter kit by Mehdi Feizzadeh
#pragma once

#include "CoreMinimal.h"
#include "GameEnums.generated.h"

// --------------------
// Rank progression
// --------------------
UENUM(BlueprintType)
enum class ERank : uint8
{
    Rank1 UMETA(DisplayName="Rank 1"),
    Rank2 UMETA(DisplayName="Rank 2"),
    Rank3 UMETA(DisplayName="Rank 3"),
    Rank4 UMETA(DisplayName="Rank 4"),
    Rank5 UMETA(DisplayName="Rank 5"),
    Rank6 UMETA(DisplayName="Rank 6")
};

// --------------------
// Mastery types
// --------------------
UENUM(BlueprintType)
enum class EMastery : uint8
{
    Mastery1 UMETA(DisplayName="Mastery 1"),
    Mastery2 UMETA(DisplayName="Mastery 2"),
    Mastery3 UMETA(DisplayName="Mastery 3"),
    Mastery4 UMETA(DisplayName="Mastery 4"),
    Mastery5 UMETA(DisplayName="Mastery 5"),
    Mastery6 UMETA(DisplayName="Mastery 6"),
};

// --------------------
// Evolution stages
// --------------------
UENUM(BlueprintType)
enum class EEvolutionStage : uint8
{
    Egg UMETA(DisplayName="Egg"),
    Hatchling UMETA(DisplayName="Hatchling"),
    Adult UMETA(DisplayName="Adult"),
    Elder UMETA(DisplayName="Elder")
};

// --------------------
// Elemental / faction affinity
// --------------------
UENUM(BlueprintType)
enum class EAffinityType : uint8
{
    None UMETA(DisplayName="None"),
    Fire UMETA(DisplayName="Fire"),
    Water UMETA(DisplayName="Water"),
    Earth UMETA(DisplayName="Earth"),
    Air UMETA(DisplayName="Air"),
    Light UMETA(DisplayName="Light"),
    Dark UMETA(DisplayName="Dark")
};

// --------------------
// Enhancement tiers
// --------------------
UENUM(BlueprintType)
enum class EEnhancementTier : uint8
{
    Tier0 UMETA(DisplayName="None"),
    Tier1 UMETA(DisplayName="Tier 1"),
    Tier2 UMETA(DisplayName="Tier 2"),
    Tier3 UMETA(DisplayName="Tier 3"),
    Tier4 UMETA(DisplayName="Tier 4"),
    Tier5 UMETA(DisplayName="Tier 5")
};

// --------------------
// Alignment (morality)
// --------------------
UENUM(BlueprintType)
enum class EAlignment : uint8
{
    Neutral UMETA(DisplayName="Neutral"),
    Good UMETA(DisplayName="Good"),
    Evil UMETA(DisplayName="Evil"),
    Chaotic UMETA(DisplayName="Chaotic"),
    Lawful UMETA(DisplayName="Lawful")
};

// --------------------
// Faction rank
// --------------------
UENUM(BlueprintType)
enum class EFactionRank : uint8
{
    Recruit UMETA(DisplayName="Recruit"),
    Soldier UMETA(DisplayName="Soldier"),
    Captain UMETA(DisplayName="Captain"),
    Commander UMETA(DisplayName="Commander"),
    Champion UMETA(DisplayName="Champion"),
    Leader UMETA(DisplayName="Leader")
};