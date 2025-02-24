#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Item_Optic_HolographicSight_02

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "POLYGON_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Item_Optic_HolographicSight_02.BP_Item_Optic_HolographicSight_02_C
// 0x0008 (0x0390 - 0x0388)
class ABP_Item_Optic_HolographicSight_02_C final : public AItem_Module_Optic
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0388(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_Item_Optic_HolographicSight_02(int32 EntryPoint);
	void SetCorrectiveFovMaterial(bool UseFovMaterial);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Item_Optic_HolographicSight_02_C">();
	}
	static class ABP_Item_Optic_HolographicSight_02_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Item_Optic_HolographicSight_02_C>();
	}
};
static_assert(alignof(ABP_Item_Optic_HolographicSight_02_C) == 0x000008, "Wrong alignment on ABP_Item_Optic_HolographicSight_02_C");
static_assert(sizeof(ABP_Item_Optic_HolographicSight_02_C) == 0x000390, "Wrong size on ABP_Item_Optic_HolographicSight_02_C");
static_assert(offsetof(ABP_Item_Optic_HolographicSight_02_C, UberGraphFrame) == 0x000388, "Member 'ABP_Item_Optic_HolographicSight_02_C::UberGraphFrame' has a wrong offset!");

}

