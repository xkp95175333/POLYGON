#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ErrorMessage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_ErrorMessage.UI_ErrorMessage_C
// 0x0058 (0x02D8 - 0x0280)
class UUI_ErrorMessage_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_HideError;                                    // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_ShowError;                                    // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UMultiLineEditableText*                 MultiLineEditableText_ErrorDetails;                // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMultiLineEditableText*                 MultiLineEditableText_ErrorMessage;                // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   ErrorMessage;                                      // 0x02A8(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                   ErrorDetails;                                      // 0x02C0(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void Construct();
	void ExecuteUbergraph_UI_ErrorMessage(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_ErrorMessage_C">();
	}
	static class UUI_ErrorMessage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_ErrorMessage_C>();
	}
};
static_assert(alignof(UUI_ErrorMessage_C) == 0x000008, "Wrong alignment on UUI_ErrorMessage_C");
static_assert(sizeof(UUI_ErrorMessage_C) == 0x0002D8, "Wrong size on UUI_ErrorMessage_C");
static_assert(offsetof(UUI_ErrorMessage_C, UberGraphFrame) == 0x000280, "Member 'UUI_ErrorMessage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_ErrorMessage_C, Anim_HideError) == 0x000288, "Member 'UUI_ErrorMessage_C::Anim_HideError' has a wrong offset!");
static_assert(offsetof(UUI_ErrorMessage_C, Anim_ShowError) == 0x000290, "Member 'UUI_ErrorMessage_C::Anim_ShowError' has a wrong offset!");
static_assert(offsetof(UUI_ErrorMessage_C, MultiLineEditableText_ErrorDetails) == 0x000298, "Member 'UUI_ErrorMessage_C::MultiLineEditableText_ErrorDetails' has a wrong offset!");
static_assert(offsetof(UUI_ErrorMessage_C, MultiLineEditableText_ErrorMessage) == 0x0002A0, "Member 'UUI_ErrorMessage_C::MultiLineEditableText_ErrorMessage' has a wrong offset!");
static_assert(offsetof(UUI_ErrorMessage_C, ErrorMessage) == 0x0002A8, "Member 'UUI_ErrorMessage_C::ErrorMessage' has a wrong offset!");
static_assert(offsetof(UUI_ErrorMessage_C, ErrorDetails) == 0x0002C0, "Member 'UUI_ErrorMessage_C::ErrorDetails' has a wrong offset!");

}

