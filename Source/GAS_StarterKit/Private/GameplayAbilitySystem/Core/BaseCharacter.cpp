// Fill out your copyright notice in the Description page of Project Settings.


#include "GameplayAbilitySystem/Core/BaseCharacter.h"
#include "AbilitySystemComponent.h"
#include "GameplayAbilitySystem/Attributes/AS_Combat.h"
#include "GameplayAbilitySystem/Core/BaseAbilitySystemComponent.h"


// Sets default values
ABaseCharacter::ABaseCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	//Creating the AbilitySystemComponent and AttributeSet
	AbilitySystemComponent = CreateDefaultSubobject<UBaseAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);
	CombatAttributeSet = CreateDefaultSubobject<UAS_Combat>(TEXT("CombatAttributeSet"));
	SetNetUpdateFrequency(100.f);
}

UAbilitySystemComponent* ABaseCharacter::GetAbilitySystemComponent() const
{
	return  AbilitySystemComponent;
}

void ABaseCharacter::InitAbilityActorInfo()
{
	AbilitySystemComponent->InitAbilityActorInfo(this,this);
}

void ABaseCharacter::ApplyGameplayEffectToSelf(const TSubclassOf<UGameplayEffect> GameplayEffect) const
{
	FGameplayEffectContextHandle EffectContext = AbilitySystemComponent->MakeEffectContext();
	FGameplayEffectSpecHandle EffectSpecHandle = AbilitySystemComponent->MakeOutgoingSpec(GameplayEffect, 1.f,EffectContext);
	AbilitySystemComponent->ApplyGameplayEffectSpecToSelf(*EffectSpecHandle.Data.Get());
}

void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	InitAbilityActorInfo();
}

void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

/*
 * Progression Stats functions 
 */
void ABaseCharacter::AddExperience(int32 Amount)
{
}

void ABaseCharacter::RankUp()
{
}

void ABaseCharacter::Evolve()
{
}



