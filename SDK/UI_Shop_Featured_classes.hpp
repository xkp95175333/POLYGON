#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Shop_Featured

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Shop_Featured.UI_Shop_Featured_C
// 0x00E8 (0x0368 - 0x0280)
class UUI_Shop_Featured_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Item_03_Hovered;                                   // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Item_02_Hovered;                                   // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Item_01_Hovered;                                   // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       CrownsHovered;                                     // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       VIPHovered;                                        // 0x02A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       BattlePassHovered;                                 // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Border_BattlePass_Border;                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_Crowns_Border;                              // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_VIP_Border;                                 // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_VIP_Lines_01;                               // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_VIP_Lines_02;                               // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_Base;                                       // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_BattlePass;                                 // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_Crowns;                                     // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_Jokey;                                      // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_Safari;                                     // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_VIP;                                        // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_Price;                               // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_Price_1;                             // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_Price_2;                             // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BattlePass_Background;                       // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Crowns;                                      // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Crowns_1;                                    // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Crowns_2;                                    // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Price;                                   // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Price_1;                                 // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Price_2;                                 // 0x0358(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Shop_C*                             UI_Shop;                                           // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__UI_Shop_BestOffers_Button_Base_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_Shop_BestOffers_Button_Base_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_Shop_BestOffers_Button_Base_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_Shop_BestOffers_Button_BattlePass_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_Shop_BestOffers_Button_BattlePass_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_Shop_BestOffers_Button_BattlePass_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_Shop_BestOffers_Button_Crowns_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_Shop_BestOffers_Button_Crowns_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_Shop_BestOffers_Button_Crowns_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_Shop_BestOffers_Button_Jokey_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_Shop_BestOffers_Button_Jokey_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_Shop_BestOffers_Button_Jokey_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_Shop_BestOffers_Button_Safari_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_Shop_BestOffers_Button_Safari_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_Shop_BestOffers_Button_Safari_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_Shop_BestOffers_Button_VIP_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_Shop_BestOffers_Button_VIP_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_Shop_BestOffers_Button_VIP_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_UI_Shop_Featured(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Shop_Featured_C">();
	}
	static class UUI_Shop_Featured_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Shop_Featured_C>();
	}
};
static_assert(alignof(UUI_Shop_Featured_C) == 0x000008, "Wrong alignment on UUI_Shop_Featured_C");
static_assert(sizeof(UUI_Shop_Featured_C) == 0x000368, "Wrong size on UUI_Shop_Featured_C");
static_assert(offsetof(UUI_Shop_Featured_C, UberGraphFrame) == 0x000280, "Member 'UUI_Shop_Featured_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Shop_Featured_C, Item_03_Hovered) == 0x000288, "Member 'UUI_Shop_Featured_C::Item_03_Hovered' has a wrong offset!");
static_assert(offsetof(UUI_Shop_Featured_C, Item_02_Hovered) == 0x000290, "Member 'UUI_Shop_Featured_C::Item_02_Hovered' has a wrong offset!");
static_assert(offsetof(UUI_Shop_Featured_C, Item_01_Hovered) == 0x000298, "Member 'UUI_Shop_Featured_C::Item_01_Hovered' has a wrong offset!");
static_assert(offsetof(UUI_Shop_Featured_C, CrownsHovered) == 0x0002A0, "Member 'UUI_Shop_Featured_C::CrownsHovered' has a wrong offset!");
static_assert(offsetof(UUI_Shop_Featured_C, VIPHovered) == 0x0002A8, "Member 'UUI_Shop_Featured_C::VIPHovered' has a wrong offset!");
static_assert(offsetof(UUI_Shop_Featured_C, BattlePassHovered) == 0x0002B0, "Member 'UUI_Shop_Featured_C::BattlePassHovered' has a wrong offset!");
static_assert(offsetof(UUI_Shop_Featured_C, Border_BattlePass_Border) == 0x0002B8, "Member 'UUI_Shop_Featured_C::Border_BattlePass_Border' has a wrong offset!");
static_assert(offsetof(UUI_Shop_Featured_C, Border_Crowns_Border) == 0x0002C0, "Member 'UUI_Shop_Featured_C::Border_Crowns_Border' has a wrong offset!");
static_assert(offsetof(UUI_Shop_Featured_C, Border_VIP_Border) == 0x0002C8, "Member 'UUI_Shop_Featured_C::Border_VIP_Border' has a wrong offset!");
static_assert(offsetof(UUI_Shop_Featured_C, Border_VIP_Lines_01) == 0x0002D0, "Member 'UUI_Shop_Featured_C::Border_VIP_Lines_01' has a wrong offset!");
static_assert(offsetof(UUI_Shop_Featured_C, Border_VIP_Lines_02) == 0x0002D8, "Member 'UUI_Shop_Featured_C::Border_VIP_Lines_02' has a wrong offset!");
static_assert(offsetof(UUI_Shop_Featured_C, Button_Base) == 0x0002E0, "Member 'UUI_Shop_Featured_C::Button_Base' has a wrong offset!");
static_assert(offsetof(UUI_Shop_Featured_C, Button_BattlePass) == 0x0002E8, "Member 'UUI_Shop_Featured_C::Button_BattlePass' has a wrong offset!");
static_assert(offsetof(UUI_Shop_Featured_C, Button_Crowns) == 0x0002F0, "Member 'UUI_Shop_Featured_C::Button_Crowns' has a wrong offset!");
static_assert(offsetof(UUI_Shop_Featured_C, Button_Jokey) == 0x0002F8, "Member 'UUI_Shop_Featured_C::Button_Jokey' has a wrong offset!");
static_assert(offsetof(UUI_Shop_Featured_C, Button_Safari) == 0x000300, "Member 'UUI_Shop_Featured_C::Button_Safari' has a wrong offset!");
static_assert(offsetof(UUI_Shop_Featured_C, Button_VIP) == 0x000308, "Member 'UUI_Shop_Featured_C::Button_VIP' has a wrong offset!");
static_assert(offsetof(UUI_Shop_Featured_C, HorizontalBox_Price) == 0x000310, "Member 'UUI_Shop_Featured_C::HorizontalBox_Price' has a wrong offset!");
static_assert(offsetof(UUI_Shop_Featured_C, HorizontalBox_Price_1) == 0x000318, "Member 'UUI_Shop_Featured_C::HorizontalBox_Price_1' has a wrong offset!");
static_assert(offsetof(UUI_Shop_Featured_C, HorizontalBox_Price_2) == 0x000320, "Member 'UUI_Shop_Featured_C::HorizontalBox_Price_2' has a wrong offset!");
static_assert(offsetof(UUI_Shop_Featured_C, Image_BattlePass_Background) == 0x000328, "Member 'UUI_Shop_Featured_C::Image_BattlePass_Background' has a wrong offset!");
static_assert(offsetof(UUI_Shop_Featured_C, Image_Crowns) == 0x000330, "Member 'UUI_Shop_Featured_C::Image_Crowns' has a wrong offset!");
static_assert(offsetof(UUI_Shop_Featured_C, Image_Crowns_1) == 0x000338, "Member 'UUI_Shop_Featured_C::Image_Crowns_1' has a wrong offset!");
static_assert(offsetof(UUI_Shop_Featured_C, Image_Crowns_2) == 0x000340, "Member 'UUI_Shop_Featured_C::Image_Crowns_2' has a wrong offset!");
static_assert(offsetof(UUI_Shop_Featured_C, TextBlock_Price) == 0x000348, "Member 'UUI_Shop_Featured_C::TextBlock_Price' has a wrong offset!");
static_assert(offsetof(UUI_Shop_Featured_C, TextBlock_Price_1) == 0x000350, "Member 'UUI_Shop_Featured_C::TextBlock_Price_1' has a wrong offset!");
static_assert(offsetof(UUI_Shop_Featured_C, TextBlock_Price_2) == 0x000358, "Member 'UUI_Shop_Featured_C::TextBlock_Price_2' has a wrong offset!");
static_assert(offsetof(UUI_Shop_Featured_C, UI_Shop) == 0x000360, "Member 'UUI_Shop_Featured_C::UI_Shop' has a wrong offset!");

}

