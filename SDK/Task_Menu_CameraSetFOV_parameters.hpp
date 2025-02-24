#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Task_Menu_CameraSetFOV

#include "Basic.hpp"


namespace SDK::Params
{

// Function Task_Menu_CameraSetFOV.Task_Menu_CameraSetFOV_C.ExecuteUbergraph_Task_Menu_CameraSetFOV
// 0x0070 (0x0070 - 0x0000)
struct Task_Menu_CameraSetFOV_C_ExecuteUbergraph_Task_Menu_CameraSetFOV final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UAction*>                        K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetViewTarget_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                           K2Node_DynamicCast_AsCamera_Actor;                 // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C4D[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_FInterpTo_ReturnValue;                    // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C4E[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UActionsSubsystem*                      CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FInterpTo_DeltaTime_ImplicitCast;         // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FInterpTo_Current_ImplicitCast;           // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast; // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C4F[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast;    // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Task_Menu_CameraSetFOV_C_ExecuteUbergraph_Task_Menu_CameraSetFOV) == 0x000008, "Wrong alignment on Task_Menu_CameraSetFOV_C_ExecuteUbergraph_Task_Menu_CameraSetFOV");
static_assert(sizeof(Task_Menu_CameraSetFOV_C_ExecuteUbergraph_Task_Menu_CameraSetFOV) == 0x000070, "Wrong size on Task_Menu_CameraSetFOV_C_ExecuteUbergraph_Task_Menu_CameraSetFOV");
static_assert(offsetof(Task_Menu_CameraSetFOV_C_ExecuteUbergraph_Task_Menu_CameraSetFOV, EntryPoint) == 0x000000, "Member 'Task_Menu_CameraSetFOV_C_ExecuteUbergraph_Task_Menu_CameraSetFOV::EntryPoint' has a wrong offset!");
static_assert(offsetof(Task_Menu_CameraSetFOV_C_ExecuteUbergraph_Task_Menu_CameraSetFOV, K2Node_Event_DeltaTime) == 0x000004, "Member 'Task_Menu_CameraSetFOV_C_ExecuteUbergraph_Task_Menu_CameraSetFOV::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(Task_Menu_CameraSetFOV_C_ExecuteUbergraph_Task_Menu_CameraSetFOV, K2Node_MakeArray_Array) == 0x000008, "Member 'Task_Menu_CameraSetFOV_C_ExecuteUbergraph_Task_Menu_CameraSetFOV::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Task_Menu_CameraSetFOV_C_ExecuteUbergraph_Task_Menu_CameraSetFOV, CallFunc_GetPlayerController_ReturnValue) == 0x000018, "Member 'Task_Menu_CameraSetFOV_C_ExecuteUbergraph_Task_Menu_CameraSetFOV::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(Task_Menu_CameraSetFOV_C_ExecuteUbergraph_Task_Menu_CameraSetFOV, CallFunc_GetViewTarget_ReturnValue) == 0x000020, "Member 'Task_Menu_CameraSetFOV_C_ExecuteUbergraph_Task_Menu_CameraSetFOV::CallFunc_GetViewTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(Task_Menu_CameraSetFOV_C_ExecuteUbergraph_Task_Menu_CameraSetFOV, K2Node_DynamicCast_AsCamera_Actor) == 0x000028, "Member 'Task_Menu_CameraSetFOV_C_ExecuteUbergraph_Task_Menu_CameraSetFOV::K2Node_DynamicCast_AsCamera_Actor' has a wrong offset!");
static_assert(offsetof(Task_Menu_CameraSetFOV_C_ExecuteUbergraph_Task_Menu_CameraSetFOV, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'Task_Menu_CameraSetFOV_C_ExecuteUbergraph_Task_Menu_CameraSetFOV::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Task_Menu_CameraSetFOV_C_ExecuteUbergraph_Task_Menu_CameraSetFOV, CallFunc_FInterpTo_ReturnValue) == 0x000038, "Member 'Task_Menu_CameraSetFOV_C_ExecuteUbergraph_Task_Menu_CameraSetFOV::CallFunc_FInterpTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(Task_Menu_CameraSetFOV_C_ExecuteUbergraph_Task_Menu_CameraSetFOV, CallFunc_NearlyEqual_FloatFloat_ReturnValue) == 0x000040, "Member 'Task_Menu_CameraSetFOV_C_ExecuteUbergraph_Task_Menu_CameraSetFOV::CallFunc_NearlyEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Task_Menu_CameraSetFOV_C_ExecuteUbergraph_Task_Menu_CameraSetFOV, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000048, "Member 'Task_Menu_CameraSetFOV_C_ExecuteUbergraph_Task_Menu_CameraSetFOV::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(Task_Menu_CameraSetFOV_C_ExecuteUbergraph_Task_Menu_CameraSetFOV, CallFunc_FInterpTo_DeltaTime_ImplicitCast) == 0x000050, "Member 'Task_Menu_CameraSetFOV_C_ExecuteUbergraph_Task_Menu_CameraSetFOV::CallFunc_FInterpTo_DeltaTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(Task_Menu_CameraSetFOV_C_ExecuteUbergraph_Task_Menu_CameraSetFOV, CallFunc_FInterpTo_Current_ImplicitCast) == 0x000058, "Member 'Task_Menu_CameraSetFOV_C_ExecuteUbergraph_Task_Menu_CameraSetFOV::CallFunc_FInterpTo_Current_ImplicitCast' has a wrong offset!");
static_assert(offsetof(Task_Menu_CameraSetFOV_C_ExecuteUbergraph_Task_Menu_CameraSetFOV, CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast) == 0x000060, "Member 'Task_Menu_CameraSetFOV_C_ExecuteUbergraph_Task_Menu_CameraSetFOV::CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast' has a wrong offset!");
static_assert(offsetof(Task_Menu_CameraSetFOV_C_ExecuteUbergraph_Task_Menu_CameraSetFOV, CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast) == 0x000068, "Member 'Task_Menu_CameraSetFOV_C_ExecuteUbergraph_Task_Menu_CameraSetFOV::CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast' has a wrong offset!");

// Function Task_Menu_CameraSetFOV.Task_Menu_CameraSetFOV_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct Task_Menu_CameraSetFOV_C_ReceiveTick final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Task_Menu_CameraSetFOV_C_ReceiveTick) == 0x000004, "Wrong alignment on Task_Menu_CameraSetFOV_C_ReceiveTick");
static_assert(sizeof(Task_Menu_CameraSetFOV_C_ReceiveTick) == 0x000004, "Wrong size on Task_Menu_CameraSetFOV_C_ReceiveTick");
static_assert(offsetof(Task_Menu_CameraSetFOV_C_ReceiveTick, DeltaTime) == 0x000000, "Member 'Task_Menu_CameraSetFOV_C_ReceiveTick::DeltaTime' has a wrong offset!");

}

