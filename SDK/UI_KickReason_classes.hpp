#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_KickReason

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "POLYGON_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_KickReason.UI_KickReason_C
// 0x0030 (0x02B0 - 0x0280)
class UUI_KickReason_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_OK;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMultiLineEditableText*                 MultiLineEditableText_Reason;                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Reason;                                            // 0x0298(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void BndEvt__UI_KickReason_Button_OK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_UI_KickReason(int32 EntryPoint);
	void OnPlayFabResponse_3A318FC54672A87852C380886C51DFAB(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void OnUpdatePlayerCombinedInfo_Event(const TArray<EModifiedData>& ModifiedData, const class FString& CustomString);
	void PreConstruct(bool IsDesignTime);
	void WriteEvent_Failure(const struct FPlayFabError& Error, class UObject* CustomData);
	void WriteEvent_Success(const struct FClientWriteEventResponse& Result, class UObject* CustomData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_KickReason_C">();
	}
	static class UUI_KickReason_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_KickReason_C>();
	}
};
static_assert(alignof(UUI_KickReason_C) == 0x000008, "Wrong alignment on UUI_KickReason_C");
static_assert(sizeof(UUI_KickReason_C) == 0x0002B0, "Wrong size on UUI_KickReason_C");
static_assert(offsetof(UUI_KickReason_C, UberGraphFrame) == 0x000280, "Member 'UUI_KickReason_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_KickReason_C, Button_OK) == 0x000288, "Member 'UUI_KickReason_C::Button_OK' has a wrong offset!");
static_assert(offsetof(UUI_KickReason_C, MultiLineEditableText_Reason) == 0x000290, "Member 'UUI_KickReason_C::MultiLineEditableText_Reason' has a wrong offset!");
static_assert(offsetof(UUI_KickReason_C, Reason) == 0x000298, "Member 'UUI_KickReason_C::Reason' has a wrong offset!");

}

