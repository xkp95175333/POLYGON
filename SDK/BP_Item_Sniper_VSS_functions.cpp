#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Item_Sniper_VSS

#include "Basic.hpp"

#include "BP_Item_Sniper_VSS_classes.hpp"
#include "BP_Item_Sniper_VSS_parameters.hpp"


namespace SDK
{

// Function BP_Item_Sniper_VSS.BP_Item_Sniper_VSS_C.ExecuteUbergraph_BP_Item_Sniper_VSS
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Item_Sniper_VSS_C::ExecuteUbergraph_BP_Item_Sniper_VSS(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Item_Sniper_VSS_C", "ExecuteUbergraph_BP_Item_Sniper_VSS");

	Params::BP_Item_Sniper_VSS_C_ExecuteUbergraph_BP_Item_Sniper_VSS Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Item_Sniper_VSS.BP_Item_Sniper_VSS_C.OnSetGunModules_Event
// (BlueprintCallable, BlueprintEvent)

void ABP_Item_Sniper_VSS_C::OnSetGunModules_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Item_Sniper_VSS_C", "OnSetGunModules_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Item_Sniper_VSS.BP_Item_Sniper_VSS_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Item_Sniper_VSS_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Item_Sniper_VSS_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Item_Sniper_VSS.BP_Item_Sniper_VSS_C.SetSight
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Item_Sniper_VSS_C::SetSight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Item_Sniper_VSS_C", "SetSight");

	UObject::ProcessEvent(Func, nullptr);
}

}

