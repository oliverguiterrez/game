#pragma once

#include "CoreMinimal.h"
#include "Actors/Interactive/Pickables/PickableItem.h"
#include "PickablePowerups.generated.h"

UCLASS(Blueprintable)
class GAMECODE_API APickablePowerups : public APickableItem
{
	GENERATED_BODY()

public:
	APickablePowerups();

	virtual void Interact(AGCBaseCharacter* Character) override;
	virtual FName GetActionEventName() const override;

protected:
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* PowerupMesh;
};
