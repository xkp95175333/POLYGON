#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_CharacterPG_Menu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// ScriptStruct ABP_CharacterPG_Menu.ABP_CharacterPG_Menu_C.AnimBlueprintGeneratedConstantData
// 0x0137 (0x0138 - 0x0001)
struct ABP_CharacterPG_Menu::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_3F58[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_109;                                // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_110;                              // 0x000C(0x002C)(BlueprintVisible, NoDestructor)
	float                                         __FloatProperty_111;                               // 0x0038(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F59[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBlendProfile*                          __BlendProfile_112;                                // 0x0040(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                            __CurveFloat_113;                                  // 0x0048(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	EAlphaBlendOption                             __EnumProperty_114;                                // 0x0050(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBlendListTransitionType                      __EnumProperty_115;                                // 0x0051(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F5A[0x6];                                     // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty_116;                               // 0x0058(0x0010)(BlueprintVisible, EditFixedSize)
	ESequenceEvalReinit                           __ByteProperty_117;                                // 0x0068(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_118;                                // 0x0069(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F5B[0x2];                                     // 0x006A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_119;                               // 0x006C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_120;                                // 0x0070(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_121;                                // 0x0071(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_122;                                // 0x0072(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F5C[0x1];                                     // 0x0073(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_123;                                // 0x0074(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F5D[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNodeFunctionRef                   __StructProperty_124;                              // 0x0080(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x00A0(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x0120(0x0018)()
};
static_assert(alignof(ABP_CharacterPG_Menu::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on ABP_CharacterPG_Menu::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(ABP_CharacterPG_Menu::FAnimBlueprintGeneratedConstantData) == 0x000138, "Wrong size on ABP_CharacterPG_Menu::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(ABP_CharacterPG_Menu::FAnimBlueprintGeneratedConstantData, __NameProperty_109) == 0x000004, "Member 'ABP_CharacterPG_Menu::FAnimBlueprintGeneratedConstantData::__NameProperty_109' has a wrong offset!");
static_assert(offsetof(ABP_CharacterPG_Menu::FAnimBlueprintGeneratedConstantData, __StructProperty_110) == 0x00000C, "Member 'ABP_CharacterPG_Menu::FAnimBlueprintGeneratedConstantData::__StructProperty_110' has a wrong offset!");
static_assert(offsetof(ABP_CharacterPG_Menu::FAnimBlueprintGeneratedConstantData, __FloatProperty_111) == 0x000038, "Member 'ABP_CharacterPG_Menu::FAnimBlueprintGeneratedConstantData::__FloatProperty_111' has a wrong offset!");
static_assert(offsetof(ABP_CharacterPG_Menu::FAnimBlueprintGeneratedConstantData, __BlendProfile_112) == 0x000040, "Member 'ABP_CharacterPG_Menu::FAnimBlueprintGeneratedConstantData::__BlendProfile_112' has a wrong offset!");
static_assert(offsetof(ABP_CharacterPG_Menu::FAnimBlueprintGeneratedConstantData, __CurveFloat_113) == 0x000048, "Member 'ABP_CharacterPG_Menu::FAnimBlueprintGeneratedConstantData::__CurveFloat_113' has a wrong offset!");
static_assert(offsetof(ABP_CharacterPG_Menu::FAnimBlueprintGeneratedConstantData, __EnumProperty_114) == 0x000050, "Member 'ABP_CharacterPG_Menu::FAnimBlueprintGeneratedConstantData::__EnumProperty_114' has a wrong offset!");
static_assert(offsetof(ABP_CharacterPG_Menu::FAnimBlueprintGeneratedConstantData, __EnumProperty_115) == 0x000051, "Member 'ABP_CharacterPG_Menu::FAnimBlueprintGeneratedConstantData::__EnumProperty_115' has a wrong offset!");
static_assert(offsetof(ABP_CharacterPG_Menu::FAnimBlueprintGeneratedConstantData, __ArrayProperty_116) == 0x000058, "Member 'ABP_CharacterPG_Menu::FAnimBlueprintGeneratedConstantData::__ArrayProperty_116' has a wrong offset!");
static_assert(offsetof(ABP_CharacterPG_Menu::FAnimBlueprintGeneratedConstantData, __ByteProperty_117) == 0x000068, "Member 'ABP_CharacterPG_Menu::FAnimBlueprintGeneratedConstantData::__ByteProperty_117' has a wrong offset!");
static_assert(offsetof(ABP_CharacterPG_Menu::FAnimBlueprintGeneratedConstantData, __BoolProperty_118) == 0x000069, "Member 'ABP_CharacterPG_Menu::FAnimBlueprintGeneratedConstantData::__BoolProperty_118' has a wrong offset!");
static_assert(offsetof(ABP_CharacterPG_Menu::FAnimBlueprintGeneratedConstantData, __FloatProperty_119) == 0x00006C, "Member 'ABP_CharacterPG_Menu::FAnimBlueprintGeneratedConstantData::__FloatProperty_119' has a wrong offset!");
static_assert(offsetof(ABP_CharacterPG_Menu::FAnimBlueprintGeneratedConstantData, __BoolProperty_120) == 0x000070, "Member 'ABP_CharacterPG_Menu::FAnimBlueprintGeneratedConstantData::__BoolProperty_120' has a wrong offset!");
static_assert(offsetof(ABP_CharacterPG_Menu::FAnimBlueprintGeneratedConstantData, __EnumProperty_121) == 0x000071, "Member 'ABP_CharacterPG_Menu::FAnimBlueprintGeneratedConstantData::__EnumProperty_121' has a wrong offset!");
static_assert(offsetof(ABP_CharacterPG_Menu::FAnimBlueprintGeneratedConstantData, __ByteProperty_122) == 0x000072, "Member 'ABP_CharacterPG_Menu::FAnimBlueprintGeneratedConstantData::__ByteProperty_122' has a wrong offset!");
static_assert(offsetof(ABP_CharacterPG_Menu::FAnimBlueprintGeneratedConstantData, __NameProperty_123) == 0x000074, "Member 'ABP_CharacterPG_Menu::FAnimBlueprintGeneratedConstantData::__NameProperty_123' has a wrong offset!");
static_assert(offsetof(ABP_CharacterPG_Menu::FAnimBlueprintGeneratedConstantData, __StructProperty_124) == 0x000080, "Member 'ABP_CharacterPG_Menu::FAnimBlueprintGeneratedConstantData::__StructProperty_124' has a wrong offset!");
static_assert(offsetof(ABP_CharacterPG_Menu::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x0000A0, "Member 'ABP_CharacterPG_Menu::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(ABP_CharacterPG_Menu::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000120, "Member 'ABP_CharacterPG_Menu::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

// ScriptStruct ABP_CharacterPG_Menu.ABP_CharacterPG_Menu_C.AnimBlueprintGeneratedMutableData
// 0x001F (0x0020 - 0x0001)
struct ABP_CharacterPG_Menu::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	uint8                                         Pad_3F5E[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimSequenceBase*                      __AnimSequenceBase;                                // 0x0008(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          __BoolProperty_0;                                  // 0x0010(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F5F[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimSequenceBase*                      __AnimSequenceBase_1;                              // 0x0018(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(ABP_CharacterPG_Menu::FAnimBlueprintGeneratedMutableData) == 0x000008, "Wrong alignment on ABP_CharacterPG_Menu::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(ABP_CharacterPG_Menu::FAnimBlueprintGeneratedMutableData) == 0x000020, "Wrong size on ABP_CharacterPG_Menu::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(ABP_CharacterPG_Menu::FAnimBlueprintGeneratedMutableData, __AnimSequenceBase) == 0x000008, "Member 'ABP_CharacterPG_Menu::FAnimBlueprintGeneratedMutableData::__AnimSequenceBase' has a wrong offset!");
static_assert(offsetof(ABP_CharacterPG_Menu::FAnimBlueprintGeneratedMutableData, __BoolProperty_0) == 0x000010, "Member 'ABP_CharacterPG_Menu::FAnimBlueprintGeneratedMutableData::__BoolProperty_0' has a wrong offset!");
static_assert(offsetof(ABP_CharacterPG_Menu::FAnimBlueprintGeneratedMutableData, __AnimSequenceBase_1) == 0x000018, "Member 'ABP_CharacterPG_Menu::FAnimBlueprintGeneratedMutableData::__AnimSequenceBase_1' has a wrong offset!");

}

