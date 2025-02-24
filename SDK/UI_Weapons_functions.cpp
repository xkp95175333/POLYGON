#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Weapons

#include "Basic.hpp"

#include "UI_Weapons_classes.hpp"
#include "UI_Weapons_parameters.hpp"


namespace SDK
{

// Function UI_Weapons.UI_Weapons_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Weapons_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Weapons_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Weapons.UI_Weapons_C.ExecuteUbergraph_UI_Weapons
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Weapons_C::ExecuteUbergraph_UI_Weapons(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Weapons_C", "ExecuteUbergraph_UI_Weapons");

	Params::UI_Weapons_C_ExecuteUbergraph_UI_Weapons Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Weapons.UI_Weapons_C.OnLoaded_321EB0874E76A481910ADFAA8B0A3201
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Weapons_C::OnLoaded_321EB0874E76A481910ADFAA8B0A3201(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Weapons_C", "OnLoaded_321EB0874E76A481910ADFAA8B0A3201");

	Params::UI_Weapons_C_OnLoaded_321EB0874E76A481910ADFAA8B0A3201 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Weapons.UI_Weapons_C.OnLoaded_E41DF5A1487589D026FEA2ADA77B92A5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Weapons_C::OnLoaded_E41DF5A1487589D026FEA2ADA77B92A5(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Weapons_C", "OnLoaded_E41DF5A1487589D026FEA2ADA77B92A5");

	Params::UI_Weapons_C_OnLoaded_E41DF5A1487589D026FEA2ADA77B92A5 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Weapons.UI_Weapons_C.OnPossessedPawnChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            OldPawn                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            NewPawn                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Weapons_C::OnPossessedPawnChanged_Event(class APawn* OldPawn, class APawn* NewPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Weapons_C", "OnPossessedPawnChanged_Event");

	Params::UI_Weapons_C_OnPossessedPawnChanged_Event Parms{};

	Parms.OldPawn = OldPawn;
	Parms.NewPawn = NewPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Weapons.UI_Weapons_C.OnSetCurrentGun_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem_Gun_General*                OldCurrentGun                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Weapons_C::OnSetCurrentGun_Event(class AItem_Gun_General* OldCurrentGun)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Weapons_C", "OnSetCurrentGun_Event");

	Params::UI_Weapons_C_OnSetCurrentGun_Event Parms{};

	Parms.OldCurrentGun = OldCurrentGun;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Weapons.UI_Weapons_C.OnSetPlayerState_Event
// (BlueprintCallable, BlueprintEvent)

void UUI_Weapons_C::OnSetPlayerState_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Weapons_C", "OnSetPlayerState_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Weapons.UI_Weapons_C.OnSetPrimaryGun_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem_Gun_General*                OldGun                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Weapons_C::OnSetPrimaryGun_Event(class AItem_Gun_General* OldGun)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Weapons_C", "OnSetPrimaryGun_Event");

	Params::UI_Weapons_C_OnSetPrimaryGun_Event Parms{};

	Parms.OldGun = OldGun;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Weapons.UI_Weapons_C.OnSetSecondaryGun_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem_Gun_General*                OldGun                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Weapons_C::OnSetSecondaryGun_Event(class AItem_Gun_General* OldGun)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Weapons_C", "OnSetSecondaryGun_Event");

	Params::UI_Weapons_C_OnSetSecondaryGun_Event Parms{};

	Parms.OldGun = OldGun;

	UObject::ProcessEvent(Func, &Parms);
}

}

