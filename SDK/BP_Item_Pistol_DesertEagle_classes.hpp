#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Item_Pistol_DesertEagle

#include "Basic.hpp"

#include "POLYGON_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Item_Pistol_DesertEagle.BP_Item_Pistol_DesertEagle_C
// 0x0000 (0x0780 - 0x0780)
class ABP_Item_Pistol_DesertEagle_C final : public AItem_Gun_Pistol
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Item_Pistol_DesertEagle_C">();
	}
	static class ABP_Item_Pistol_DesertEagle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Item_Pistol_DesertEagle_C>();
	}
};
static_assert(alignof(ABP_Item_Pistol_DesertEagle_C) == 0x000010, "Wrong alignment on ABP_Item_Pistol_DesertEagle_C");
static_assert(sizeof(ABP_Item_Pistol_DesertEagle_C) == 0x000780, "Wrong size on ABP_Item_Pistol_DesertEagle_C");

}

