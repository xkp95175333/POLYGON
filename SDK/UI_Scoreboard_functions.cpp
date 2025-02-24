#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Scoreboard

#include "Basic.hpp"

#include "UI_Scoreboard_classes.hpp"
#include "UI_Scoreboard_parameters.hpp"


namespace SDK
{

// Function UI_Scoreboard.UI_Scoreboard_C.AddPlayersToTab
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ETeam                                   Team                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Scoreboard_C::AddPlayersToTab(ETeam Team)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Scoreboard_C", "AddPlayersToTab");

	Params::UI_Scoreboard_C_AddPlayersToTab Parms{};

	Parms.Team = Team;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Scoreboard.UI_Scoreboard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Scoreboard_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Scoreboard_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Scoreboard.UI_Scoreboard_C.ExecuteUbergraph_UI_Scoreboard
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Scoreboard_C::ExecuteUbergraph_UI_Scoreboard(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Scoreboard_C", "ExecuteUbergraph_UI_Scoreboard");

	Params::UI_Scoreboard_C_ExecuteUbergraph_UI_Scoreboard Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Scoreboard.UI_Scoreboard_C.OnChangeTotalScore_Event
// (BlueprintCallable, BlueprintEvent)

void UUI_Scoreboard_C::OnChangeTotalScore_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Scoreboard_C", "OnChangeTotalScore_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Scoreboard.UI_Scoreboard_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UUI_Scoreboard_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Scoreboard_C", "OnKeyUp");

	Params::UI_Scoreboard_C_OnKeyUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_Scoreboard.UI_Scoreboard_C.OnSetTeam_Event
// (BlueprintCallable, BlueprintEvent)

void UUI_Scoreboard_C::OnSetTeam_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Scoreboard_C", "OnSetTeam_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Scoreboard.UI_Scoreboard_C.OnVisibilityChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility                        InVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Scoreboard_C::OnVisibilityChanged_Event(ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Scoreboard_C", "OnVisibilityChanged_Event");

	Params::UI_Scoreboard_C_OnVisibilityChanged_Event Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Scoreboard.UI_Scoreboard_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Scoreboard_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Scoreboard_C", "PreConstruct");

	Params::UI_Scoreboard_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Scoreboard.UI_Scoreboard_C.SortPlayers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Scoreboard_Player_C*          Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UGridPanel*                       Tab                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Scoreboard_C::SortPlayers(class UUI_Scoreboard_Player_C* Player, class UGridPanel* Tab)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Scoreboard_C", "SortPlayers");

	Params::UI_Scoreboard_C_SortPlayers Parms{};

	Parms.Player = Player;
	Parms.Tab = Tab;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Scoreboard.UI_Scoreboard_C.StartUpdatePlayersTab
// (BlueprintCallable, BlueprintEvent)

void UUI_Scoreboard_C::StartUpdatePlayersTab()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Scoreboard_C", "StartUpdatePlayersTab");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Scoreboard.UI_Scoreboard_C.UpdatePlayeysTabEvent
// (BlueprintCallable, BlueprintEvent)

void UUI_Scoreboard_C::UpdatePlayeysTabEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Scoreboard_C", "UpdatePlayeysTabEvent");

	UObject::ProcessEvent(Func, nullptr);
}

}

