#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SaveSubsystemInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class USaveSubsystemInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 *
 */
class GAMECODE_API ISaveSubsystemInterface
{
	GENERATED_BODY()

		// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	/**
	 * Use this method instead @AActor::BeginPlay() for logic of savable actors.
	 * It will be called always after @AActor::@BeginPlay().
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Save Subsystem")
	void OnLevelDeserialized();
	virtual void OnLevelDeserialized_Implementation() PURE_VIRTUAL(ISaveSubsystemInterface::OnLevelDeserialized_Implementation, );
};