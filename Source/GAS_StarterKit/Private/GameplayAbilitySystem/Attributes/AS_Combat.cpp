// Fill out your copyright notice in the Description page of Project Settings.


#include "GameplayAbilitySystem/Attributes/AS_Combat.h"

#include "Net/UnrealNetwork.h"

void UAS_Combat::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UAS_Combat, Health);
	DOREPLIFETIME(UAS_Combat, MaxHealth);
	DOREPLIFETIME(UAS_Combat, PhysicalAttack);
	DOREPLIFETIME(UAS_Combat,MagicalAttack);
	DOREPLIFETIME(UAS_Combat, EnergyAttack);
	DOREPLIFETIME(UAS_Combat, AttackSpeed);
	DOREPLIFETIME(UAS_Combat, SkillPower);
	DOREPLIFETIME(UAS_Combat, Accuracy);
	DOREPLIFETIME(UAS_Combat, Evasion);
	
}

void UAS_Combat::OnRep_Health(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_Combat, Health, OldValue);
}

void UAS_Combat::OnRep_MaxHealth(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_Combat, MaxHealth, OldValue);
}

void UAS_Combat::OnRep_PhysicalAttack(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_Combat, PhysicalAttack, OldValue);
}

void UAS_Combat::OnRep_MagicalAttack(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_Combat, MagicalAttack, OldValue);
}

void UAS_Combat::OnRep_EnergyAttack(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_Combat, EnergyAttack, OldValue);
}

void UAS_Combat::OnRep_AttackSpeed(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_Combat, AttackSpeed, OldValue);
}

void UAS_Combat::OnRep_SkillPower(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_Combat, SkillPower, OldValue);
}
void UAS_Combat::OnRep_Accuracy(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_Combat, Accuracy, OldValue);
}
void UAS_Combat::OnRep_Evasion(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_Combat, Evasion, OldValue);
}
