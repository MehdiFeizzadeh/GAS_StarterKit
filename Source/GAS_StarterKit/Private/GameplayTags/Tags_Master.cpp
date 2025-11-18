// GAS starter kit by Mehdi Feizzadeh


#include "GameplayTags/Tags_Master.h"
#include "GameplayTagsManager.h"

FTags_Master FTags_Master::GameplayTags;

void FTags_Master::InitializeNativeGameplayTags()
{
// Vital Tags
GameplayTags.Attributes_Vital_Health     = UGameplayTagsManager::Get().AddNativeGameplayTag(
    FName("Attributes.Vital.Health"), FString("When reduced to 0, the character dies"));
GameplayTags.Attributes_Vital_MaxHealth  = UGameplayTagsManager::Get().AddNativeGameplayTag(
    FName("Attributes.Vital.MaxHealth"), FString("Maximum health capacity of the character"));

// Offensive Tags
GameplayTags.Attributes_Offense_PhysicalAttack = UGameplayTagsManager::Get().AddNativeGameplayTag(
    FName("Attributes.Offense.PhysicalAttack"), FString("Base physical attack power for melee and weapon strikes"));
GameplayTags.Attributes_Offense_MagicalAttack  = UGameplayTagsManager::Get().AddNativeGameplayTag(
    FName("Attributes.Offense.MagicalAttack"), FString("Base magical attack power for spells and abilities"));
GameplayTags.Attributes_Offense_EnergyAttack   = UGameplayTagsManager::Get().AddNativeGameplayTag(
    FName("Attributes.Offense.EnergyAttack"), FString("Attack power derived from energy-based skills"));
GameplayTags.Attributes_Offense_TrueDamage     = UGameplayTagsManager::Get().AddNativeGameplayTag(
    FName("Attributes.Offense.TrueDamage"), FString("Damage that ignores all defenses and resistances"));
GameplayTags.Attributes_Offense_CriticalChance = UGameplayTagsManager::Get().AddNativeGameplayTag(
    FName("Attributes.Offense.CriticalChance"), FString("Chance percentage to land a critical hit"));
GameplayTags.Attributes_Offense_CriticalDamage = UGameplayTagsManager::Get().AddNativeGameplayTag(
    FName("Attributes.Offense.CriticalDamage"), FString("Multiplier applied to damage when a critical hit occurs"));
GameplayTags.Attributes_Offense_AttackSpeed    = UGameplayTagsManager::Get().AddNativeGameplayTag(
    FName("Attributes.Offense.AttackSpeed"), FString("Rate of basic attacks per second"));
GameplayTags.Attributes_Offense_SkillPower     = UGameplayTagsManager::Get().AddNativeGameplayTag(
    FName("Attributes.Offense.SkillPower"), FString("Scaling power for skills and abilities"));

// Penetration / Ignore Attributes
GameplayTags.Attributes_Penetration_ArmorPenetration = UGameplayTagsManager::Get().AddNativeGameplayTag(
    FName("Attributes.Penetration.ArmorPenetration"), FString("Amount of armor ignored when dealing damage"));
GameplayTags.Attributes_Penetration_MagicPenetration = UGameplayTagsManager::Get().AddNativeGameplayTag(
    FName("Attributes.Penetration.MagicPenetration"), FString("Amount of magic resistance ignored when dealing damage"));
GameplayTags.Attributes_Penetration_ShieldBreak      = UGameplayTagsManager::Get().AddNativeGameplayTag(
    FName("Attributes.Penetration.ShieldBreak"), FString("Effectiveness at breaking or bypassing shields"));
GameplayTags.Attributes_Penetration_IgnoreDefense    = UGameplayTagsManager::Get().AddNativeGameplayTag(
    FName("Attributes.Penetration.IgnoreDefense"), FString("Flat defense ignored when calculating damage"));
GameplayTags.Attributes_Penetration_ResistanceShred  = UGameplayTagsManager::Get().AddNativeGameplayTag(
    FName("Attributes.Penetration.ResistanceShred"), FString("Reduces target’s resistances over time"));

// Resource Attributes
GameplayTags.Attributes_Resource_Energy   = UGameplayTagsManager::Get().AddNativeGameplayTag(
    FName("Attributes.Resource.Energy"), FString("Energy resource used for special abilities"));
GameplayTags.Attributes_Resource_Mana     = UGameplayTagsManager::Get().AddNativeGameplayTag(
    FName("Attributes.Resource.Mana"), FString("Mana pool used for casting spells"));
GameplayTags.Attributes_Resource_Rage     = UGameplayTagsManager::Get().AddNativeGameplayTag(
    FName("Attributes.Resource.Rage"), FString("Rage/Fury resource that builds during combat"));
GameplayTags.Attributes_Resource_Focus    = UGameplayTagsManager::Get().AddNativeGameplayTag(
    FName("Attributes.Resource.Focus"), FString("Focus resource used for precision skills"));
GameplayTags.Attributes_Resource_Stamina  = UGameplayTagsManager::Get().AddNativeGameplayTag(
    FName("Attributes.Resource.Stamina"), FString("Stamina resource consumed by physical actions"));

// Damage Type Attributes
GameplayTags.Attributes_Damage_Fire       = UGameplayTagsManager::Get().AddNativeGameplayTag(
    FName("Attributes.Damage.Fire"), FString("Damage dealt as fire element"));
GameplayTags.Attributes_Damage_Ice        = UGameplayTagsManager::Get().AddNativeGameplayTag(
    FName("Attributes.Damage.Ice"), FString("Damage dealt as ice element"));
GameplayTags.Attributes_Damage_Lightning  = UGameplayTagsManager::Get().AddNativeGameplayTag(
    FName("Attributes.Damage.Lightning"), FString("Damage dealt as lightning element"));
GameplayTags.Attributes_Damage_Poison     = UGameplayTagsManager::Get().AddNativeGameplayTag(
    FName("Attributes.Damage.Poison"), FString("Damage dealt as poison element"));
GameplayTags.Attributes_Damage_Dark     = UGameplayTagsManager::Get().AddNativeGameplayTag(
    FName("Attributes.Damage.Dark"), FString("Damage dealt as shadow/dark element"));
GameplayTags.Attributes_Damage_Holy       = UGameplayTagsManager::Get().AddNativeGameplayTag(
    FName("Attributes.Damage.Holy"), FString("Damage dealt as holy/light element"));

// Utility Combat Attributes
GameplayTags.Attributes_Utility_Accuracy       = UGameplayTagsManager::Get().AddNativeGameplayTag(
    FName("Attributes.Utility.Accuracy"), FString("Chance to hit the target successfully"));
GameplayTags.Attributes_Utility_Evasion        = UGameplayTagsManager::Get().AddNativeGameplayTag(
    FName("Attributes.Utility.Evasion"), FString("Chance to avoid incoming attacks"));
GameplayTags.Attributes_Utility_LifeSteal      = UGameplayTagsManager::Get().AddNativeGameplayTag(
    FName("Attributes.Utility.LifeSteal"), FString("Percentage of damage converted into healing"));
GameplayTags.Attributes_Utility_Reflection     = UGameplayTagsManager::Get().AddNativeGameplayTag(
    FName("Attributes.Utility.Reflection"), FString("Percentage of damage reflected back to attacker"));
GameplayTags.Attributes_Utility_Overpenetration = UGameplayTagsManager::Get().AddNativeGameplayTag(
    FName("Attributes.Utility.Overpenetration"), FString("Excess penetration applied beyond target’s defenses"));
GameplayTags.Attributes_Utility_ComboMultiplier = UGameplayTagsManager::Get().AddNativeGameplayTag(
    FName("Attributes.Utility.ComboMultiplier"), FString("Multiplier applied when chaining attacks in combos"));

// Advanced / Experimental Attributes
GameplayTags.Attributes_Advanced_ArmorIgnoreThreshold = UGameplayTagsManager::Get().AddNativeGameplayTag(
    FName("Attributes.Advanced.ArmorIgnoreThreshold"), FString("Threshold of armor ignored before damage is reduced"));
GameplayTags.Attributes_Advanced_Pierce               = UGameplayTagsManager::Get().AddNativeGameplayTag(
    FName("Attributes.Advanced.Pierce"), FString("Ability to pierce through defenses"));
GameplayTags.Attributes_Advanced_TrueStrike           = UGameplayTagsManager::Get().AddNativeGameplayTag(
    FName("Attributes.Advanced.TrueStrike"), FString("Attack that cannot miss or be evaded"));
GameplayTags.Attributes_Advanced_Execution            = UGameplayTagsManager::Get().AddNativeGameplayTag(
    FName("Attributes.Advanced.Execution"), FString("Deals bonus damage to low-health targets"));
GameplayTags.Attributes_Advanced_BurstPotential       = UGameplayTagsManager::Get().AddNativeGameplayTag(
    FName("Attributes.Advanced.BurstPotential"), FString("Potential to deal high burst damage in a short time"));
GameplayTags.Attributes_Advanced_DamageOverTimePower  = UGameplayTagsManager::Get().AddNativeGameplayTag(
    FName("Attributes.Advanced.DamageOverTimePower"), FString("Scaling power for damage-over-time effects"));
}
