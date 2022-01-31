#pragma once

#include "CoreMinimal.h"
#include "Inventory/Items/InventoryItem.h"

namespace GCDataTableUtils
{
	FWeaponTableRow* FindWeaponData(const FName WeaponID);
	FItemTableRow* FindInventoryItemData(const FName ItemID);
};
