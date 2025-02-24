#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Menu_Solder_Gear_Watch_Selector

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "POLYGON_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Menu_Solder_Gear_Watch_Selector.UI_Menu_Solder_Gear_Watch_Selector_C
// 0x0080 (0x0300 - 0x0280)
class UUI_Menu_Solder_Gear_Watch_Selector_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Border_Rare;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_Back;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListView*                              ListView;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Loading;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_ToolTip;                                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Description;                             // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_ItemName;                                // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Rare;                                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_LoadingIcon_C*                      UI_LoadingIcon;                                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_Description;                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_Rare;                                  // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Rare;                               // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABP_PG_PlayerState_Menu_C*              PlayerState;                                       // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AItem_Watch_General*                    SpawnedWatch;                                      // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CacheWatchTargetPoint;                             // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AddWatch(const struct FST_ItemInfo& ItemInfo);
	void Back();
	void BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_Button_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void Destruct();
	void ExecuteUbergraph_UI_Menu_Solder_Gear_Watch_Selector(int32 EntryPoint);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void OnUpdatePlayerCombinedInfo_Event(const TArray<EModifiedData>& ModifiedData, const class FString& CustomString);
	void ParsePlayerInventory();
	void Reset();
	void SetToolTipInfo(class UClass* ItemClass);
	void SpawnWatch(class UClass* WatchClass);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Menu_Solder_Gear_Watch_Selector_C">();
	}
	static class UUI_Menu_Solder_Gear_Watch_Selector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Menu_Solder_Gear_Watch_Selector_C>();
	}
};
static_assert(alignof(UUI_Menu_Solder_Gear_Watch_Selector_C) == 0x000008, "Wrong alignment on UUI_Menu_Solder_Gear_Watch_Selector_C");
static_assert(sizeof(UUI_Menu_Solder_Gear_Watch_Selector_C) == 0x000300, "Wrong size on UUI_Menu_Solder_Gear_Watch_Selector_C");
static_assert(offsetof(UUI_Menu_Solder_Gear_Watch_Selector_C, UberGraphFrame) == 0x000280, "Member 'UUI_Menu_Solder_Gear_Watch_Selector_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Solder_Gear_Watch_Selector_C, Border_Rare) == 0x000288, "Member 'UUI_Menu_Solder_Gear_Watch_Selector_C::Border_Rare' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Solder_Gear_Watch_Selector_C, Button_Back) == 0x000290, "Member 'UUI_Menu_Solder_Gear_Watch_Selector_C::Button_Back' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Solder_Gear_Watch_Selector_C, ListView) == 0x000298, "Member 'UUI_Menu_Solder_Gear_Watch_Selector_C::ListView' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Solder_Gear_Watch_Selector_C, Overlay_Loading) == 0x0002A0, "Member 'UUI_Menu_Solder_Gear_Watch_Selector_C::Overlay_Loading' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Solder_Gear_Watch_Selector_C, SizeBox_ToolTip) == 0x0002A8, "Member 'UUI_Menu_Solder_Gear_Watch_Selector_C::SizeBox_ToolTip' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Solder_Gear_Watch_Selector_C, TextBlock_Description) == 0x0002B0, "Member 'UUI_Menu_Solder_Gear_Watch_Selector_C::TextBlock_Description' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Solder_Gear_Watch_Selector_C, TextBlock_ItemName) == 0x0002B8, "Member 'UUI_Menu_Solder_Gear_Watch_Selector_C::TextBlock_ItemName' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Solder_Gear_Watch_Selector_C, TextBlock_Rare) == 0x0002C0, "Member 'UUI_Menu_Solder_Gear_Watch_Selector_C::TextBlock_Rare' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Solder_Gear_Watch_Selector_C, UI_LoadingIcon) == 0x0002C8, "Member 'UUI_Menu_Solder_Gear_Watch_Selector_C::UI_LoadingIcon' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Solder_Gear_Watch_Selector_C, VerticalBox_Description) == 0x0002D0, "Member 'UUI_Menu_Solder_Gear_Watch_Selector_C::VerticalBox_Description' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Solder_Gear_Watch_Selector_C, VerticalBox_Rare) == 0x0002D8, "Member 'UUI_Menu_Solder_Gear_Watch_Selector_C::VerticalBox_Rare' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Solder_Gear_Watch_Selector_C, WidgetSwitcher_Rare) == 0x0002E0, "Member 'UUI_Menu_Solder_Gear_Watch_Selector_C::WidgetSwitcher_Rare' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Solder_Gear_Watch_Selector_C, PlayerState) == 0x0002E8, "Member 'UUI_Menu_Solder_Gear_Watch_Selector_C::PlayerState' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Solder_Gear_Watch_Selector_C, SpawnedWatch) == 0x0002F0, "Member 'UUI_Menu_Solder_Gear_Watch_Selector_C::SpawnedWatch' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Solder_Gear_Watch_Selector_C, CacheWatchTargetPoint) == 0x0002F8, "Member 'UUI_Menu_Solder_Gear_Watch_Selector_C::CacheWatchTargetPoint' has a wrong offset!");

}

