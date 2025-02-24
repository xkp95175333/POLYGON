#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Item_Optic_CollimatorSight_03

#include "Basic.hpp"

#include "BP_Item_Optic_CollimatorSight_03_classes.hpp"
#include "BP_Item_Optic_CollimatorSight_03_parameters.hpp"


namespace SDK
{

// Function BP_Item_Optic_CollimatorSight_03.BP_Item_Optic_CollimatorSight_03_C.ExecuteUbergraph_BP_Item_Optic_CollimatorSight_03
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Item_Optic_CollimatorSight_03_C::ExecuteUbergraph_BP_Item_Optic_CollimatorSight_03(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Item_Optic_CollimatorSight_03_C", "ExecuteUbergraph_BP_Item_Optic_CollimatorSight_03");

	Params::BP_Item_Optic_CollimatorSight_03_C_ExecuteUbergraph_BP_Item_Optic_CollimatorSight_03 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Item_Optic_CollimatorSight_03.BP_Item_Optic_CollimatorSight_03_C.SetCorrectiveFovMaterial
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    UseFovMaterial                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Item_Optic_CollimatorSight_03_C::SetCorrectiveFovMaterial(bool UseFovMaterial)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Item_Optic_CollimatorSight_03_C", "SetCorrectiveFovMaterial");

	Params::BP_Item_Optic_CollimatorSight_03_C_SetCorrectiveFovMaterial Parms{};

	Parms.UseFovMaterial = UseFovMaterial;

	UObject::ProcessEvent(Func, &Parms);
}

}

