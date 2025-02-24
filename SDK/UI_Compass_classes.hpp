#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Compass

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Compass.UI_Compass_C
// 0x0010 (0x0290 - 0x0280)
class UUI_Compass_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_Compass;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_Compass(int32 EntryPoint);
	void SetCompassPosition();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Compass_C">();
	}
	static class UUI_Compass_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Compass_C>();
	}
};
static_assert(alignof(UUI_Compass_C) == 0x000008, "Wrong alignment on UUI_Compass_C");
static_assert(sizeof(UUI_Compass_C) == 0x000290, "Wrong size on UUI_Compass_C");
static_assert(offsetof(UUI_Compass_C, UberGraphFrame) == 0x000280, "Member 'UUI_Compass_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Compass_C, Image_Compass) == 0x000288, "Member 'UUI_Compass_C::Image_Compass' has a wrong offset!");

}

