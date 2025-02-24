#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Menu_Solder_Weapon_Gun_Selector

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "POLYGON_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Menu_Solder_Weapon_Gun_Selector.UI_Menu_Solder_Weapon_Gun_Selector_C
// 0x00B8 (0x0338 - 0x0280)
class UUI_Menu_Solder_Weapon_Gun_Selector_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_Back;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListView*                              ListView_Assault;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListView*                              ListView_LMG;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListView*                              ListView_Marksman;                                 // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListView*                              ListView_Pistol;                                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListView*                              ListView_Shotgun;                                  // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListView*                              ListView_SMG;                                      // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListView*                              ListView_Sniper;                                   // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_C*                           UI_Button_Assault;                                 // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_C*                           UI_Button_LMG;                                     // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_C*                           UI_Button_Marksman;                                // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_C*                           UI_Button_Pistol;                                  // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_C*                           UI_Button_Shotgun;                                 // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_C*                           UI_Button_SMG;                                     // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_C*                           UI_Button_Sniper;                                  // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_GunCharacteristics_C*               UI_GunCharacteristic;                              // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Menu_Solder_Weapon_Gun_Selector_EquippedGun_C* UI_Menu_Solder_Weapon_Gun_Selector_EquippedGun_Primary; // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Menu_Solder_Weapon_Gun_Selector_EquippedGun_C* UI_Menu_Solder_Weapon_Gun_Selector_EquippedGun_Secondary; // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_GunTypes;                           // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_PrimaryGun_Types;                   // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_SecondaryGun_Types;                 // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Selector;                           // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void AddGun(const struct FST_ItemInfo& GunInfo);
	void BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_Button_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_Assault_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(class UUI_Button_C* Button);
	void BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_LMG_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature(class UUI_Button_C* Button);
	void BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_Marksman_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature(class UUI_Button_C* Button);
	void BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_Pistol_K2Node_ComponentBoundEvent_7_OnClick__DelegateSignature(class UUI_Button_C* Button);
	void BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_Shotgun_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature(class UUI_Button_C* Button);
	void BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_SMG_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature(class UUI_Button_C* Button);
	void BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_Sniper_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature(class UUI_Button_C* Button);
	void ExecuteUbergraph_UI_Menu_Solder_Weapon_Gun_Selector(int32 EntryPoint);
	void GetEquippedGunByItemClass(class UClass* ItemClass, class UUI_Menu_Solder_Weapon_Gun_Selector_EquippedGun_C** Gun);
	void GetGunListByGunClass(EGunClass GunClass, class UListView** List);
	void PreConstruct(bool IsDesignTime);
	void Reset();
	void SetActiveGunClass(EGunClass GunClass, class UUI_Button_C* Button);
	void SetActiveGunSlot(EGunSlot GunSlot);
	void SetEquippedGun(const struct FST_ItemInfo& GunInfo);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Menu_Solder_Weapon_Gun_Selector_C">();
	}
	static class UUI_Menu_Solder_Weapon_Gun_Selector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Menu_Solder_Weapon_Gun_Selector_C>();
	}
};
static_assert(alignof(UUI_Menu_Solder_Weapon_Gun_Selector_C) == 0x000008, "Wrong alignment on UUI_Menu_Solder_Weapon_Gun_Selector_C");
static_assert(sizeof(UUI_Menu_Solder_Weapon_Gun_Selector_C) == 0x000338, "Wrong size on UUI_Menu_Solder_Weapon_Gun_Selector_C");
static_assert(offsetof(UUI_Menu_Solder_Weapon_Gun_Selector_C, UberGraphFrame) == 0x000280, "Member 'UUI_Menu_Solder_Weapon_Gun_Selector_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Solder_Weapon_Gun_Selector_C, Button_Back) == 0x000288, "Member 'UUI_Menu_Solder_Weapon_Gun_Selector_C::Button_Back' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Solder_Weapon_Gun_Selector_C, ListView_Assault) == 0x000290, "Member 'UUI_Menu_Solder_Weapon_Gun_Selector_C::ListView_Assault' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Solder_Weapon_Gun_Selector_C, ListView_LMG) == 0x000298, "Member 'UUI_Menu_Solder_Weapon_Gun_Selector_C::ListView_LMG' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Solder_Weapon_Gun_Selector_C, ListView_Marksman) == 0x0002A0, "Member 'UUI_Menu_Solder_Weapon_Gun_Selector_C::ListView_Marksman' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Solder_Weapon_Gun_Selector_C, ListView_Pistol) == 0x0002A8, "Member 'UUI_Menu_Solder_Weapon_Gun_Selector_C::ListView_Pistol' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Solder_Weapon_Gun_Selector_C, ListView_Shotgun) == 0x0002B0, "Member 'UUI_Menu_Solder_Weapon_Gun_Selector_C::ListView_Shotgun' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Solder_Weapon_Gun_Selector_C, ListView_SMG) == 0x0002B8, "Member 'UUI_Menu_Solder_Weapon_Gun_Selector_C::ListView_SMG' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Solder_Weapon_Gun_Selector_C, ListView_Sniper) == 0x0002C0, "Member 'UUI_Menu_Solder_Weapon_Gun_Selector_C::ListView_Sniper' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Solder_Weapon_Gun_Selector_C, UI_Button_Assault) == 0x0002C8, "Member 'UUI_Menu_Solder_Weapon_Gun_Selector_C::UI_Button_Assault' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Solder_Weapon_Gun_Selector_C, UI_Button_LMG) == 0x0002D0, "Member 'UUI_Menu_Solder_Weapon_Gun_Selector_C::UI_Button_LMG' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Solder_Weapon_Gun_Selector_C, UI_Button_Marksman) == 0x0002D8, "Member 'UUI_Menu_Solder_Weapon_Gun_Selector_C::UI_Button_Marksman' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Solder_Weapon_Gun_Selector_C, UI_Button_Pistol) == 0x0002E0, "Member 'UUI_Menu_Solder_Weapon_Gun_Selector_C::UI_Button_Pistol' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Solder_Weapon_Gun_Selector_C, UI_Button_Shotgun) == 0x0002E8, "Member 'UUI_Menu_Solder_Weapon_Gun_Selector_C::UI_Button_Shotgun' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Solder_Weapon_Gun_Selector_C, UI_Button_SMG) == 0x0002F0, "Member 'UUI_Menu_Solder_Weapon_Gun_Selector_C::UI_Button_SMG' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Solder_Weapon_Gun_Selector_C, UI_Button_Sniper) == 0x0002F8, "Member 'UUI_Menu_Solder_Weapon_Gun_Selector_C::UI_Button_Sniper' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Solder_Weapon_Gun_Selector_C, UI_GunCharacteristic) == 0x000300, "Member 'UUI_Menu_Solder_Weapon_Gun_Selector_C::UI_GunCharacteristic' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Solder_Weapon_Gun_Selector_C, UI_Menu_Solder_Weapon_Gun_Selector_EquippedGun_Primary) == 0x000308, "Member 'UUI_Menu_Solder_Weapon_Gun_Selector_C::UI_Menu_Solder_Weapon_Gun_Selector_EquippedGun_Primary' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Solder_Weapon_Gun_Selector_C, UI_Menu_Solder_Weapon_Gun_Selector_EquippedGun_Secondary) == 0x000310, "Member 'UUI_Menu_Solder_Weapon_Gun_Selector_C::UI_Menu_Solder_Weapon_Gun_Selector_EquippedGun_Secondary' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Solder_Weapon_Gun_Selector_C, WidgetSwitcher_GunTypes) == 0x000318, "Member 'UUI_Menu_Solder_Weapon_Gun_Selector_C::WidgetSwitcher_GunTypes' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Solder_Weapon_Gun_Selector_C, WidgetSwitcher_PrimaryGun_Types) == 0x000320, "Member 'UUI_Menu_Solder_Weapon_Gun_Selector_C::WidgetSwitcher_PrimaryGun_Types' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Solder_Weapon_Gun_Selector_C, WidgetSwitcher_SecondaryGun_Types) == 0x000328, "Member 'UUI_Menu_Solder_Weapon_Gun_Selector_C::WidgetSwitcher_SecondaryGun_Types' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Solder_Weapon_Gun_Selector_C, WidgetSwitcher_Selector) == 0x000330, "Member 'UUI_Menu_Solder_Weapon_Gun_Selector_C::WidgetSwitcher_Selector' has a wrong offset!");

}

