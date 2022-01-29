#include "HostSessionWidget.h"
#include "Kismet/GameplayStatics.h"
#include "GCGameInstance.h"

void UHostSessionWidget::CreateSession()
{
	UGameInstance* GameInstance = UGameplayStatics::GetGameInstance(GetWorld());
	check(GameInstance->IsA<UGCGameInstance>());
	UGCGameInstance* GCGameInstance = StaticCast<UGCGameInstance*>(GetGameInstance());

	GCGameInstance->LaunchLobby(4, ServerName, bIsLAN);
}
