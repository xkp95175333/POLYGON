#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Game_SpawnScreen

#include "Basic.hpp"

#include "UI_Game_SpawnScreen_classes.hpp"
#include "UI_Game_SpawnScreen_parameters.hpp"


namespace SDK
{

// Function UI_Game_SpawnScreen.UI_Game_SpawnScreen_C.ActivateDeploy
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_Game_SpawnScreen_C::ActivateDeploy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_SpawnScreen_C", "ActivateDeploy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Game_SpawnScreen.UI_Game_SpawnScreen_C.AddPlayerIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PG_Game_Character_C*          PlayerCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    IsSquadMember                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Game_SpawnScreen_C::AddPlayerIcon(class ABP_PG_Game_Character_C* PlayerCharacter, bool IsSquadMember)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_SpawnScreen_C", "AddPlayerIcon");

	Params::UI_Game_SpawnScreen_C_AddPlayerIcon Parms{};

	Parms.PlayerCharacter = PlayerCharacter;
	Parms.IsSquadMember = IsSquadMember;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Game_SpawnScreen.UI_Game_SpawnScreen_C.BndEvt__Button_Deploy_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Game_SpawnScreen_C::BndEvt__Button_Deploy_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_SpawnScreen_C", "BndEvt__Button_Deploy_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Game_SpawnScreen.UI_Game_SpawnScreen_C.ChooseBestSpawnTarget
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Game_SpawnScreen_C::ChooseBestSpawnTarget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_SpawnScreen_C", "ChooseBestSpawnTarget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Game_SpawnScreen.UI_Game_SpawnScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Game_SpawnScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_SpawnScreen_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Game_SpawnScreen.UI_Game_SpawnScreen_C.ConvertWorldPositionToMap
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FVector2D                        Position                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Game_SpawnScreen_C::ConvertWorldPositionToMap(class AActor* Actor, struct FVector2D* Position)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_SpawnScreen_C", "ConvertWorldPositionToMap");

	Params::UI_Game_SpawnScreen_C_ConvertWorldPositionToMap Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

	if (Position != nullptr)
		*Position = std::move(Parms.Position);
}


// Function UI_Game_SpawnScreen.UI_Game_SpawnScreen_C.Create Main Markers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_Game_SpawnScreen_C::Create_Main_Markers()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_SpawnScreen_C", "Create Main Markers");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Game_SpawnScreen.UI_Game_SpawnScreen_C.Deploy
// (BlueprintCallable, BlueprintEvent)

void UUI_Game_SpawnScreen_C::Deploy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_SpawnScreen_C", "Deploy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Game_SpawnScreen.UI_Game_SpawnScreen_C.ExecuteUbergraph_UI_Game_SpawnScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Game_SpawnScreen_C::ExecuteUbergraph_UI_Game_SpawnScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_SpawnScreen_C", "ExecuteUbergraph_UI_Game_SpawnScreen");

	Params::UI_Game_SpawnScreen_C_ExecuteUbergraph_UI_Game_SpawnScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Game_SpawnScreen.UI_Game_SpawnScreen_C.GateTimeToSpawn
// (BlueprintCallable, BlueprintEvent)

void UUI_Game_SpawnScreen_C::GateTimeToSpawn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_SpawnScreen_C", "GateTimeToSpawn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Game_SpawnScreen.UI_Game_SpawnScreen_C.OnChangeTotalScore_Event
// (BlueprintCallable, BlueprintEvent)

void UUI_Game_SpawnScreen_C::OnChangeTotalScore_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_SpawnScreen_C", "OnChangeTotalScore_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Game_SpawnScreen.UI_Game_SpawnScreen_C.OnDeployIsAvailable_Event
// (BlueprintCallable, BlueprintEvent)

void UUI_Game_SpawnScreen_C::OnDeployIsAvailable_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_SpawnScreen_C", "OnDeployIsAvailable_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Game_SpawnScreen.UI_Game_SpawnScreen_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UUI_Game_SpawnScreen_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_SpawnScreen_C", "OnKeyDown");

	Params::UI_Game_SpawnScreen_C_OnKeyDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_Game_SpawnScreen.UI_Game_SpawnScreen_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UUI_Game_SpawnScreen_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_SpawnScreen_C", "OnKeyUp");

	Params::UI_Game_SpawnScreen_C_OnKeyUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_Game_SpawnScreen.UI_Game_SpawnScreen_C.OnSetTeam_Event
// (BlueprintCallable, BlueprintEvent)

void UUI_Game_SpawnScreen_C::OnSetTeam_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_SpawnScreen_C", "OnSetTeam_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Game_SpawnScreen.UI_Game_SpawnScreen_C.OnSpawnPermission_Event
// (BlueprintCallable, BlueprintEvent)

void UUI_Game_SpawnScreen_C::OnSpawnPermission_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_SpawnScreen_C", "OnSpawnPermission_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Game_SpawnScreen.UI_Game_SpawnScreen_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Game_SpawnScreen_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_SpawnScreen_C", "PreConstruct");

	Params::UI_Game_SpawnScreen_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Game_SpawnScreen.UI_Game_SpawnScreen_C.SetMapInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_Game_SpawnScreen_C::SetMapInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_SpawnScreen_C", "SetMapInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Game_SpawnScreen.UI_Game_SpawnScreen_C.SetNewSpawnTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBI_SpawnTarget_C>SpawnTarget                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Game_SpawnScreen_C::SetNewSpawnTarget(TScriptInterface<class IBI_SpawnTarget_C> SpawnTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_SpawnScreen_C", "SetNewSpawnTarget");

	Params::UI_Game_SpawnScreen_C_SetNewSpawnTarget Parms{};

	Parms.SpawnTarget = SpawnTarget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Game_SpawnScreen.UI_Game_SpawnScreen_C.StartTimeToSpawn
// (BlueprintCallable, BlueprintEvent)

void UUI_Game_SpawnScreen_C::StartTimeToSpawn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_SpawnScreen_C", "StartTimeToSpawn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Game_SpawnScreen.UI_Game_SpawnScreen_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Game_SpawnScreen_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_SpawnScreen_C", "Tick");

	Params::UI_Game_SpawnScreen_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

