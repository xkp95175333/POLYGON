#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Game_Squad

#include "Basic.hpp"


namespace SDK::Params
{

// Function UI_Game_Squad.UI_Game_Squad_C.ExecuteUbergraph_UI_Game_Squad
// 0x0038 (0x0038 - 0x0000)
struct UI_Game_Squad_C_ExecuteUbergraph_UI_Game_Squad final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B44[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B45[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_PG_PlayerState_Game_C*              K2Node_DynamicCast_AsBP_PG_Player_State_Game;      // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Game_Squad_C_ExecuteUbergraph_UI_Game_Squad) == 0x000008, "Wrong alignment on UI_Game_Squad_C_ExecuteUbergraph_UI_Game_Squad");
static_assert(sizeof(UI_Game_Squad_C_ExecuteUbergraph_UI_Game_Squad) == 0x000038, "Wrong size on UI_Game_Squad_C_ExecuteUbergraph_UI_Game_Squad");
static_assert(offsetof(UI_Game_Squad_C_ExecuteUbergraph_UI_Game_Squad, EntryPoint) == 0x000000, "Member 'UI_Game_Squad_C_ExecuteUbergraph_UI_Game_Squad::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Game_Squad_C_ExecuteUbergraph_UI_Game_Squad, Temp_bool_Has_Been_Initd_Variable) == 0x000004, "Member 'UI_Game_Squad_C_ExecuteUbergraph_UI_Game_Squad::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(UI_Game_Squad_C_ExecuteUbergraph_UI_Game_Squad, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'UI_Game_Squad_C_ExecuteUbergraph_UI_Game_Squad::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_Game_Squad_C_ExecuteUbergraph_UI_Game_Squad, Temp_bool_IsClosed_Variable) == 0x000018, "Member 'UI_Game_Squad_C_ExecuteUbergraph_UI_Game_Squad::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(UI_Game_Squad_C_ExecuteUbergraph_UI_Game_Squad, CallFunc_GetPlayerController_ReturnValue) == 0x000020, "Member 'UI_Game_Squad_C_ExecuteUbergraph_UI_Game_Squad::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Game_Squad_C_ExecuteUbergraph_UI_Game_Squad, K2Node_DynamicCast_AsBP_PG_Player_State_Game) == 0x000028, "Member 'UI_Game_Squad_C_ExecuteUbergraph_UI_Game_Squad::K2Node_DynamicCast_AsBP_PG_Player_State_Game' has a wrong offset!");
static_assert(offsetof(UI_Game_Squad_C_ExecuteUbergraph_UI_Game_Squad, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'UI_Game_Squad_C_ExecuteUbergraph_UI_Game_Squad::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function UI_Game_Squad.UI_Game_Squad_C.UpdateSquadMembers
// 0x0070 (0x0070 - 0x0000)
struct UI_Game_Squad_C_UpdateSquadMembers final
{
public:
	class ABP_PG_PlayerState_Game_C*              L_PlayerState;                                     // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B46[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_Game_Squad_PlayerSlot_C*            CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_PG_PlayerState_Game_C*              K2Node_DynamicCast_AsBP_PG_Player_State_Game;      // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B47[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APG_PlayerState_Game*                   CallFunc_Array_Get_Item;                           // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_PG_PlayerState_Game_C*              K2Node_DynamicCast_AsBP_PG_Player_State_Game_1;    // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B48[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Game_Squad_C_UpdateSquadMembers) == 0x000008, "Wrong alignment on UI_Game_Squad_C_UpdateSquadMembers");
static_assert(sizeof(UI_Game_Squad_C_UpdateSquadMembers) == 0x000070, "Wrong size on UI_Game_Squad_C_UpdateSquadMembers");
static_assert(offsetof(UI_Game_Squad_C_UpdateSquadMembers, L_PlayerState) == 0x000000, "Member 'UI_Game_Squad_C_UpdateSquadMembers::L_PlayerState' has a wrong offset!");
static_assert(offsetof(UI_Game_Squad_C_UpdateSquadMembers, Temp_int_Array_Index_Variable) == 0x000008, "Member 'UI_Game_Squad_C_UpdateSquadMembers::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UI_Game_Squad_C_UpdateSquadMembers, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'UI_Game_Squad_C_UpdateSquadMembers::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UI_Game_Squad_C_UpdateSquadMembers, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'UI_Game_Squad_C_UpdateSquadMembers::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Game_Squad_C_UpdateSquadMembers, CallFunc_Array_Length_ReturnValue) == 0x000014, "Member 'UI_Game_Squad_C_UpdateSquadMembers::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Game_Squad_C_UpdateSquadMembers, CallFunc_GetOwningPlayer_ReturnValue) == 0x000018, "Member 'UI_Game_Squad_C_UpdateSquadMembers::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Game_Squad_C_UpdateSquadMembers, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000020, "Member 'UI_Game_Squad_C_UpdateSquadMembers::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Game_Squad_C_UpdateSquadMembers, CallFunc_Create_ReturnValue) == 0x000028, "Member 'UI_Game_Squad_C_UpdateSquadMembers::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Game_Squad_C_UpdateSquadMembers, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000030, "Member 'UI_Game_Squad_C_UpdateSquadMembers::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Game_Squad_C_UpdateSquadMembers, CallFunc_GetPlayerController_ReturnValue) == 0x000038, "Member 'UI_Game_Squad_C_UpdateSquadMembers::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Game_Squad_C_UpdateSquadMembers, K2Node_DynamicCast_AsBP_PG_Player_State_Game) == 0x000040, "Member 'UI_Game_Squad_C_UpdateSquadMembers::K2Node_DynamicCast_AsBP_PG_Player_State_Game' has a wrong offset!");
static_assert(offsetof(UI_Game_Squad_C_UpdateSquadMembers, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'UI_Game_Squad_C_UpdateSquadMembers::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_Game_Squad_C_UpdateSquadMembers, CallFunc_Array_Get_Item) == 0x000050, "Member 'UI_Game_Squad_C_UpdateSquadMembers::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UI_Game_Squad_C_UpdateSquadMembers, K2Node_DynamicCast_AsBP_PG_Player_State_Game_1) == 0x000058, "Member 'UI_Game_Squad_C_UpdateSquadMembers::K2Node_DynamicCast_AsBP_PG_Player_State_Game_1' has a wrong offset!");
static_assert(offsetof(UI_Game_Squad_C_UpdateSquadMembers, K2Node_DynamicCast_bSuccess_1) == 0x000060, "Member 'UI_Game_Squad_C_UpdateSquadMembers::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UI_Game_Squad_C_UpdateSquadMembers, CallFunc_Array_Length_ReturnValue_1) == 0x000064, "Member 'UI_Game_Squad_C_UpdateSquadMembers::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Game_Squad_C_UpdateSquadMembers, CallFunc_Less_IntInt_ReturnValue) == 0x000068, "Member 'UI_Game_Squad_C_UpdateSquadMembers::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

