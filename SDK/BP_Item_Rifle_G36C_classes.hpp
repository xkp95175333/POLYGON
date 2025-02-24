#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Item_Rifle_G36C

#include "Basic.hpp"

#include "POLYGON_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Item_Rifle_G36C.BP_Item_Rifle_G36C_C
// 0x0010 (0x0790 - 0x0780)
class ABP_Item_Rifle_G36C_C final : public AItem_Gun_Rifle
{
public:
	class UStaticMeshComponent*                   Sight;                                             // 0x0780(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Item_Rifle_G36C_C">();
	}
	static class ABP_Item_Rifle_G36C_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Item_Rifle_G36C_C>();
	}
};
static_assert(alignof(ABP_Item_Rifle_G36C_C) == 0x000010, "Wrong alignment on ABP_Item_Rifle_G36C_C");
static_assert(sizeof(ABP_Item_Rifle_G36C_C) == 0x000790, "Wrong size on ABP_Item_Rifle_G36C_C");
static_assert(offsetof(ABP_Item_Rifle_G36C_C, Sight) == 0x000780, "Member 'ABP_Item_Rifle_G36C_C::Sight' has a wrong offset!");

}

