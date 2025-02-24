#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Game_SpawnScreen_Player

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Game_SpawnScreen_Player.UI_Game_SpawnScreen_Player_C
// 0x0020 (0x02A0 - 0x0280)
class UUI_Game_SpawnScreen_Player_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 PlayerIcon;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABP_PG_Game_Character_C*                OtherCharacter;                                    // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UUI_Game_SpawnScreen_C*                 SpawnScreen;                                       // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_UI_Game_SpawnScreen_Player(int32 EntryPoint);
	class UWidget* Get_Player_Icon_Tool_Tip_Widget();
	void OnIsAlive_Event();
	void OnIsMemberMySquad_Event();
	void SetMarkerPosition();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Game_SpawnScreen_Player_C">();
	}
	static class UUI_Game_SpawnScreen_Player_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Game_SpawnScreen_Player_C>();
	}
};
static_assert(alignof(UUI_Game_SpawnScreen_Player_C) == 0x000008, "Wrong alignment on UUI_Game_SpawnScreen_Player_C");
static_assert(sizeof(UUI_Game_SpawnScreen_Player_C) == 0x0002A0, "Wrong size on UUI_Game_SpawnScreen_Player_C");
static_assert(offsetof(UUI_Game_SpawnScreen_Player_C, UberGraphFrame) == 0x000280, "Member 'UUI_Game_SpawnScreen_Player_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Game_SpawnScreen_Player_C, PlayerIcon) == 0x000288, "Member 'UUI_Game_SpawnScreen_Player_C::PlayerIcon' has a wrong offset!");
static_assert(offsetof(UUI_Game_SpawnScreen_Player_C, OtherCharacter) == 0x000290, "Member 'UUI_Game_SpawnScreen_Player_C::OtherCharacter' has a wrong offset!");
static_assert(offsetof(UUI_Game_SpawnScreen_Player_C, SpawnScreen) == 0x000298, "Member 'UUI_Game_SpawnScreen_Player_C::SpawnScreen' has a wrong offset!");

}

