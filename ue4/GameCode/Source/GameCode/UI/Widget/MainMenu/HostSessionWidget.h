#pragma once

#include "CoreMinimal.h"
#include "UI/Widget/MainMenu/NetworkWidget.h"
#include "HostSessionWidget.generated.h"

UCLASS()
class GAMECODE_API UHostSessionWidget : public UNetworkWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Network session")
	FName ServerName;

	UFUNCTION(BlueprintCallable)
	void CreateSession();
};
