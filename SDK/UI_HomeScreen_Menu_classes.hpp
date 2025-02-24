#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_HomeScreen_Menu

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_HomeScreen_Menu.UI_HomeScreen_Menu_C
// 0x0020 (0x02A0 - 0x0280)
class UUI_HomeScreen_Menu_C final : public UUserWidget
{
public:
	class UUI_HomeScreen_Menu_BattlePass_C*       UI_HomeScreen_Menu_BattlePass;                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_HomeScreen_Menu_News_C*             UI_HomeScreen_Menu_News;                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_HomeScreen_Menu_Offers_C*           UI_HomeScreen_Menu_Offers;                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_HomeScreen_Menu_Vip_C*              UI_HomeScreen_Menu_Vip;                            // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_HomeScreen_Menu_C">();
	}
	static class UUI_HomeScreen_Menu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_HomeScreen_Menu_C>();
	}
};
static_assert(alignof(UUI_HomeScreen_Menu_C) == 0x000008, "Wrong alignment on UUI_HomeScreen_Menu_C");
static_assert(sizeof(UUI_HomeScreen_Menu_C) == 0x0002A0, "Wrong size on UUI_HomeScreen_Menu_C");
static_assert(offsetof(UUI_HomeScreen_Menu_C, UI_HomeScreen_Menu_BattlePass) == 0x000280, "Member 'UUI_HomeScreen_Menu_C::UI_HomeScreen_Menu_BattlePass' has a wrong offset!");
static_assert(offsetof(UUI_HomeScreen_Menu_C, UI_HomeScreen_Menu_News) == 0x000288, "Member 'UUI_HomeScreen_Menu_C::UI_HomeScreen_Menu_News' has a wrong offset!");
static_assert(offsetof(UUI_HomeScreen_Menu_C, UI_HomeScreen_Menu_Offers) == 0x000290, "Member 'UUI_HomeScreen_Menu_C::UI_HomeScreen_Menu_Offers' has a wrong offset!");
static_assert(offsetof(UUI_HomeScreen_Menu_C, UI_HomeScreen_Menu_Vip) == 0x000298, "Member 'UUI_HomeScreen_Menu_C::UI_HomeScreen_Menu_Vip' has a wrong offset!");

}

