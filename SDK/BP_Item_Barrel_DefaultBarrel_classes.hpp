#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Item_Barrel_DefaultBarrel

#include "Basic.hpp"

#include "POLYGON_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Item_Barrel_DefaultBarrel.BP_Item_Barrel_DefaultBarrel_C
// 0x0000 (0x0348 - 0x0348)
class ABP_Item_Barrel_DefaultBarrel_C final : public AItem_Module_Barrel
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Item_Barrel_DefaultBarrel_C">();
	}
	static class ABP_Item_Barrel_DefaultBarrel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Item_Barrel_DefaultBarrel_C>();
	}
};
static_assert(alignof(ABP_Item_Barrel_DefaultBarrel_C) == 0x000008, "Wrong alignment on ABP_Item_Barrel_DefaultBarrel_C");
static_assert(sizeof(ABP_Item_Barrel_DefaultBarrel_C) == 0x000348, "Wrong size on ABP_Item_Barrel_DefaultBarrel_C");

}

