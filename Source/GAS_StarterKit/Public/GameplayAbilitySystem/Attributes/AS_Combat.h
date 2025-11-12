// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "GameplayAbilitySystem/Core/BaseAttributeSet.h"
#include "AS_Combat.generated.h"

/**
 * 
 */
UCLASS()
class GAS_STARTERKIT_API UAS_Combat : public UBaseAttributeSet
{
	GENERATED_BODY()
public:
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;
	/*
	 * Vital attributes
	 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,ReplicatedUsing=OnRep_Health, Category = "Attributes|Combat")
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UAS_Combat, Health)

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,ReplicatedUsing=OnRep_MaxHealth, Category = "Attributes|Combat")
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UAS_Combat, MaxHealth)
	/*
	 * Offensive attributes
	 */
	
	//base damage for melee/weapon strikes
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,ReplicatedUsing=OnRep_PhysicalAttack, Category = "Attributes|Combat")
	FGameplayAttributeData PhysicalAttack;
	ATTRIBUTE_ACCESSORS(UAS_Combat, PhysicalAttack)

	//base damage for spells and arcane abilities
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, ReplicatedUsing=OnRep_MagicalAttack, Category = "Attributes|Combat")
	FGameplayAttributeData MagicalAttack;
	ATTRIBUTE_ACCESSORS(UAS_Combat, MagicalAttack)

	//damage from non-physical sources (chi, aura, tech, etc.)
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, ReplicatedUsing=OnRep_EnergyAttack, Category = "Attributes|Combat")
	FGameplayAttributeData EnergyAttack;
	ATTRIBUTE_ACCESSORS(UAS_Combat, EnergyAttack)

	//damage that ignores all defenses
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attributes|Combat")
	FGameplayAttributeData TrueDamage;
	ATTRIBUTE_ACCESSORS(UAS_Combat, TrueDamage)

	//probability of landing a critical hit
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attributes|Combat")
	FGameplayAttributeData CriticalChance;
	ATTRIBUTE_ACCESSORS(UAS_Combat, CriticalChance)

	//multiplier applied to critical hits
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attributes|Combat")
	FGameplayAttributeData CriticalDamage;
	ATTRIBUTE_ACCESSORS(UAS_Combat, CriticalDamage)

	//frequency of attacks per second or turn
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, ReplicatedUsing=OnRep_AttackSpeed, Category = "Attributes|Combat")
	FGameplayAttributeData AttackSpeed;
	ATTRIBUTE_ACCESSORS(UAS_Combat, AttackSpeed)

	// scaling factor for abilities
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, ReplicatedUsing=OnRep_SkillPower, Category = "Attributes|Combat")
	FGameplayAttributeData SkillPower;
	ATTRIBUTE_ACCESSORS(UAS_Combat, SkillPower)

	/*
	 * Penetration/Ignore attributes
	 */

	//reduces target’s physical defense
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attributes|Combat")
	FGameplayAttributeData ArmorPenetration;
	ATTRIBUTE_ACCESSORS(UAS_Combat, ArmorPenetration)

	// reduces target’s magical resistance
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attributes|Combat")
	FGameplayAttributeData MagicPenetration;
	ATTRIBUTE_ACCESSORS(UAS_Combat, MagicPenetration)

	//effectiveness against barriers or shields
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attributes|Combat")
	FGameplayAttributeData ShieldBreak;
	ATTRIBUTE_ACCESSORS(UAS_Combat, ShieldBreak)

	//percentage of attack that bypasses defenses entirely
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attributes|Combat")
	FGameplayAttributeData IgnoreDefense;
	ATTRIBUTE_ACCESSORS(UAS_Combat, IgnoreDefense)

	//lowers enemy elemental/magic resistances
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attributes|Combat")
	FGameplayAttributeData ResistanceShred;
	ATTRIBUTE_ACCESSORS(UAS_Combat, ResistanceShred)

	/*
	 * Damage Type attributes
	 */

	//elemental damage modifier
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attributes|Combat")
	FGameplayAttributeData FireDamage;
	ATTRIBUTE_ACCESSORS(UAS_Combat, FireDamage)

	//slows or freezes targets
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attributes|Combat")
	FGameplayAttributeData IceDamage;
	ATTRIBUTE_ACCESSORS(UAS_Combat, IceDamage)

	// chance to stun or chain to multiple targets
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attributes|Combat")
	FGameplayAttributeData LightningDamage;
	ATTRIBUTE_ACCESSORS(UAS_Combat, LightningDamage)

	//damage-over-time effect
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attributes|Combat")
	FGameplayAttributeData PoisonDamage;
	ATTRIBUTE_ACCESSORS(UAS_Combat, PoisonDamage)

	//bypasses certain resistances
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attributes|Combat")
	FGameplayAttributeData DarkDamage;
	ATTRIBUTE_ACCESSORS(UAS_Combat, DarkDamage)

	//extra effective against undead/demonic foes
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attributes|Combat")
	FGameplayAttributeData HolyDamage;
	ATTRIBUTE_ACCESSORS(UAS_Combat, HolyDamage)

	/*
	 * Utility combat attributes
	 */

	//chance to hit evasive targets
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, ReplicatedUsing=OnRep_Accuracy, Category = "Attributes|Combat")
	FGameplayAttributeData Accuracy;
	ATTRIBUTE_ACCESSORS(UAS_Combat, Accuracy)

	//chance to avoid incoming attacks
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, ReplicatedUsing=OnRep_Evasion, Category = "Attributes|Combat")
	FGameplayAttributeData Evasion;
	ATTRIBUTE_ACCESSORS(UAS_Combat, Evasion)

	//percentage of damage converted to healing
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attributes|Combat")
	FGameplayAttributeData LifeSteal;
	ATTRIBUTE_ACCESSORS(UAS_Combat, LifeSteal)

	//portion of damage returned to attacker
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attributes|Combat")
	FGameplayAttributeData DamageReflection;
	ATTRIBUTE_ACCESSORS(UAS_Combat, DamageReflection)

	//excess damage carries through to secondary targets
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attributes|Combat")
	FGameplayAttributeData OverPenetration;
	ATTRIBUTE_ACCESSORS(UAS_Combat, OverPenetration)

	//bonus damage for chained attacks
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attributes|Combat")
	FGameplayAttributeData ComboMultiplier;
	ATTRIBUTE_ACCESSORS(UAS_Combat, ComboMultiplier)

	/*
	 * Advanced/ Experimental attributes
	 */

	// ignores defense up to a certain value
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attributes|Combat")
	FGameplayAttributeData ArmorIgnoreThreshold;
	ATTRIBUTE_ACCESSORS(UAS_Combat, ArmorIgnoreThreshold)

	//chance to bypass block or parry
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attributes|Combat")
	FGameplayAttributeData Pierce;
	ATTRIBUTE_ACCESSORS(UAS_Combat, Pierce)

	//attack that cannot miss or be dodged
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attributes|Combat")
	FGameplayAttributeData TrueStrike;
	ATTRIBUTE_ACCESSORS(UAS_Combat, TrueStrike)

	//bonus damage against low-health enemies
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attributes|Combat")
	FGameplayAttributeData Execution;
	ATTRIBUTE_ACCESSORS(UAS_Combat, Execution)

	//scaling damage when multiple abilities are used in quick succession
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attributes|Combat")
	FGameplayAttributeData BurstPotential;
	ATTRIBUTE_ACCESSORS(UAS_Combat, BurstPotential)

	//strength of bleed, burn, poison effects
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attributes|Combat")
	FGameplayAttributeData DamageOverTimePower;
	ATTRIBUTE_ACCESSORS(UAS_Combat, DamageOverTimePower)

	
	/*
	 * Declaring OnRep callbacks for replicated attributes
	 */
	UFUNCTION()
	void OnRep_Health(const FGameplayAttributeData& OldValue);
	UFUNCTION()
	void OnRep_MaxHealth(const FGameplayAttributeData& OldValue);
	UFUNCTION()
	void OnRep_PhysicalAttack(const FGameplayAttributeData& OldValue);
	UFUNCTION()
	void OnRep_MagicalAttack(const FGameplayAttributeData& OldValue);
	UFUNCTION()
	void OnRep_EnergyAttack(const FGameplayAttributeData& OldValue);
	UFUNCTION()
	void OnRep_AttackSpeed(const FGameplayAttributeData& OldValue);
	UFUNCTION()
	void OnRep_SkillPower(const FGameplayAttributeData& OldValue);
	UFUNCTION()
	void OnRep_Accuracy(const FGameplayAttributeData& OldValue);
	UFUNCTION()
	void OnRep_Evasion(const FGameplayAttributeData& OldValue);
};

