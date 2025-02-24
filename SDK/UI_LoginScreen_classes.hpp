#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_LoginScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "POLYGON_structs.hpp"
#include "OnlineSubsystemBlueprints_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_LoginScreen.UI_LoginScreen_C
// 0x0020 (0x02A0 - 0x0280)
class UUI_LoginScreen_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUI_LoadingIcon_C*                      UI_LoadingIcon;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABP_PG_PlayerController_Menu_C*         PlayerController;                                  // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_PG_PlayerState_Menu_C*              PlayerState;                                       // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ConstructRequestPlayerCombinedInfo(class UPlayFabJsonObject** Request);
	void DeveloperLogin_Failure(const struct FPlayFabError& Error);
	void ExecuteUbergraph_UI_LoginScreen(int32 EntryPoint);
	void GetAuthSessionTicketResponse_Event(const struct FGetAuthSessionTicketResponse& Data);
	void GetPlayerCombinedInfo_Failure(const struct FPlayFabError& Error, class UObject* CustomData);
	void GetPlayerCombinedInfo_Success(const struct FClientGetPlayerCombinedInfoResult& Result, class UObject* CustomData);
	void Login();
	void LoginViaCustomID();
	void LoginViaOnlineService();
	void LoginWithSteam_Failure(const struct FPlayFabError& Error, class UObject* CustomData);
	void LoginWithSteam_Success(const struct FClientLoginResult& Result, class UObject* CustomData);
	void OnCallFailed_AE47C52642B7D27765F4D3B14A92D63C(bool bWasSuccessful, const struct FUniqueNetIdRepl& UserId, const class FString& Error);
	void OnLoginComplete_AE47C52642B7D27765F4D3B14A92D63C(bool bWasSuccessful, const struct FUniqueNetIdRepl& UserId, const class FString& Error);
	void OnPlayFabResponse_77B2D5324B52ABCD7EAADE81E626F006(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void OnPlayFabResponse_9D53D0BB48321AF2818524814BD8FB06(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void OnPlayFabResponse_C212664541185E46F64DD1B5C3B4F97F(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void OnPlayFabResponse_DA74F5AB45E383FF5D542A96BD744E9E(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void OnSuccess_20F411B94BC59186A71DF7BFB60DE6BC();
	void RequestPlayerCombinedInfo();
	void ShowErrorMessage(const struct FPlayFabError& PlayFabError);
	void UpdateRequiredDataInDatabase();
	void UpdateUsedData_Failure(const struct FPlayFabError& Error, class UObject* CustomData);
	void UpdateUsedData_Success(const struct FClientUpdateUserDataResult& Result, class UObject* CustomData);
	void UpdateUserTitleDisplayName_Failure(const struct FPlayFabError& Error, class UObject* CustomData);
	void UpdateUserTitleDisplayName_Success(const struct FClientUpdateUserTitleDisplayNameResult& Result, class UObject* CustomData);
	void WriteEvent_Failure(const struct FPlayFabError& Error, class UObject* CustomData);
	void WriteEvent_Success(const struct FClientWriteEventResponse& Result, class UObject* CustomData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_LoginScreen_C">();
	}
	static class UUI_LoginScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_LoginScreen_C>();
	}
};
static_assert(alignof(UUI_LoginScreen_C) == 0x000008, "Wrong alignment on UUI_LoginScreen_C");
static_assert(sizeof(UUI_LoginScreen_C) == 0x0002A0, "Wrong size on UUI_LoginScreen_C");
static_assert(offsetof(UUI_LoginScreen_C, UberGraphFrame) == 0x000280, "Member 'UUI_LoginScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_LoginScreen_C, UI_LoadingIcon) == 0x000288, "Member 'UUI_LoginScreen_C::UI_LoadingIcon' has a wrong offset!");
static_assert(offsetof(UUI_LoginScreen_C, PlayerController) == 0x000290, "Member 'UUI_LoginScreen_C::PlayerController' has a wrong offset!");
static_assert(offsetof(UUI_LoginScreen_C, PlayerState) == 0x000298, "Member 'UUI_LoginScreen_C::PlayerState' has a wrong offset!");

}

