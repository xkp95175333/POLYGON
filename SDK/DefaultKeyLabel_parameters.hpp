#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DefaultKeyLabel

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function DefaultKeyLabel.DefaultKeyLabel_C.ExecuteUbergraph_DefaultKeyLabel
// 0x0110 (0x0110 - 0x0000)
struct DefaultKeyLabel_C_ExecuteUbergraph_DefaultKeyLabel final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38F3[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetDisplayName_ReturnValue;               // 0x0008(0x0018)()
	bool                                          CallFunc_HasIcon_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38F4[0xF];                                     // 0x0021(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            CallFunc_GetIconBrush_ReturnValue;                 // 0x0030(0x00D0)()
	ESlateVisibility                              CallFunc_GetIconVisibility_ReturnValue;            // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              CallFunc_GetDisplayNameVisibility_ReturnValue;     // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DefaultKeyLabel_C_ExecuteUbergraph_DefaultKeyLabel) == 0x000010, "Wrong alignment on DefaultKeyLabel_C_ExecuteUbergraph_DefaultKeyLabel");
static_assert(sizeof(DefaultKeyLabel_C_ExecuteUbergraph_DefaultKeyLabel) == 0x000110, "Wrong size on DefaultKeyLabel_C_ExecuteUbergraph_DefaultKeyLabel");
static_assert(offsetof(DefaultKeyLabel_C_ExecuteUbergraph_DefaultKeyLabel, EntryPoint) == 0x000000, "Member 'DefaultKeyLabel_C_ExecuteUbergraph_DefaultKeyLabel::EntryPoint' has a wrong offset!");
static_assert(offsetof(DefaultKeyLabel_C_ExecuteUbergraph_DefaultKeyLabel, CallFunc_GetDisplayName_ReturnValue) == 0x000008, "Member 'DefaultKeyLabel_C_ExecuteUbergraph_DefaultKeyLabel::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(DefaultKeyLabel_C_ExecuteUbergraph_DefaultKeyLabel, CallFunc_HasIcon_ReturnValue) == 0x000020, "Member 'DefaultKeyLabel_C_ExecuteUbergraph_DefaultKeyLabel::CallFunc_HasIcon_ReturnValue' has a wrong offset!");
static_assert(offsetof(DefaultKeyLabel_C_ExecuteUbergraph_DefaultKeyLabel, CallFunc_GetIconBrush_ReturnValue) == 0x000030, "Member 'DefaultKeyLabel_C_ExecuteUbergraph_DefaultKeyLabel::CallFunc_GetIconBrush_ReturnValue' has a wrong offset!");
static_assert(offsetof(DefaultKeyLabel_C_ExecuteUbergraph_DefaultKeyLabel, CallFunc_GetIconVisibility_ReturnValue) == 0x000100, "Member 'DefaultKeyLabel_C_ExecuteUbergraph_DefaultKeyLabel::CallFunc_GetIconVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(DefaultKeyLabel_C_ExecuteUbergraph_DefaultKeyLabel, CallFunc_GetDisplayNameVisibility_ReturnValue) == 0x000101, "Member 'DefaultKeyLabel_C_ExecuteUbergraph_DefaultKeyLabel::CallFunc_GetDisplayNameVisibility_ReturnValue' has a wrong offset!");

}

