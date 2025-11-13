// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/Character.h"
#include "GameEnums.h"
#include "BaseCharacter.generated.h"

class UGameplayEffect;

UCLASS()
class GAS_STARTERKIT_API ABaseCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	ABaseCharacter();
	
	//IAbilitySystemInterface function
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	//Declare AbilitySystemComponent and AttributeSet
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly, Category="GAS")
	TObjectPtr<class UBaseAbilitySystemComponent> AbilitySystemComponent;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="GAS")
	TObjectPtr<class UBaseAttributeSet> CombatAttributeSet;
	// Accessors
	UFUNCTION(BlueprintCallable, Category="GAS")
	UBaseAttributeSet* GetCombatAttributeSet() const { return CombatAttributeSet; }
	
	// Initializes ASC ActorInfo (OwnerActor = PlayerState, AvatarActor = Current Pawn)
	UFUNCTION(Category="GAS")
	void InitAbilityActorInfo();
	
	//Gameplay Effect functions
	UFUNCTION(BlueprintCallable, Category="GAS")
	void ApplyGameplayEffectToSelf(TSubclassOf<UGameplayEffect> GameplayEffect) const;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

/*
 * ProgressionStats
 */
private:
	//Core Growth
	int32 CharacterLevel; //overall growth tier
	int32 Experience; //accumulated progress toward next level
	ERank Rank; // tiered upgrade system (Rank 1 → Rank 6, etc.)
	EMastery Mastery; // skill-specific progression (e.g., sword mastery, fire mastery)
	int32 Prestige; // reset-based progression with permanent bonuses
	EEvolutionStage EvolutionStage; // creature growth (egg → hatchling → adult → elder)
	int32 StagePoints; // resource for evolving into new forms
	float GrowthPotential; //cap on how far a unit can evolve

	//Combat-Oriented
	int32 AbilityLevel; //per-ability upgrade tier
	int32 TalentPoints; //specialization choices in skill trees
	int32 SynergyLevel; //team composition bonuses
	int32 BondLevel; //relationship-driven stat (pet, ally, faction)
	float CombatRating; //aggregate stat for matchmaking
	EAffinityType Affinity; //elemental or faction alignment strength

	//Equipment & Crafting
	int32 GearScore; // overall equipment strength
	int32 WeaponProficiency; //mastery with specific weapon types
	int32 ArmorProficiency; //effectiveness with armor classes
	int32 ArtifactLevel; //progression of unique relics
	int32 CraftingSkillLevel; //blacksmithing, alchemy, engineering
	EEnhancementTier EnhancementTier; //magical or technological modifications

	//Meta & Narrative Progression
	int32 Reputation; //standing with factions or NPCs
	EAlignment Alignment; //moral progression (Light/Dark, Good/Evil)
	EFactionRank FactionRank; //progression within a guild, clan, or empire
	int32 StoryProgression; //chapter or questline completion
	int32 AchievementPoints; //meta progression currency
	TArray<FName> TitleUnlocks; //earned through achievements

	//Creature / Race-Specific Progression
	int32 MutationLevel; //genetic or magical evolution
	int32 InstinctLevel; //primal abilities unlocked with age
	int32 SpiritRank; //mystical progression for non-human races
	float BondStrength; //loyalty of pets or mounts
	float Discipline; //behavioral progression stats

protected:
	// Subclasses can adjust progression internally
	void AddExperience(int32 Amount);
	void RankUp();
	void Evolve();

public:
	/*
	 * Getter for variables
	 */
	
	// Core Growth
	int32 GetCharacterLevel() const { return CharacterLevel; }
	int32 GetExperience() const { return Experience; }
	ERank GetRank() const { return Rank; }
	EMastery GetMastery() const { return Mastery; }
	int32 GetPrestige() const { return Prestige; }
	EEvolutionStage GetEvolutionStage() const { return EvolutionStage; }
	int32 GetStagePoints() const { return StagePoints; }
	float GetGrowthPotential() const { return GrowthPotential; }

	// Combat-Oriented
	int32 GetAbilityLevel() const { return AbilityLevel; }
	int32 GetTalentPoints() const { return TalentPoints; }
	int32 GetSynergyLevel() const { return SynergyLevel; }
	int32 GetBondLevel() const { return BondLevel; }
	float GetCombatRating() const { return CombatRating; }
	EAffinityType GetAffinity() const { return Affinity; }

	// Equipment & Crafting
	int32 GetGearScore() const { return GearScore; }
	int32 GetWeaponProficiency() const { return WeaponProficiency; }
	int32 GetArmorProficiency() const { return ArmorProficiency; }
	int32 GetArtifactLevel() const { return ArtifactLevel; }
	int32 GetCraftingSkillLevel() const { return CraftingSkillLevel; }
	EEnhancementTier GetEnhancementTier() const { return EnhancementTier; }

	// Meta & Narrative Progression
	int32 GetReputation() const { return Reputation; }
	EAlignment GetAlignment() const { return Alignment; }
	EFactionRank GetFactionRank() const { return FactionRank; }
	int32 GetStoryProgression() const { return StoryProgression; }
	int32 GetAchievementPoints() const { return AchievementPoints; }
	const TArray<FName>& GetTitleUnlocks() const { return TitleUnlocks; }

	// Creature / Race-Specific Progression
	int32 GetMutationLevel() const { return MutationLevel; }
	int32 GetInstinctLevel() const { return InstinctLevel; }
	int32 GetSpiritRank() const { return SpiritRank; }
	float GetBondStrength() const { return BondStrength; }
	float GetDiscipline() const { return Discipline; }

};
