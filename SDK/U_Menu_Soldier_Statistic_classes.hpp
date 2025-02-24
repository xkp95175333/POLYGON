#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: U_Menu_Soldier_Statistic

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "POLYGON_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass U_Menu_Soldier_Statistic.U_Menu_Soldier_Statistic_C
// 0x0048 (0x02C8 - 0x0280)
class UU_Menu_Soldier_Statistic_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_VipStatus;                                  // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Rank;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_Progress;                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_CurrentProgress;                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Level;                                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_PlayerName;                              // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_ProgressToNextLevel;                     // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_RegistrationDate;                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_U_Menu_Soldier_Statistic(int32 EntryPoint);
	void OnUpdatePlayerCombinedInfo_Event(const TArray<EModifiedData>& ModifiedData, const class FString& CustomString);
	void ParsePlayerCombinedInfo();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"U_Menu_Soldier_Statistic_C">();
	}
	static class UU_Menu_Soldier_Statistic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UU_Menu_Soldier_Statistic_C>();
	}
};
static_assert(alignof(UU_Menu_Soldier_Statistic_C) == 0x000008, "Wrong alignment on UU_Menu_Soldier_Statistic_C");
static_assert(sizeof(UU_Menu_Soldier_Statistic_C) == 0x0002C8, "Wrong size on UU_Menu_Soldier_Statistic_C");
static_assert(offsetof(UU_Menu_Soldier_Statistic_C, UberGraphFrame) == 0x000280, "Member 'UU_Menu_Soldier_Statistic_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UU_Menu_Soldier_Statistic_C, Button_VipStatus) == 0x000288, "Member 'UU_Menu_Soldier_Statistic_C::Button_VipStatus' has a wrong offset!");
static_assert(offsetof(UU_Menu_Soldier_Statistic_C, Image_Rank) == 0x000290, "Member 'UU_Menu_Soldier_Statistic_C::Image_Rank' has a wrong offset!");
static_assert(offsetof(UU_Menu_Soldier_Statistic_C, ProgressBar_Progress) == 0x000298, "Member 'UU_Menu_Soldier_Statistic_C::ProgressBar_Progress' has a wrong offset!");
static_assert(offsetof(UU_Menu_Soldier_Statistic_C, TextBlock_CurrentProgress) == 0x0002A0, "Member 'UU_Menu_Soldier_Statistic_C::TextBlock_CurrentProgress' has a wrong offset!");
static_assert(offsetof(UU_Menu_Soldier_Statistic_C, TextBlock_Level) == 0x0002A8, "Member 'UU_Menu_Soldier_Statistic_C::TextBlock_Level' has a wrong offset!");
static_assert(offsetof(UU_Menu_Soldier_Statistic_C, TextBlock_PlayerName) == 0x0002B0, "Member 'UU_Menu_Soldier_Statistic_C::TextBlock_PlayerName' has a wrong offset!");
static_assert(offsetof(UU_Menu_Soldier_Statistic_C, TextBlock_ProgressToNextLevel) == 0x0002B8, "Member 'UU_Menu_Soldier_Statistic_C::TextBlock_ProgressToNextLevel' has a wrong offset!");
static_assert(offsetof(UU_Menu_Soldier_Statistic_C, TextBlock_RegistrationDate) == 0x0002C0, "Member 'UU_Menu_Soldier_Statistic_C::TextBlock_RegistrationDate' has a wrong offset!");

}

