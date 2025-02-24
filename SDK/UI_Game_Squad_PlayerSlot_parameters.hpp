#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Game_Squad_PlayerSlot

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function UI_Game_Squad_PlayerSlot.UI_Game_Squad_PlayerSlot_C.ExecuteUbergraph_UI_Game_Squad_PlayerSlot
// 0x00D8 (0x00D8 - 0x0000)
struct UI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class APlayerState* Player, class APawn* NewPawn, class APawn* OldPawn)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B3D[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerName_ReturnValue;                // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0038(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B3E[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APG_Game_Character*                     K2Node_DynamicCast_AsPG_Game_Character;            // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B3F[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetHealth_ReturnValue;                    // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B40[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* Actor, EEndPlayReason EndPlayReason)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0080(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsEnabled_ReturnValue;                 // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B41[0x2];                                     // 0x0092(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0094(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B42[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_CustomEvent_Actor;                          // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_CustomEvent_EndPlayReason;                  // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B43[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerState*                           K2Node_CustomEvent_Player;                         // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_CustomEvent_NewPawn;                        // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_CustomEvent_OldPawn;                        // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPercent_InPercent_ImplicitCast;        // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot) == 0x000008, "Wrong alignment on UI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot");
static_assert(sizeof(UI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot) == 0x0000D8, "Wrong size on UI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot");
static_assert(offsetof(UI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot, EntryPoint) == 0x000000, "Member 'UI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'UI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'UI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot, CallFunc_IsValid_ReturnValue) == 0x000024, "Member 'UI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot, CallFunc_GetPlayerName_ReturnValue) == 0x000028, "Member 'UI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot::CallFunc_GetPlayerName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot, CallFunc_Conv_StringToText_ReturnValue) == 0x000038, "Member 'UI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot, CallFunc_IsValid_ReturnValue_1) == 0x000050, "Member 'UI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot, K2Node_DynamicCast_AsPG_Game_Character) == 0x000058, "Member 'UI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot::K2Node_DynamicCast_AsPG_Game_Character' has a wrong offset!");
static_assert(offsetof(UI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'UI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot, CallFunc_GetHealth_ReturnValue) == 0x000064, "Member 'UI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot::CallFunc_GetHealth_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot, CallFunc_Greater_IntInt_ReturnValue) == 0x000068, "Member 'UI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000070, "Member 'UI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000078, "Member 'UI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot, K2Node_CreateDelegate_OutputDelegate_2) == 0x000080, "Member 'UI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(UI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot, CallFunc_GetIsEnabled_ReturnValue) == 0x000090, "Member 'UI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot::CallFunc_GetIsEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000091, "Member 'UI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot, K2Node_CreateDelegate_OutputDelegate_3) == 0x000094, "Member 'UI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(UI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot, K2Node_CustomEvent_Actor) == 0x0000A8, "Member 'UI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot::K2Node_CustomEvent_Actor' has a wrong offset!");
static_assert(offsetof(UI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot, K2Node_CustomEvent_EndPlayReason) == 0x0000B0, "Member 'UI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot::K2Node_CustomEvent_EndPlayReason' has a wrong offset!");
static_assert(offsetof(UI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot, K2Node_CustomEvent_Player) == 0x0000B8, "Member 'UI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot::K2Node_CustomEvent_Player' has a wrong offset!");
static_assert(offsetof(UI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot, K2Node_CustomEvent_NewPawn) == 0x0000C0, "Member 'UI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot::K2Node_CustomEvent_NewPawn' has a wrong offset!");
static_assert(offsetof(UI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot, K2Node_CustomEvent_OldPawn) == 0x0000C8, "Member 'UI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot::K2Node_CustomEvent_OldPawn' has a wrong offset!");
static_assert(offsetof(UI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot, CallFunc_SetPercent_InPercent_ImplicitCast) == 0x0000D0, "Member 'UI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot::CallFunc_SetPercent_InPercent_ImplicitCast' has a wrong offset!");

// Function UI_Game_Squad_PlayerSlot.UI_Game_Squad_PlayerSlot_C.OnEndPlay_Event
// 0x0010 (0x0010 - 0x0000)
struct UI_Game_Squad_PlayerSlot_C_OnEndPlay_Event final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                EndPlayReason;                                     // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Game_Squad_PlayerSlot_C_OnEndPlay_Event) == 0x000008, "Wrong alignment on UI_Game_Squad_PlayerSlot_C_OnEndPlay_Event");
static_assert(sizeof(UI_Game_Squad_PlayerSlot_C_OnEndPlay_Event) == 0x000010, "Wrong size on UI_Game_Squad_PlayerSlot_C_OnEndPlay_Event");
static_assert(offsetof(UI_Game_Squad_PlayerSlot_C_OnEndPlay_Event, Actor) == 0x000000, "Member 'UI_Game_Squad_PlayerSlot_C_OnEndPlay_Event::Actor' has a wrong offset!");
static_assert(offsetof(UI_Game_Squad_PlayerSlot_C_OnEndPlay_Event, EndPlayReason) == 0x000008, "Member 'UI_Game_Squad_PlayerSlot_C_OnEndPlay_Event::EndPlayReason' has a wrong offset!");

// Function UI_Game_Squad_PlayerSlot.UI_Game_Squad_PlayerSlot_C.OnPawnSet_Event
// 0x0018 (0x0018 - 0x0000)
struct UI_Game_Squad_PlayerSlot_C_OnPawnSet_Event final
{
public:
	class APlayerState*                           Param_Player;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  NewPawn;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  OldPawn;                                           // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Game_Squad_PlayerSlot_C_OnPawnSet_Event) == 0x000008, "Wrong alignment on UI_Game_Squad_PlayerSlot_C_OnPawnSet_Event");
static_assert(sizeof(UI_Game_Squad_PlayerSlot_C_OnPawnSet_Event) == 0x000018, "Wrong size on UI_Game_Squad_PlayerSlot_C_OnPawnSet_Event");
static_assert(offsetof(UI_Game_Squad_PlayerSlot_C_OnPawnSet_Event, Param_Player) == 0x000000, "Member 'UI_Game_Squad_PlayerSlot_C_OnPawnSet_Event::Param_Player' has a wrong offset!");
static_assert(offsetof(UI_Game_Squad_PlayerSlot_C_OnPawnSet_Event, NewPawn) == 0x000008, "Member 'UI_Game_Squad_PlayerSlot_C_OnPawnSet_Event::NewPawn' has a wrong offset!");
static_assert(offsetof(UI_Game_Squad_PlayerSlot_C_OnPawnSet_Event, OldPawn) == 0x000010, "Member 'UI_Game_Squad_PlayerSlot_C_OnPawnSet_Event::OldPawn' has a wrong offset!");

}

