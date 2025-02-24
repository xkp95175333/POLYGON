#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PingQoS

#include "Basic.hpp"

#include "PingQoS_classes.hpp"
#include "PingQoS_parameters.hpp"


namespace SDK
{

// Function PingQoS.PingQoSSubsystem.Init
// (Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FPingQoSInfo>             SetInfo                                                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UPingQoSSubsystem::Init(const TArray<struct FPingQoSInfo>& SetInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PingQoSSubsystem", "Init");

	Params::PingQoSSubsystem_Init Parms{};

	Parms.SetInfo = std::move(SetInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PingQoS.PingQoSSubsystem.Recv
// (Final, Native, Private, HasOutParams)
// Parameters:
// TArray<struct FPingQoSInfo>             ResultInfos                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UPingQoSSubsystem::Recv(TArray<struct FPingQoSInfo>* ResultInfos)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PingQoSSubsystem", "Recv");

	Params::PingQoSSubsystem_Recv Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (ResultInfos != nullptr)
		*ResultInfos = std::move(Parms.ResultInfos);
}


// Function PingQoS.PingQoSSubsystem.Update
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPingQoSSubsystem::Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PingQoSSubsystem", "Update");

	Params::PingQoSSubsystem_Update Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

