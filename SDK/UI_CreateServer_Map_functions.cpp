#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_CreateServer_Map

#include "Basic.hpp"

#include "UI_CreateServer_Map_classes.hpp"
#include "UI_CreateServer_Map_parameters.hpp"


namespace SDK
{

// Function UI_CreateServer_Map.UI_CreateServer_Map_C.BndEvt__UI_CreateServer_Map_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_CreateServer_Map_C::BndEvt__UI_CreateServer_Map_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CreateServer_Map_C", "BndEvt__UI_CreateServer_Map_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_CreateServer_Map.UI_CreateServer_Map_C.BndEvt__UI_CreateServer_Map_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_CreateServer_Map_C::BndEvt__UI_CreateServer_Map_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CreateServer_Map_C", "BndEvt__UI_CreateServer_Map_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_CreateServer_Map.UI_CreateServer_Map_C.BndEvt__UI_CreateServer_Map_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_CreateServer_Map_C::BndEvt__UI_CreateServer_Map_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CreateServer_Map_C", "BndEvt__UI_CreateServer_Map_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_CreateServer_Map.UI_CreateServer_Map_C.ExecuteUbergraph_UI_CreateServer_Map
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CreateServer_Map_C::ExecuteUbergraph_UI_CreateServer_Map(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CreateServer_Map_C", "ExecuteUbergraph_UI_CreateServer_Map");

	Params::UI_CreateServer_Map_C_ExecuteUbergraph_UI_CreateServer_Map Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_CreateServer_Map.UI_CreateServer_Map_C.OnLoaded_DA5993E345895BD97ADA908C3FAFD98A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_CreateServer_Map_C::OnLoaded_DA5993E345895BD97ADA908C3FAFD98A(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CreateServer_Map_C", "OnLoaded_DA5993E345895BD97ADA908C3FAFD98A");

	Params::UI_CreateServer_Map_C_OnLoaded_DA5993E345895BD97ADA908C3FAFD98A Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_CreateServer_Map.UI_CreateServer_Map_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CreateServer_Map_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CreateServer_Map_C", "PreConstruct");

	Params::UI_CreateServer_Map_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_CreateServer_Map.UI_CreateServer_Map_C.SetMapSize
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_CreateServer_Map_C::SetMapSize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CreateServer_Map_C", "SetMapSize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_CreateServer_Map.UI_CreateServer_Map_C.SetSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsSelected                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CreateServer_Map_C::SetSelected(bool Param_IsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CreateServer_Map_C", "SetSelected");

	Params::UI_CreateServer_Map_C_SetSelected Parms{};

	Parms.Param_IsSelected = Param_IsSelected;

	UObject::ProcessEvent(Func, &Parms);
}

}

