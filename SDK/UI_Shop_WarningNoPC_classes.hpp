#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Shop_WarningNoPC

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Shop_WarningNoPC.UI_Shop_WarningNoPC_C
// 0x0048 (0x02C8 - 0x0280)
class UUI_Shop_WarningNoPC_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Border_BattlePass_Border;                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_No;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_Yes;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BattlePass_Background;                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Count;                                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         LackCurrency;                                      // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_36D6[0x4];                                     // 0x02B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnMadeChoice;                                      // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__UI_WarningNoPC_Button_No_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_WarningNoPC_Button_Yes_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_UI_Shop_WarningNoPC(int32 EntryPoint);
	void OnMadeChoice__DelegateSignature(bool Yes);
	void OnSucceed_FA7395AF4FD96A0A881A4EAA2B69E0A2();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Shop_WarningNoPC_C">();
	}
	static class UUI_Shop_WarningNoPC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Shop_WarningNoPC_C>();
	}
};
static_assert(alignof(UUI_Shop_WarningNoPC_C) == 0x000008, "Wrong alignment on UUI_Shop_WarningNoPC_C");
static_assert(sizeof(UUI_Shop_WarningNoPC_C) == 0x0002C8, "Wrong size on UUI_Shop_WarningNoPC_C");
static_assert(offsetof(UUI_Shop_WarningNoPC_C, UberGraphFrame) == 0x000280, "Member 'UUI_Shop_WarningNoPC_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Shop_WarningNoPC_C, Border_BattlePass_Border) == 0x000288, "Member 'UUI_Shop_WarningNoPC_C::Border_BattlePass_Border' has a wrong offset!");
static_assert(offsetof(UUI_Shop_WarningNoPC_C, Button_No) == 0x000290, "Member 'UUI_Shop_WarningNoPC_C::Button_No' has a wrong offset!");
static_assert(offsetof(UUI_Shop_WarningNoPC_C, Button_Yes) == 0x000298, "Member 'UUI_Shop_WarningNoPC_C::Button_Yes' has a wrong offset!");
static_assert(offsetof(UUI_Shop_WarningNoPC_C, Image_BattlePass_Background) == 0x0002A0, "Member 'UUI_Shop_WarningNoPC_C::Image_BattlePass_Background' has a wrong offset!");
static_assert(offsetof(UUI_Shop_WarningNoPC_C, TextBlock_Count) == 0x0002A8, "Member 'UUI_Shop_WarningNoPC_C::TextBlock_Count' has a wrong offset!");
static_assert(offsetof(UUI_Shop_WarningNoPC_C, LackCurrency) == 0x0002B0, "Member 'UUI_Shop_WarningNoPC_C::LackCurrency' has a wrong offset!");
static_assert(offsetof(UUI_Shop_WarningNoPC_C, OnMadeChoice) == 0x0002B8, "Member 'UUI_Shop_WarningNoPC_C::OnMadeChoice' has a wrong offset!");

}

