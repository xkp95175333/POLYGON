#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Menu_Soldier_Gear

#include "Basic.hpp"

#include "UI_Menu_Soldier_Gear_classes.hpp"
#include "UI_Menu_Soldier_Gear_parameters.hpp"


namespace SDK
{

// Function UI_Menu_Soldier_Gear.UI_Menu_Soldier_Gear_C.BndEvt__UI_Menu_Soldier_Gear_UI_Menu_Solder_Gear_Watch_Slot_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Menu_Soldier_Gear_C::BndEvt__UI_Menu_Soldier_Gear_UI_Menu_Solder_Gear_Watch_Slot_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Menu_Soldier_Gear_C", "BndEvt__UI_Menu_Soldier_Gear_UI_Menu_Solder_Gear_Watch_Slot_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Menu_Soldier_Gear.UI_Menu_Soldier_Gear_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Menu_Soldier_Gear_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Menu_Soldier_Gear_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Menu_Soldier_Gear.UI_Menu_Soldier_Gear_C.ExecuteUbergraph_UI_Menu_Soldier_Gear
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Soldier_Gear_C::ExecuteUbergraph_UI_Menu_Soldier_Gear(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Menu_Soldier_Gear_C", "ExecuteUbergraph_UI_Menu_Soldier_Gear");

	Params::UI_Menu_Soldier_Gear_C_ExecuteUbergraph_UI_Menu_Soldier_Gear Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Menu_Soldier_Gear.UI_Menu_Soldier_Gear_C.GetSlotByItemClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                           ItemClass                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      Param_Slot                                             (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Soldier_Gear_C::GetSlotByItemClass(class UClass* ItemClass, class UUserWidget** Param_Slot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Menu_Soldier_Gear_C", "GetSlotByItemClass");

	Params::UI_Menu_Soldier_Gear_C_GetSlotByItemClass Parms{};

	Parms.ItemClass = ItemClass;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Slot != nullptr)
		*Param_Slot = Parms.Param_Slot;
}


// Function UI_Menu_Soldier_Gear.UI_Menu_Soldier_Gear_C.OnUpdatePlayerCombinedInfo_Event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<EModifiedData>                   ModifiedData                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                           CustomString                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUI_Menu_Soldier_Gear_C::OnUpdatePlayerCombinedInfo_Event(const TArray<EModifiedData>& ModifiedData, const class FString& CustomString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Menu_Soldier_Gear_C", "OnUpdatePlayerCombinedInfo_Event");

	Params::UI_Menu_Soldier_Gear_C_OnUpdatePlayerCombinedInfo_Event Parms{};

	Parms.ModifiedData = std::move(ModifiedData);
	Parms.CustomString = std::move(CustomString);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Menu_Soldier_Gear.UI_Menu_Soldier_Gear_C.ParsePlayerInventory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_Menu_Soldier_Gear_C::ParsePlayerInventory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Menu_Soldier_Gear_C", "ParsePlayerInventory");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Menu_Soldier_Gear.UI_Menu_Soldier_Gear_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Soldier_Gear_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Menu_Soldier_Gear_C", "PreConstruct");

	Params::UI_Menu_Soldier_Gear_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Menu_Soldier_Gear.UI_Menu_Soldier_Gear_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Menu_Soldier_Gear_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Menu_Soldier_Gear_C", "Reset");

	UObject::ProcessEvent(Func, nullptr);
}

}

