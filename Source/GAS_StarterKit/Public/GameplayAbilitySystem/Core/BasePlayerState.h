// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/PlayerState.h"
#include "BasePlayerState.generated.h"

/**
 * 
 */
UCLASS()
class GAS_STARTERKIT_API ABasePlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	ABasePlayerState();
	//IAbilitySystemInterface function
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	//Declare AbilitySystemComponent and AttributeSet
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly, Category="Abilities")
	TObjectPtr<class UBaseAbilitySystemComponent> AbilitySystemComponent;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Abilities")
	TObjectPtr<class UBaseAttributeSet> AttributeSet;
	
	// Accessors
	UFUNCTION(BlueprintCallable, Category="GAS")
	UBaseAttributeSet* GetBaseAttributeSet() const { return AttributeSet; }

};
