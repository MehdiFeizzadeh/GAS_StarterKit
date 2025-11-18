// GAS starter kit by Mehdi Feizzadeh

#pragma once
	
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
/**
 * 
 */
struct FTags_Master
{
	static FTags_Master& Get() {return GameplayTags;}
	static void InitializeNativeGameplayTags();
	
private:
	static FTags_Master GameplayTags;
	
public:
	
	/****ATTRIBUTE TAGS START****/
	
	// Vital Tags
	FGameplayTag Attributes_Vital_Health;			// Health
	FGameplayTag Attributes_Vital_MaxHealth;		// Max Health

	//Offensive Tags
	FGameplayTag Attributes_Offense_PhysicalAttack;   // Physical Attack
	FGameplayTag Attributes_Offense_MagicalAttack;    // Magical Attack
	FGameplayTag Attributes_Offense_EnergyAttack;     // Energy Attack
	FGameplayTag Attributes_Offense_TrueDamage;       // True Damage
	FGameplayTag Attributes_Offense_CriticalChance;   // Critical Chance
	FGameplayTag Attributes_Offense_CriticalDamage;   // Critical Damage
	FGameplayTag Attributes_Offense_AttackSpeed;      // Attack Speed
	FGameplayTag Attributes_Offense_SkillPower;       // Skill Power

	// Penetration / Ignore Attributes
	FGameplayTag Attributes_Penetration_ArmorPenetration;   // Armor Penetration
	FGameplayTag Attributes_Penetration_MagicPenetration;   // Magic Penetration
	FGameplayTag Attributes_Penetration_ShieldBreak;        // Shield Break
	FGameplayTag Attributes_Penetration_IgnoreDefense;      // Ignore Defense
	FGameplayTag Attributes_Penetration_ResistanceShred;    // Resistance Shred

	//Resource Attributes
	FGameplayTag Attributes_Resource_Energy;       // Energy
	FGameplayTag Attributes_Resource_Mana;         // Mana
	FGameplayTag Attributes_Resource_Rage;         // Rage/Fury
	FGameplayTag Attributes_Resource_Focus;        // Focus
	FGameplayTag Attributes_Resource_Stamina;      // Stamina

	// Damage Type Attributes
	FGameplayTag Attributes_Damage_Fire;           // Fire Damage
	FGameplayTag Attributes_Damage_Ice;            // Ice Damage
	FGameplayTag Attributes_Damage_Lightning;      // Lightning Damage
	FGameplayTag Attributes_Damage_Poison;         // Poison Damage
	FGameplayTag Attributes_Damage_Dark;         // Shadow/Dark Damage
	FGameplayTag Attributes_Damage_Holy;           // Holy Damage

	//Utility Combat Attributes
	FGameplayTag Attributes_Utility_Accuracy;      // Accuracy
	FGameplayTag Attributes_Utility_Evasion;       // Evasion
	FGameplayTag Attributes_Utility_LifeSteal;     // Lifesteal
	FGameplayTag Attributes_Utility_Reflection;    // Damage Reflection
	FGameplayTag Attributes_Utility_Overpenetration; // Overpenetration
	FGameplayTag Attributes_Utility_ComboMultiplier; // Combo Multiplier

	//Advanced / Experimental Attributes
	FGameplayTag Attributes_Advanced_ArmorIgnoreThreshold; // Armor Ignore Threshold
	FGameplayTag Attributes_Advanced_Pierce;               // Pierce
	FGameplayTag Attributes_Advanced_TrueStrike;           // True Strike
	FGameplayTag Attributes_Advanced_Execution;            // Execution
	FGameplayTag Attributes_Advanced_BurstPotential;       // Burst Potential
	FGameplayTag Attributes_Advanced_DamageOverTimePower;  // Damage Over Time Power

	/****ATTRIBUTE TAGS END****/
};
