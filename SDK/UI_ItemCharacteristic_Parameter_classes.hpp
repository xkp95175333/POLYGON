#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ItemCharacteristic_Parameter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_ItemCharacteristic_Parameter.UI_ItemCharacteristic_Parameter_C
// 0x0098 (0x0318 - 0x0280)
class UUI_ItemCharacteristic_Parameter_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Border_Parameter_Difference;                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_PrimaryParameter;                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_SecondaryParameter;                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                Spacer_Bottom;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Parameter;                               // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Parameter_Difference;                    // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_ParameterName;                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   ParameterName;                                     // 0x02C0(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	double                                        MinParameter;                                      // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        MaxParameter;                                      // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          InvertColor;                                       // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_3CA0[0x7];                                     // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        NewParameter;                                      // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        OldParameter;                                      // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        InterpParameter;                                   // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        InterpParameterNormalized;                         // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Decimal_;                                          // 0x0310(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          HideIfDefault;                                     // 0x0314(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void CalculateParameters();
	void ExecuteUbergraph_UI_ItemCharacteristic_Parameter(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetParameters(double CurrentParameter, double CompareParameter, bool InstantSet);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_ItemCharacteristic_Parameter_C">();
	}
	static class UUI_ItemCharacteristic_Parameter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_ItemCharacteristic_Parameter_C>();
	}
};
static_assert(alignof(UUI_ItemCharacteristic_Parameter_C) == 0x000008, "Wrong alignment on UUI_ItemCharacteristic_Parameter_C");
static_assert(sizeof(UUI_ItemCharacteristic_Parameter_C) == 0x000318, "Wrong size on UUI_ItemCharacteristic_Parameter_C");
static_assert(offsetof(UUI_ItemCharacteristic_Parameter_C, UberGraphFrame) == 0x000280, "Member 'UUI_ItemCharacteristic_Parameter_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_ItemCharacteristic_Parameter_C, Border_Parameter_Difference) == 0x000288, "Member 'UUI_ItemCharacteristic_Parameter_C::Border_Parameter_Difference' has a wrong offset!");
static_assert(offsetof(UUI_ItemCharacteristic_Parameter_C, ProgressBar_PrimaryParameter) == 0x000290, "Member 'UUI_ItemCharacteristic_Parameter_C::ProgressBar_PrimaryParameter' has a wrong offset!");
static_assert(offsetof(UUI_ItemCharacteristic_Parameter_C, ProgressBar_SecondaryParameter) == 0x000298, "Member 'UUI_ItemCharacteristic_Parameter_C::ProgressBar_SecondaryParameter' has a wrong offset!");
static_assert(offsetof(UUI_ItemCharacteristic_Parameter_C, Spacer_Bottom) == 0x0002A0, "Member 'UUI_ItemCharacteristic_Parameter_C::Spacer_Bottom' has a wrong offset!");
static_assert(offsetof(UUI_ItemCharacteristic_Parameter_C, TextBlock_Parameter) == 0x0002A8, "Member 'UUI_ItemCharacteristic_Parameter_C::TextBlock_Parameter' has a wrong offset!");
static_assert(offsetof(UUI_ItemCharacteristic_Parameter_C, TextBlock_Parameter_Difference) == 0x0002B0, "Member 'UUI_ItemCharacteristic_Parameter_C::TextBlock_Parameter_Difference' has a wrong offset!");
static_assert(offsetof(UUI_ItemCharacteristic_Parameter_C, TextBlock_ParameterName) == 0x0002B8, "Member 'UUI_ItemCharacteristic_Parameter_C::TextBlock_ParameterName' has a wrong offset!");
static_assert(offsetof(UUI_ItemCharacteristic_Parameter_C, ParameterName) == 0x0002C0, "Member 'UUI_ItemCharacteristic_Parameter_C::ParameterName' has a wrong offset!");
static_assert(offsetof(UUI_ItemCharacteristic_Parameter_C, MinParameter) == 0x0002D8, "Member 'UUI_ItemCharacteristic_Parameter_C::MinParameter' has a wrong offset!");
static_assert(offsetof(UUI_ItemCharacteristic_Parameter_C, MaxParameter) == 0x0002E0, "Member 'UUI_ItemCharacteristic_Parameter_C::MaxParameter' has a wrong offset!");
static_assert(offsetof(UUI_ItemCharacteristic_Parameter_C, InvertColor) == 0x0002E8, "Member 'UUI_ItemCharacteristic_Parameter_C::InvertColor' has a wrong offset!");
static_assert(offsetof(UUI_ItemCharacteristic_Parameter_C, NewParameter) == 0x0002F0, "Member 'UUI_ItemCharacteristic_Parameter_C::NewParameter' has a wrong offset!");
static_assert(offsetof(UUI_ItemCharacteristic_Parameter_C, OldParameter) == 0x0002F8, "Member 'UUI_ItemCharacteristic_Parameter_C::OldParameter' has a wrong offset!");
static_assert(offsetof(UUI_ItemCharacteristic_Parameter_C, InterpParameter) == 0x000300, "Member 'UUI_ItemCharacteristic_Parameter_C::InterpParameter' has a wrong offset!");
static_assert(offsetof(UUI_ItemCharacteristic_Parameter_C, InterpParameterNormalized) == 0x000308, "Member 'UUI_ItemCharacteristic_Parameter_C::InterpParameterNormalized' has a wrong offset!");
static_assert(offsetof(UUI_ItemCharacteristic_Parameter_C, Decimal_) == 0x000310, "Member 'UUI_ItemCharacteristic_Parameter_C::Decimal_' has a wrong offset!");
static_assert(offsetof(UUI_ItemCharacteristic_Parameter_C, HideIfDefault) == 0x000314, "Member 'UUI_ItemCharacteristic_Parameter_C::HideIfDefault' has a wrong offset!");

}

