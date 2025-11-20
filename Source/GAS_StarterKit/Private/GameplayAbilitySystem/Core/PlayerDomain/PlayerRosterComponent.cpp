// GAS starter kit by Mehdi Feizzadeh


#include "GameplayAbilitySystem/Core/PlayerDomain/PlayerRosterComponent.h"

// Sets default values for this component's properties
UPlayerRosterComponent::UPlayerRosterComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

const FPlayerCharacterDataInfo* UPlayerRosterComponent::GetCharacter(FName CharacterID) const
{
	for (const FPlayerCharacterDataInfo& Data : Roster)
	{
		if (Data.CharacterID == CharacterID)
		{
			return &Data;
		}
	}
	return nullptr;
}

void UPlayerRosterComponent::AddCharacter(const FPlayerCharacterDataInfo& NewCharacter)
{
	Roster.Add(NewCharacter);
}


// Called when the game starts
void UPlayerRosterComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UPlayerRosterComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

