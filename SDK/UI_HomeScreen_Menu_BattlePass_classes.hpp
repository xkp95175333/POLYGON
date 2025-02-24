#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_HomeScreen_Menu_BattlePass

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_HomeScreen_Menu_BattlePass.UI_HomeScreen_Menu_BattlePass_C
// 0x0050 (0x02D0 - 0x0280)
class UUI_HomeScreen_Menu_BattlePass_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       BorderAnimation;                                   // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Animations;                                        // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       NewRewardsAvailable;                               // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hovered;                                           // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                Button_BattlePass;                                 // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_NewRewardsAvailable;                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_BattlePass;                            // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_BattlePassLevel;                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABP_PG_PlayerController_Menu_C*         PlayerController;                                  // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

public:
	void BndEvt__UI_HomeScreen_Button_BattlePass_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_HomeScreen_Button_BattlePass_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_HomeScreen_Button_BattlePass_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_UI_HomeScreen_Menu_BattlePass(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_HomeScreen_Menu_BattlePass_C">();
	}
	static class UUI_HomeScreen_Menu_BattlePass_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_HomeScreen_Menu_BattlePass_C>();
	}
};
static_assert(alignof(UUI_HomeScreen_Menu_BattlePass_C) == 0x000008, "Wrong alignment on UUI_HomeScreen_Menu_BattlePass_C");
static_assert(sizeof(UUI_HomeScreen_Menu_BattlePass_C) == 0x0002D0, "Wrong size on UUI_HomeScreen_Menu_BattlePass_C");
static_assert(offsetof(UUI_HomeScreen_Menu_BattlePass_C, UberGraphFrame) == 0x000280, "Member 'UUI_HomeScreen_Menu_BattlePass_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_HomeScreen_Menu_BattlePass_C, BorderAnimation) == 0x000288, "Member 'UUI_HomeScreen_Menu_BattlePass_C::BorderAnimation' has a wrong offset!");
static_assert(offsetof(UUI_HomeScreen_Menu_BattlePass_C, Animations) == 0x000290, "Member 'UUI_HomeScreen_Menu_BattlePass_C::Animations' has a wrong offset!");
static_assert(offsetof(UUI_HomeScreen_Menu_BattlePass_C, NewRewardsAvailable) == 0x000298, "Member 'UUI_HomeScreen_Menu_BattlePass_C::NewRewardsAvailable' has a wrong offset!");
static_assert(offsetof(UUI_HomeScreen_Menu_BattlePass_C, Hovered) == 0x0002A0, "Member 'UUI_HomeScreen_Menu_BattlePass_C::Hovered' has a wrong offset!");
static_assert(offsetof(UUI_HomeScreen_Menu_BattlePass_C, Button_BattlePass) == 0x0002A8, "Member 'UUI_HomeScreen_Menu_BattlePass_C::Button_BattlePass' has a wrong offset!");
static_assert(offsetof(UUI_HomeScreen_Menu_BattlePass_C, Overlay_NewRewardsAvailable) == 0x0002B0, "Member 'UUI_HomeScreen_Menu_BattlePass_C::Overlay_NewRewardsAvailable' has a wrong offset!");
static_assert(offsetof(UUI_HomeScreen_Menu_BattlePass_C, ProgressBar_BattlePass) == 0x0002B8, "Member 'UUI_HomeScreen_Menu_BattlePass_C::ProgressBar_BattlePass' has a wrong offset!");
static_assert(offsetof(UUI_HomeScreen_Menu_BattlePass_C, TextBlock_BattlePassLevel) == 0x0002C0, "Member 'UUI_HomeScreen_Menu_BattlePass_C::TextBlock_BattlePassLevel' has a wrong offset!");
static_assert(offsetof(UUI_HomeScreen_Menu_BattlePass_C, PlayerController) == 0x0002C8, "Member 'UUI_HomeScreen_Menu_BattlePass_C::PlayerController' has a wrong offset!");

}

