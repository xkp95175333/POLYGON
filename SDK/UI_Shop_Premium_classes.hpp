#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Shop_Premium

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Shop_Premium.UI_Shop_Premium_C
// 0x0048 (0x02C8 - 0x0280)
class UUI_Shop_Premium_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         HorizontalBox_Header;                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_C*                           UI_Button_Crowns;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_C*                           UI_Button_Offers;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_C*                           UI_Button_VIP;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MainMenu_Shop_Premium_SpecialOffers_C* UI_MainMenu_Shop_Premium_SpecialOffers;            // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Shop_Crowns_C*                      UI_Shop_Crowns;                                    // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Shop_VIP_C*                         UI_Shop_VIP;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Main;                               // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BndEvt__UI_Shop_Premium_UI_Button_Crowns_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(class UUI_Button_C* Button);
	void BndEvt__UI_Shop_Premium_UI_Button_Offers_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature(class UUI_Button_C* Button);
	void BndEvt__UI_Shop_Premium_UI_Button_VIP_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(class UUI_Button_C* Button);
	void ExecuteUbergraph_UI_Shop_Premium(int32 EntryPoint);
	void SetActivePage(int32 Param_Index, class UUI_Button_C* Button);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Shop_Premium_C">();
	}
	static class UUI_Shop_Premium_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Shop_Premium_C>();
	}
};
static_assert(alignof(UUI_Shop_Premium_C) == 0x000008, "Wrong alignment on UUI_Shop_Premium_C");
static_assert(sizeof(UUI_Shop_Premium_C) == 0x0002C8, "Wrong size on UUI_Shop_Premium_C");
static_assert(offsetof(UUI_Shop_Premium_C, UberGraphFrame) == 0x000280, "Member 'UUI_Shop_Premium_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Shop_Premium_C, HorizontalBox_Header) == 0x000288, "Member 'UUI_Shop_Premium_C::HorizontalBox_Header' has a wrong offset!");
static_assert(offsetof(UUI_Shop_Premium_C, UI_Button_Crowns) == 0x000290, "Member 'UUI_Shop_Premium_C::UI_Button_Crowns' has a wrong offset!");
static_assert(offsetof(UUI_Shop_Premium_C, UI_Button_Offers) == 0x000298, "Member 'UUI_Shop_Premium_C::UI_Button_Offers' has a wrong offset!");
static_assert(offsetof(UUI_Shop_Premium_C, UI_Button_VIP) == 0x0002A0, "Member 'UUI_Shop_Premium_C::UI_Button_VIP' has a wrong offset!");
static_assert(offsetof(UUI_Shop_Premium_C, UI_MainMenu_Shop_Premium_SpecialOffers) == 0x0002A8, "Member 'UUI_Shop_Premium_C::UI_MainMenu_Shop_Premium_SpecialOffers' has a wrong offset!");
static_assert(offsetof(UUI_Shop_Premium_C, UI_Shop_Crowns) == 0x0002B0, "Member 'UUI_Shop_Premium_C::UI_Shop_Crowns' has a wrong offset!");
static_assert(offsetof(UUI_Shop_Premium_C, UI_Shop_VIP) == 0x0002B8, "Member 'UUI_Shop_Premium_C::UI_Shop_VIP' has a wrong offset!");
static_assert(offsetof(UUI_Shop_Premium_C, WidgetSwitcher_Main) == 0x0002C0, "Member 'UUI_Shop_Premium_C::WidgetSwitcher_Main' has a wrong offset!");

}

