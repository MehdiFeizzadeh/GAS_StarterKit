// Fill out your copyright notice in the Description page of Project Settings.


#include "GameplayAbilitySystem/Core/BasePlayerState.h"
#include "GameplayAbilitySystem/Core/BaseAbilitySystemComponent.h"
#include "GameplayAbilitySystem/Core/BaseAttributeSet.h"

ABasePlayerState::ABasePlayerState()
{
	//Creating the AbilitySystemComponent and AttributeSet
	AbilitySystemComponent = CreateDefaultSubobject<UBaseAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);
	
	AttributeSet = CreateDefaultSubobject<UBaseAttributeSet>(TEXT("AttributeSet"));
	SetNetUpdateFrequency(100.f);
}

UAbilitySystemComponent* ABasePlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

