// GAS starter kit by Mehdi Feizzadeh

#pragma once

#include "CoreMinimal.h"
#include "PlayerCharacterData.h"
#include "Components/ActorComponent.h"
#include "PlayerRosterComponent.generated.h"


struct FPlayerCharacterDataInfo;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GAS_STARTERKIT_API UPlayerRosterComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPlayerRosterComponent();
	const FPlayerCharacterDataInfo* GetCharacter(FName CharacterID) const;
	void AddCharacter(const FPlayerCharacterDataInfo& NewCharacter);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
private:
	UPROPERTY()
	TArray<FPlayerCharacterDataInfo> Roster;
};
