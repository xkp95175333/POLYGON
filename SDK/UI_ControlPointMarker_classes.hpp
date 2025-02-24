#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ControlPointMarker

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "POLYGON_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_ControlPointMarker.UI_ControlPointMarker_C
// 0x0058 (0x02D8 - 0x0280)
class UUI_ControlPointMarker_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       IsCapture;                                         // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 ControlPointImage;                                 // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ControlPointImage_CA_01;                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ControlPointImage_CA_02;                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox;                                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        Size;                                              // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AControlPoint*                          ControlPointReference;                             // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             SelectAsSpawnPointDelegate;                        // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ABP_PG_PlayerState_Game_C*              PlayerState;                                       // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

public:
	void AttachMarkerToControlPoint(class AControlPoint* Param_ControlPointReference);
	void ExecuteUbergraph_UI_ControlPointMarker(int32 EntryPoint);
	void OnCapturedTeam_Event(class AControlPoint* ControlPoint);
	void OnIsCapture_Event(class AControlPoint* ControlPoint);
	void OnSetPlayerState_Event();
	void OnSetTeam_Event();
	void PreConstruct(bool IsDesignTime);
	void SelectAsSpawnPointDelegate__DelegateSignature(EControlPoint Point);
	void SetName();
	void SetSize(double NewSize);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_ControlPointMarker_C">();
	}
	static class UUI_ControlPointMarker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_ControlPointMarker_C>();
	}
};
static_assert(alignof(UUI_ControlPointMarker_C) == 0x000008, "Wrong alignment on UUI_ControlPointMarker_C");
static_assert(sizeof(UUI_ControlPointMarker_C) == 0x0002D8, "Wrong size on UUI_ControlPointMarker_C");
static_assert(offsetof(UUI_ControlPointMarker_C, UberGraphFrame) == 0x000280, "Member 'UUI_ControlPointMarker_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_ControlPointMarker_C, IsCapture) == 0x000288, "Member 'UUI_ControlPointMarker_C::IsCapture' has a wrong offset!");
static_assert(offsetof(UUI_ControlPointMarker_C, ControlPointImage) == 0x000290, "Member 'UUI_ControlPointMarker_C::ControlPointImage' has a wrong offset!");
static_assert(offsetof(UUI_ControlPointMarker_C, ControlPointImage_CA_01) == 0x000298, "Member 'UUI_ControlPointMarker_C::ControlPointImage_CA_01' has a wrong offset!");
static_assert(offsetof(UUI_ControlPointMarker_C, ControlPointImage_CA_02) == 0x0002A0, "Member 'UUI_ControlPointMarker_C::ControlPointImage_CA_02' has a wrong offset!");
static_assert(offsetof(UUI_ControlPointMarker_C, SizeBox) == 0x0002A8, "Member 'UUI_ControlPointMarker_C::SizeBox' has a wrong offset!");
static_assert(offsetof(UUI_ControlPointMarker_C, Size) == 0x0002B0, "Member 'UUI_ControlPointMarker_C::Size' has a wrong offset!");
static_assert(offsetof(UUI_ControlPointMarker_C, ControlPointReference) == 0x0002B8, "Member 'UUI_ControlPointMarker_C::ControlPointReference' has a wrong offset!");
static_assert(offsetof(UUI_ControlPointMarker_C, SelectAsSpawnPointDelegate) == 0x0002C0, "Member 'UUI_ControlPointMarker_C::SelectAsSpawnPointDelegate' has a wrong offset!");
static_assert(offsetof(UUI_ControlPointMarker_C, PlayerState) == 0x0002D0, "Member 'UUI_ControlPointMarker_C::PlayerState' has a wrong offset!");

}

