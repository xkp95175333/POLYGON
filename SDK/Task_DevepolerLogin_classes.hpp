#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Task_DevepolerLogin

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Actions_classes.hpp"
#include "POLYGON_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Task_DevepolerLogin.Task_DevepolerLogin_C
// 0x0030 (0x00D8 - 0x00A8)
class UTask_DevepolerLogin_C final : public UAction
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_             OnSuccess;                                         // 0x00B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnFailure;                                         // 0x00C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UClientBackendComponent*                Client_Backend_Component;                          // 0x00D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

public:
	void ConstructRequestPlayerCombinedInfo(class UPlayFabJsonObject** Request);
	void ExecuteUbergraph_Task_DevepolerLogin(int32 EntryPoint);
	void GetPlayerCombinedInfo_Success(const struct FClientGetPlayerCombinedInfoResult& Result, class UObject* CustomData);
	void Login_Failure(const struct FPlayFabError& Error, class UObject* CustomData);
	void Login_Success(const struct FClientLoginResult& Result, class UObject* CustomData);
	void OnFailure__DelegateSignature(const struct FPlayFabError& Error);
	void OnPlayFabResponse_57D036694E81E3042DF61EA9CBCE87C6(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void OnPlayFabResponse_763BB15148AF2429F3E103B2AA4E64DC(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void OnSuccess__DelegateSignature();
	void ReceiveActivate();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Task_DevepolerLogin_C">();
	}
	static class UTask_DevepolerLogin_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTask_DevepolerLogin_C>();
	}
};
static_assert(alignof(UTask_DevepolerLogin_C) == 0x000008, "Wrong alignment on UTask_DevepolerLogin_C");
static_assert(sizeof(UTask_DevepolerLogin_C) == 0x0000D8, "Wrong size on UTask_DevepolerLogin_C");
static_assert(offsetof(UTask_DevepolerLogin_C, UberGraphFrame) == 0x0000A8, "Member 'UTask_DevepolerLogin_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTask_DevepolerLogin_C, OnSuccess) == 0x0000B0, "Member 'UTask_DevepolerLogin_C::OnSuccess' has a wrong offset!");
static_assert(offsetof(UTask_DevepolerLogin_C, OnFailure) == 0x0000C0, "Member 'UTask_DevepolerLogin_C::OnFailure' has a wrong offset!");
static_assert(offsetof(UTask_DevepolerLogin_C, Client_Backend_Component) == 0x0000D0, "Member 'UTask_DevepolerLogin_C::Client_Backend_Component' has a wrong offset!");

}

