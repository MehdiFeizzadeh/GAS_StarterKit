// GAS starter kit by Mehdi Feizzadeh


#include "GameplayAbilitySystem/Data/AttributeInfo.h"

FAbilitySystemAttributeInfo UAttributeInfo::FindAttributeInfoForTag(const FGameplayTag& AttributeTag,
	const bool bLogNotFound) const
{
	for (const FAbilitySystemAttributeInfo& Info : AttributeInformation)
	{
		if (Info.AttributeTag.MatchesTagExact(AttributeTag))
		{
			return Info;
		}
	}
	if (bLogNotFound)
	{
		UE_LOG(LogTemp, Error, TEXT("Attribute not found in AttributeInfo"));
	}
	return FAbilitySystemAttributeInfo();
}
