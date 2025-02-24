#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Game_NotifyPossibilityUnlockModule

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Game_NotifyPossibilityUnlockModule.UI_Game_NotifyPossibilityUnlockModule_C
// 0x0030 (0x02B0 - 0x0280)
class UUI_Game_NotifyPossibilityUnlockModule_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Display;                                           // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_ModuleName;                              // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_WeaponName;                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 ModuleName;                                        // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_UI_Game_NotifyPossibilityUnlockModule(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Game_NotifyPossibilityUnlockModule_C">();
	}
	static class UUI_Game_NotifyPossibilityUnlockModule_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Game_NotifyPossibilityUnlockModule_C>();
	}
};
static_assert(alignof(UUI_Game_NotifyPossibilityUnlockModule_C) == 0x000008, "Wrong alignment on UUI_Game_NotifyPossibilityUnlockModule_C");
static_assert(sizeof(UUI_Game_NotifyPossibilityUnlockModule_C) == 0x0002B0, "Wrong size on UUI_Game_NotifyPossibilityUnlockModule_C");
static_assert(offsetof(UUI_Game_NotifyPossibilityUnlockModule_C, UberGraphFrame) == 0x000280, "Member 'UUI_Game_NotifyPossibilityUnlockModule_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Game_NotifyPossibilityUnlockModule_C, Display) == 0x000288, "Member 'UUI_Game_NotifyPossibilityUnlockModule_C::Display' has a wrong offset!");
static_assert(offsetof(UUI_Game_NotifyPossibilityUnlockModule_C, TextBlock_ModuleName) == 0x000290, "Member 'UUI_Game_NotifyPossibilityUnlockModule_C::TextBlock_ModuleName' has a wrong offset!");
static_assert(offsetof(UUI_Game_NotifyPossibilityUnlockModule_C, TextBlock_WeaponName) == 0x000298, "Member 'UUI_Game_NotifyPossibilityUnlockModule_C::TextBlock_WeaponName' has a wrong offset!");
static_assert(offsetof(UUI_Game_NotifyPossibilityUnlockModule_C, ModuleName) == 0x0002A0, "Member 'UUI_Game_NotifyPossibilityUnlockModule_C::ModuleName' has a wrong offset!");

}

