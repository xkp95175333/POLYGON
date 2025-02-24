#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PG_PlayerController_Menu

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_PG_PlayerController_Menu.BP_PG_PlayerController_Menu_C.ExecuteUbergraph_BP_PG_PlayerController_Menu
// 0x0058 (0x0058 - 0x0000)
struct BP_PG_PlayerController_Menu_C_ExecuteUbergraph_BP_PG_PlayerController_Menu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F55[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        CallFunc_CreateSound2D_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUI_Menu_GeneralMenuScreen_C*           CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_Event_errorMessage;                         // 0x0018(0x0018)(ConstParm)
	class FText                                   K2Node_Event_errorDetails;                         // 0x0030(0x0018)(ConstParm)
	class UUI_ErrorMessage_C*                     CallFunc_Create_ReturnValue_1;                     // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PG_PlayerController_Menu_C_ExecuteUbergraph_BP_PG_PlayerController_Menu) == 0x000008, "Wrong alignment on BP_PG_PlayerController_Menu_C_ExecuteUbergraph_BP_PG_PlayerController_Menu");
static_assert(sizeof(BP_PG_PlayerController_Menu_C_ExecuteUbergraph_BP_PG_PlayerController_Menu) == 0x000058, "Wrong size on BP_PG_PlayerController_Menu_C_ExecuteUbergraph_BP_PG_PlayerController_Menu");
static_assert(offsetof(BP_PG_PlayerController_Menu_C_ExecuteUbergraph_BP_PG_PlayerController_Menu, EntryPoint) == 0x000000, "Member 'BP_PG_PlayerController_Menu_C_ExecuteUbergraph_BP_PG_PlayerController_Menu::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PG_PlayerController_Menu_C_ExecuteUbergraph_BP_PG_PlayerController_Menu, CallFunc_CreateSound2D_ReturnValue) == 0x000008, "Member 'BP_PG_PlayerController_Menu_C_ExecuteUbergraph_BP_PG_PlayerController_Menu::CallFunc_CreateSound2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PG_PlayerController_Menu_C_ExecuteUbergraph_BP_PG_PlayerController_Menu, CallFunc_Create_ReturnValue) == 0x000010, "Member 'BP_PG_PlayerController_Menu_C_ExecuteUbergraph_BP_PG_PlayerController_Menu::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PG_PlayerController_Menu_C_ExecuteUbergraph_BP_PG_PlayerController_Menu, K2Node_Event_errorMessage) == 0x000018, "Member 'BP_PG_PlayerController_Menu_C_ExecuteUbergraph_BP_PG_PlayerController_Menu::K2Node_Event_errorMessage' has a wrong offset!");
static_assert(offsetof(BP_PG_PlayerController_Menu_C_ExecuteUbergraph_BP_PG_PlayerController_Menu, K2Node_Event_errorDetails) == 0x000030, "Member 'BP_PG_PlayerController_Menu_C_ExecuteUbergraph_BP_PG_PlayerController_Menu::K2Node_Event_errorDetails' has a wrong offset!");
static_assert(offsetof(BP_PG_PlayerController_Menu_C_ExecuteUbergraph_BP_PG_PlayerController_Menu, CallFunc_Create_ReturnValue_1) == 0x000048, "Member 'BP_PG_PlayerController_Menu_C_ExecuteUbergraph_BP_PG_PlayerController_Menu::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PG_PlayerController_Menu_C_ExecuteUbergraph_BP_PG_PlayerController_Menu, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'BP_PG_PlayerController_Menu_C_ExecuteUbergraph_BP_PG_PlayerController_Menu::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_PG_PlayerController_Menu.BP_PG_PlayerController_Menu_C.SetVisibleHardLoadingScreen
// 0x0018 (0x0018 - 0x0000)
struct BP_PG_PlayerController_Menu_C_SetVisibleHardLoadingScreen final
{
public:
	bool                                          IsVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          L_IsVisible;                                       // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F56[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_HardLoadingScreen_C*                CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PG_PlayerController_Menu_C_SetVisibleHardLoadingScreen) == 0x000008, "Wrong alignment on BP_PG_PlayerController_Menu_C_SetVisibleHardLoadingScreen");
static_assert(sizeof(BP_PG_PlayerController_Menu_C_SetVisibleHardLoadingScreen) == 0x000018, "Wrong size on BP_PG_PlayerController_Menu_C_SetVisibleHardLoadingScreen");
static_assert(offsetof(BP_PG_PlayerController_Menu_C_SetVisibleHardLoadingScreen, IsVisible) == 0x000000, "Member 'BP_PG_PlayerController_Menu_C_SetVisibleHardLoadingScreen::IsVisible' has a wrong offset!");
static_assert(offsetof(BP_PG_PlayerController_Menu_C_SetVisibleHardLoadingScreen, L_IsVisible) == 0x000001, "Member 'BP_PG_PlayerController_Menu_C_SetVisibleHardLoadingScreen::L_IsVisible' has a wrong offset!");
static_assert(offsetof(BP_PG_PlayerController_Menu_C_SetVisibleHardLoadingScreen, CallFunc_IsValid_ReturnValue) == 0x000002, "Member 'BP_PG_PlayerController_Menu_C_SetVisibleHardLoadingScreen::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PG_PlayerController_Menu_C_SetVisibleHardLoadingScreen, CallFunc_Not_PreBool_ReturnValue) == 0x000003, "Member 'BP_PG_PlayerController_Menu_C_SetVisibleHardLoadingScreen::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PG_PlayerController_Menu_C_SetVisibleHardLoadingScreen, CallFunc_IsValid_ReturnValue_1) == 0x000004, "Member 'BP_PG_PlayerController_Menu_C_SetVisibleHardLoadingScreen::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PG_PlayerController_Menu_C_SetVisibleHardLoadingScreen, CallFunc_BooleanAND_ReturnValue) == 0x000005, "Member 'BP_PG_PlayerController_Menu_C_SetVisibleHardLoadingScreen::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PG_PlayerController_Menu_C_SetVisibleHardLoadingScreen, CallFunc_Create_ReturnValue) == 0x000008, "Member 'BP_PG_PlayerController_Menu_C_SetVisibleHardLoadingScreen::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PG_PlayerController_Menu_C_SetVisibleHardLoadingScreen, CallFunc_Not_PreBool_ReturnValue_1) == 0x000010, "Member 'BP_PG_PlayerController_Menu_C_SetVisibleHardLoadingScreen::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PG_PlayerController_Menu_C_SetVisibleHardLoadingScreen, CallFunc_BooleanAND_ReturnValue_1) == 0x000011, "Member 'BP_PG_PlayerController_Menu_C_SetVisibleHardLoadingScreen::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function BP_PG_PlayerController_Menu.BP_PG_PlayerController_Menu_C.SetVisibleSoftLoadingScreen
// 0x0018 (0x0018 - 0x0000)
struct BP_PG_PlayerController_Menu_C_SetVisibleSoftLoadingScreen final
{
public:
	bool                                          IsVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          L_IsVisible;                                       // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F57[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_SoftLoadingScreen_C*                CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PG_PlayerController_Menu_C_SetVisibleSoftLoadingScreen) == 0x000008, "Wrong alignment on BP_PG_PlayerController_Menu_C_SetVisibleSoftLoadingScreen");
static_assert(sizeof(BP_PG_PlayerController_Menu_C_SetVisibleSoftLoadingScreen) == 0x000018, "Wrong size on BP_PG_PlayerController_Menu_C_SetVisibleSoftLoadingScreen");
static_assert(offsetof(BP_PG_PlayerController_Menu_C_SetVisibleSoftLoadingScreen, IsVisible) == 0x000000, "Member 'BP_PG_PlayerController_Menu_C_SetVisibleSoftLoadingScreen::IsVisible' has a wrong offset!");
static_assert(offsetof(BP_PG_PlayerController_Menu_C_SetVisibleSoftLoadingScreen, L_IsVisible) == 0x000001, "Member 'BP_PG_PlayerController_Menu_C_SetVisibleSoftLoadingScreen::L_IsVisible' has a wrong offset!");
static_assert(offsetof(BP_PG_PlayerController_Menu_C_SetVisibleSoftLoadingScreen, CallFunc_IsValid_ReturnValue) == 0x000002, "Member 'BP_PG_PlayerController_Menu_C_SetVisibleSoftLoadingScreen::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PG_PlayerController_Menu_C_SetVisibleSoftLoadingScreen, CallFunc_Not_PreBool_ReturnValue) == 0x000003, "Member 'BP_PG_PlayerController_Menu_C_SetVisibleSoftLoadingScreen::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PG_PlayerController_Menu_C_SetVisibleSoftLoadingScreen, CallFunc_Create_ReturnValue) == 0x000008, "Member 'BP_PG_PlayerController_Menu_C_SetVisibleSoftLoadingScreen::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PG_PlayerController_Menu_C_SetVisibleSoftLoadingScreen, CallFunc_BooleanAND_ReturnValue) == 0x000010, "Member 'BP_PG_PlayerController_Menu_C_SetVisibleSoftLoadingScreen::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PG_PlayerController_Menu_C_SetVisibleSoftLoadingScreen, CallFunc_Not_PreBool_ReturnValue_1) == 0x000011, "Member 'BP_PG_PlayerController_Menu_C_SetVisibleSoftLoadingScreen::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PG_PlayerController_Menu_C_SetVisibleSoftLoadingScreen, CallFunc_IsValid_ReturnValue_1) == 0x000012, "Member 'BP_PG_PlayerController_Menu_C_SetVisibleSoftLoadingScreen::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PG_PlayerController_Menu_C_SetVisibleSoftLoadingScreen, CallFunc_BooleanAND_ReturnValue_1) == 0x000013, "Member 'BP_PG_PlayerController_Menu_C_SetVisibleSoftLoadingScreen::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function BP_PG_PlayerController_Menu.BP_PG_PlayerController_Menu_C.ShowError
// 0x0030 (0x0030 - 0x0000)
struct BP_PG_PlayerController_Menu_C_ShowError final
{
public:
	class FText                                   ErrorMessage;                                      // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                   ErrorDetails;                                      // 0x0018(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_PG_PlayerController_Menu_C_ShowError) == 0x000008, "Wrong alignment on BP_PG_PlayerController_Menu_C_ShowError");
static_assert(sizeof(BP_PG_PlayerController_Menu_C_ShowError) == 0x000030, "Wrong size on BP_PG_PlayerController_Menu_C_ShowError");
static_assert(offsetof(BP_PG_PlayerController_Menu_C_ShowError, ErrorMessage) == 0x000000, "Member 'BP_PG_PlayerController_Menu_C_ShowError::ErrorMessage' has a wrong offset!");
static_assert(offsetof(BP_PG_PlayerController_Menu_C_ShowError, ErrorDetails) == 0x000018, "Member 'BP_PG_PlayerController_Menu_C_ShowError::ErrorDetails' has a wrong offset!");

}

