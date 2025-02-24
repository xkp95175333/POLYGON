#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ChatMessage

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function UI_ChatMessage.UI_ChatMessage_C.ExecuteUbergraph_UI_ChatMessage
// 0x00B0 (0x00B0 - 0x0000)
struct UI_ChatMessage_C_ExecuteUbergraph_UI_ChatMessage final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3BDD[0x2];                                     // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0028(0x0014)()
	bool                                          Temp_bool_Variable;                                // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3BDE[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3BDF[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0054(0x0014)()
	class FString                                 CallFunc_GetPlayerName_ReturnValue;                // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0078(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0090(0x0018)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ChatMessage_C_ExecuteUbergraph_UI_ChatMessage) == 0x000008, "Wrong alignment on UI_ChatMessage_C_ExecuteUbergraph_UI_ChatMessage");
static_assert(sizeof(UI_ChatMessage_C_ExecuteUbergraph_UI_ChatMessage) == 0x0000B0, "Wrong size on UI_ChatMessage_C_ExecuteUbergraph_UI_ChatMessage");
static_assert(offsetof(UI_ChatMessage_C_ExecuteUbergraph_UI_ChatMessage, EntryPoint) == 0x000000, "Member 'UI_ChatMessage_C_ExecuteUbergraph_UI_ChatMessage::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_ChatMessage_C_ExecuteUbergraph_UI_ChatMessage, Temp_struct_Variable) == 0x000004, "Member 'UI_ChatMessage_C_ExecuteUbergraph_UI_ChatMessage::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(UI_ChatMessage_C_ExecuteUbergraph_UI_ChatMessage, Temp_struct_Variable_1) == 0x000014, "Member 'UI_ChatMessage_C_ExecuteUbergraph_UI_ChatMessage::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_ChatMessage_C_ExecuteUbergraph_UI_ChatMessage, K2Node_Event_IsDesignTime) == 0x000024, "Member 'UI_ChatMessage_C_ExecuteUbergraph_UI_ChatMessage::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UI_ChatMessage_C_ExecuteUbergraph_UI_ChatMessage, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000025, "Member 'UI_ChatMessage_C_ExecuteUbergraph_UI_ChatMessage::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ChatMessage_C_ExecuteUbergraph_UI_ChatMessage, K2Node_MakeStruct_SlateColor) == 0x000028, "Member 'UI_ChatMessage_C_ExecuteUbergraph_UI_ChatMessage::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(UI_ChatMessage_C_ExecuteUbergraph_UI_ChatMessage, Temp_bool_Variable) == 0x00003C, "Member 'UI_ChatMessage_C_ExecuteUbergraph_UI_ChatMessage::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_ChatMessage_C_ExecuteUbergraph_UI_ChatMessage, K2Node_Select_Default) == 0x000040, "Member 'UI_ChatMessage_C_ExecuteUbergraph_UI_ChatMessage::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UI_ChatMessage_C_ExecuteUbergraph_UI_ChatMessage, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'UI_ChatMessage_C_ExecuteUbergraph_UI_ChatMessage::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ChatMessage_C_ExecuteUbergraph_UI_ChatMessage, K2Node_MakeStruct_SlateColor_1) == 0x000054, "Member 'UI_ChatMessage_C_ExecuteUbergraph_UI_ChatMessage::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(UI_ChatMessage_C_ExecuteUbergraph_UI_ChatMessage, CallFunc_GetPlayerName_ReturnValue) == 0x000068, "Member 'UI_ChatMessage_C_ExecuteUbergraph_UI_ChatMessage::CallFunc_GetPlayerName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ChatMessage_C_ExecuteUbergraph_UI_ChatMessage, CallFunc_Conv_StringToText_ReturnValue) == 0x000078, "Member 'UI_ChatMessage_C_ExecuteUbergraph_UI_ChatMessage::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ChatMessage_C_ExecuteUbergraph_UI_ChatMessage, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000090, "Member 'UI_ChatMessage_C_ExecuteUbergraph_UI_ChatMessage::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_ChatMessage_C_ExecuteUbergraph_UI_ChatMessage, K2Node_SwitchEnum_CmpSuccess) == 0x0000A8, "Member 'UI_ChatMessage_C_ExecuteUbergraph_UI_ChatMessage::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function UI_ChatMessage.UI_ChatMessage_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_ChatMessage_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ChatMessage_C_PreConstruct) == 0x000001, "Wrong alignment on UI_ChatMessage_C_PreConstruct");
static_assert(sizeof(UI_ChatMessage_C_PreConstruct) == 0x000001, "Wrong size on UI_ChatMessage_C_PreConstruct");
static_assert(offsetof(UI_ChatMessage_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_ChatMessage_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

