#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Scoreboard_Player

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Scoreboard_Player.UI_Scoreboard_Player_C
// 0x0078 (0x02F8 - 0x0280)
class UUI_Scoreboard_Player_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Border_Illumination;                               // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_MyPlayer;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_IsPatron;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_LevelIcon;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_LevelNumber;                             // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_PlayerDeath;                             // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_PlayerKills;                             // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_PlayerName;                              // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_PlayerNumber;                            // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_PlayerPing;                              // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_PlayerScore;                             // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class APG_PlayerState_Game*                   Player;                                            // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         PlayerNumber;                                      // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_3BA7[0x4];                                     // 0x02EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_Scoreboard_C*                       ParentWidget;                                      // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_UI_Scoreboard_Player(int32 EntryPoint);
	void OnChangeNumberDeaths_Event();
	void OnChangeNumberKills_Event();
	void OnLoaded_35F61F374CADE7A5EBBD56B37A053F44(class UObject* Loaded);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnPlayerNameChanged_Event();
	void OnTotalProgress_Event();
	void SetKillsOfPlayer();
	void SetPlayerDeaths();
	void SetPlayerGameScore();
	void SetPlayerLevel();
	void SetPlayerName();
	void SetPlayerNumber(int32 NewNumber);
	void SortPlayers(class UGridPanel* GridTeam);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Scoreboard_Player_C">();
	}
	static class UUI_Scoreboard_Player_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Scoreboard_Player_C>();
	}
};
static_assert(alignof(UUI_Scoreboard_Player_C) == 0x000008, "Wrong alignment on UUI_Scoreboard_Player_C");
static_assert(sizeof(UUI_Scoreboard_Player_C) == 0x0002F8, "Wrong size on UUI_Scoreboard_Player_C");
static_assert(offsetof(UUI_Scoreboard_Player_C, UberGraphFrame) == 0x000280, "Member 'UUI_Scoreboard_Player_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Scoreboard_Player_C, Border_Illumination) == 0x000288, "Member 'UUI_Scoreboard_Player_C::Border_Illumination' has a wrong offset!");
static_assert(offsetof(UUI_Scoreboard_Player_C, Border_MyPlayer) == 0x000290, "Member 'UUI_Scoreboard_Player_C::Border_MyPlayer' has a wrong offset!");
static_assert(offsetof(UUI_Scoreboard_Player_C, Image_IsPatron) == 0x000298, "Member 'UUI_Scoreboard_Player_C::Image_IsPatron' has a wrong offset!");
static_assert(offsetof(UUI_Scoreboard_Player_C, Image_LevelIcon) == 0x0002A0, "Member 'UUI_Scoreboard_Player_C::Image_LevelIcon' has a wrong offset!");
static_assert(offsetof(UUI_Scoreboard_Player_C, TextBlock_LevelNumber) == 0x0002A8, "Member 'UUI_Scoreboard_Player_C::TextBlock_LevelNumber' has a wrong offset!");
static_assert(offsetof(UUI_Scoreboard_Player_C, TextBlock_PlayerDeath) == 0x0002B0, "Member 'UUI_Scoreboard_Player_C::TextBlock_PlayerDeath' has a wrong offset!");
static_assert(offsetof(UUI_Scoreboard_Player_C, TextBlock_PlayerKills) == 0x0002B8, "Member 'UUI_Scoreboard_Player_C::TextBlock_PlayerKills' has a wrong offset!");
static_assert(offsetof(UUI_Scoreboard_Player_C, TextBlock_PlayerName) == 0x0002C0, "Member 'UUI_Scoreboard_Player_C::TextBlock_PlayerName' has a wrong offset!");
static_assert(offsetof(UUI_Scoreboard_Player_C, TextBlock_PlayerNumber) == 0x0002C8, "Member 'UUI_Scoreboard_Player_C::TextBlock_PlayerNumber' has a wrong offset!");
static_assert(offsetof(UUI_Scoreboard_Player_C, TextBlock_PlayerPing) == 0x0002D0, "Member 'UUI_Scoreboard_Player_C::TextBlock_PlayerPing' has a wrong offset!");
static_assert(offsetof(UUI_Scoreboard_Player_C, TextBlock_PlayerScore) == 0x0002D8, "Member 'UUI_Scoreboard_Player_C::TextBlock_PlayerScore' has a wrong offset!");
static_assert(offsetof(UUI_Scoreboard_Player_C, Player) == 0x0002E0, "Member 'UUI_Scoreboard_Player_C::Player' has a wrong offset!");
static_assert(offsetof(UUI_Scoreboard_Player_C, PlayerNumber) == 0x0002E8, "Member 'UUI_Scoreboard_Player_C::PlayerNumber' has a wrong offset!");
static_assert(offsetof(UUI_Scoreboard_Player_C, ParentWidget) == 0x0002F0, "Member 'UUI_Scoreboard_Player_C::ParentWidget' has a wrong offset!");

}

