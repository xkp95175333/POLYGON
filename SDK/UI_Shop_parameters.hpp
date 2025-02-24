#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Shop

#include "Basic.hpp"

#include "POLYGON_structs.hpp"


namespace SDK::Params
{

// Function UI_Shop.UI_Shop_C.BndEvt__UI_Button_Weapon_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_Shop_C_BndEvt__UI_Button_Weapon_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature final
{
public:
	class UUI_Button_C*                           Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Shop_C_BndEvt__UI_Button_Weapon_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature) == 0x000008, "Wrong alignment on UI_Shop_C_BndEvt__UI_Button_Weapon_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature");
static_assert(sizeof(UI_Shop_C_BndEvt__UI_Button_Weapon_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature) == 0x000008, "Wrong size on UI_Shop_C_BndEvt__UI_Button_Weapon_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature");
static_assert(offsetof(UI_Shop_C_BndEvt__UI_Button_Weapon_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature, Button) == 0x000000, "Member 'UI_Shop_C_BndEvt__UI_Button_Weapon_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature::Button' has a wrong offset!");

// Function UI_Shop.UI_Shop_C.BndEvt__UI_Shop_UI_Button_Best_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_Shop_C_BndEvt__UI_Shop_UI_Button_Best_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature final
{
public:
	class UUI_Button_C*                           Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Shop_C_BndEvt__UI_Shop_UI_Button_Best_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature) == 0x000008, "Wrong alignment on UI_Shop_C_BndEvt__UI_Shop_UI_Button_Best_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");
static_assert(sizeof(UI_Shop_C_BndEvt__UI_Shop_UI_Button_Best_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature) == 0x000008, "Wrong size on UI_Shop_C_BndEvt__UI_Shop_UI_Button_Best_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");
static_assert(offsetof(UI_Shop_C_BndEvt__UI_Shop_UI_Button_Best_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature, Button) == 0x000000, "Member 'UI_Shop_C_BndEvt__UI_Shop_UI_Button_Best_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature::Button' has a wrong offset!");

// Function UI_Shop.UI_Shop_C.BndEvt__UI_Shop_UI_Button_Premium_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_Shop_C_BndEvt__UI_Shop_UI_Button_Premium_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature final
{
public:
	class UUI_Button_C*                           Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Shop_C_BndEvt__UI_Shop_UI_Button_Premium_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature) == 0x000008, "Wrong alignment on UI_Shop_C_BndEvt__UI_Shop_UI_Button_Premium_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");
static_assert(sizeof(UI_Shop_C_BndEvt__UI_Shop_UI_Button_Premium_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature) == 0x000008, "Wrong size on UI_Shop_C_BndEvt__UI_Shop_UI_Button_Premium_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");
static_assert(offsetof(UI_Shop_C_BndEvt__UI_Shop_UI_Button_Premium_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature, Button) == 0x000000, "Member 'UI_Shop_C_BndEvt__UI_Shop_UI_Button_Premium_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature::Button' has a wrong offset!");

// Function UI_Shop.UI_Shop_C.DiselectAllButtonsInHeader
// 0x0048 (0x0048 - 0x0000)
struct UI_Shop_C_DiselectAllButtonsInHeader final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_386B[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_386C[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_386D[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_Button_C*                           K2Node_DynamicCast_AsUI_Button;                    // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Shop_C_DiselectAllButtonsInHeader) == 0x000008, "Wrong alignment on UI_Shop_C_DiselectAllButtonsInHeader");
static_assert(sizeof(UI_Shop_C_DiselectAllButtonsInHeader) == 0x000048, "Wrong size on UI_Shop_C_DiselectAllButtonsInHeader");
static_assert(offsetof(UI_Shop_C_DiselectAllButtonsInHeader, Temp_int_Array_Index_Variable) == 0x000000, "Member 'UI_Shop_C_DiselectAllButtonsInHeader::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_DiselectAllButtonsInHeader, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'UI_Shop_C_DiselectAllButtonsInHeader::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_DiselectAllButtonsInHeader, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'UI_Shop_C_DiselectAllButtonsInHeader::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_DiselectAllButtonsInHeader, CallFunc_GetAllChildren_ReturnValue) == 0x000010, "Member 'UI_Shop_C_DiselectAllButtonsInHeader::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_DiselectAllButtonsInHeader, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'UI_Shop_C_DiselectAllButtonsInHeader::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_DiselectAllButtonsInHeader, CallFunc_Array_Get_Item) == 0x000028, "Member 'UI_Shop_C_DiselectAllButtonsInHeader::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_DiselectAllButtonsInHeader, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'UI_Shop_C_DiselectAllButtonsInHeader::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_DiselectAllButtonsInHeader, K2Node_DynamicCast_AsUI_Button) == 0x000038, "Member 'UI_Shop_C_DiselectAllButtonsInHeader::K2Node_DynamicCast_AsUI_Button' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_DiselectAllButtonsInHeader, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'UI_Shop_C_DiselectAllButtonsInHeader::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function UI_Shop.UI_Shop_C.ExecuteUbergraph_UI_Shop
// 0x0078 (0x0078 - 0x0000)
struct UI_Shop_C_ExecuteUbergraph_UI_Shop final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(TArray<EModifiedData>& ModifiedData, const class FString& CustomString)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_386E[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_Button_C*                           K2Node_ComponentBoundEvent_Button_2;               // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<EModifiedData>                         K2Node_CustomEvent_ModifiedData;                   // 0x0028(0x0010)(ConstParm, ReferenceParm)
	class FString                                 K2Node_CustomEvent_CustomString;                   // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ABP_PG_PlayerState_Menu_C*              K2Node_DynamicCast_AsBP_PG_Player_State_Menu;      // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_386F[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayFabJsonObject*                     CallFunc_GetPlayerCombinedInfo_ReturnValue;        // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUI_Button_C*                           K2Node_ComponentBoundEvent_Button_1;               // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3870[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_Button_C*                           K2Node_ComponentBoundEvent_Button;                 // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Shop_C_ExecuteUbergraph_UI_Shop) == 0x000008, "Wrong alignment on UI_Shop_C_ExecuteUbergraph_UI_Shop");
static_assert(sizeof(UI_Shop_C_ExecuteUbergraph_UI_Shop) == 0x000078, "Wrong size on UI_Shop_C_ExecuteUbergraph_UI_Shop");
static_assert(offsetof(UI_Shop_C_ExecuteUbergraph_UI_Shop, EntryPoint) == 0x000000, "Member 'UI_Shop_C_ExecuteUbergraph_UI_Shop::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ExecuteUbergraph_UI_Shop, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'UI_Shop_C_ExecuteUbergraph_UI_Shop::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ExecuteUbergraph_UI_Shop, Temp_bool_Has_Been_Initd_Variable) == 0x000014, "Member 'UI_Shop_C_ExecuteUbergraph_UI_Shop::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ExecuteUbergraph_UI_Shop, Temp_bool_IsClosed_Variable) == 0x000015, "Member 'UI_Shop_C_ExecuteUbergraph_UI_Shop::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ExecuteUbergraph_UI_Shop, K2Node_ComponentBoundEvent_Button_2) == 0x000018, "Member 'UI_Shop_C_ExecuteUbergraph_UI_Shop::K2Node_ComponentBoundEvent_Button_2' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ExecuteUbergraph_UI_Shop, CallFunc_GetOwningPlayer_ReturnValue) == 0x000020, "Member 'UI_Shop_C_ExecuteUbergraph_UI_Shop::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ExecuteUbergraph_UI_Shop, K2Node_CustomEvent_ModifiedData) == 0x000028, "Member 'UI_Shop_C_ExecuteUbergraph_UI_Shop::K2Node_CustomEvent_ModifiedData' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ExecuteUbergraph_UI_Shop, K2Node_CustomEvent_CustomString) == 0x000038, "Member 'UI_Shop_C_ExecuteUbergraph_UI_Shop::K2Node_CustomEvent_CustomString' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ExecuteUbergraph_UI_Shop, K2Node_DynamicCast_AsBP_PG_Player_State_Menu) == 0x000048, "Member 'UI_Shop_C_ExecuteUbergraph_UI_Shop::K2Node_DynamicCast_AsBP_PG_Player_State_Menu' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ExecuteUbergraph_UI_Shop, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'UI_Shop_C_ExecuteUbergraph_UI_Shop::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ExecuteUbergraph_UI_Shop, CallFunc_GetPlayerCombinedInfo_ReturnValue) == 0x000058, "Member 'UI_Shop_C_ExecuteUbergraph_UI_Shop::CallFunc_GetPlayerCombinedInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ExecuteUbergraph_UI_Shop, K2Node_ComponentBoundEvent_Button_1) == 0x000060, "Member 'UI_Shop_C_ExecuteUbergraph_UI_Shop::K2Node_ComponentBoundEvent_Button_1' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ExecuteUbergraph_UI_Shop, CallFunc_IsValid_ReturnValue) == 0x000068, "Member 'UI_Shop_C_ExecuteUbergraph_UI_Shop::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ExecuteUbergraph_UI_Shop, K2Node_ComponentBoundEvent_Button) == 0x000070, "Member 'UI_Shop_C_ExecuteUbergraph_UI_Shop::K2Node_ComponentBoundEvent_Button' has a wrong offset!");

// Function UI_Shop.UI_Shop_C.OnUpdatePlayerCombinedInfo_Event
// 0x0020 (0x0020 - 0x0000)
struct UI_Shop_C_OnUpdatePlayerCombinedInfo_Event final
{
public:
	TArray<EModifiedData>                         ModifiedData;                                      // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                 CustomString;                                      // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Shop_C_OnUpdatePlayerCombinedInfo_Event) == 0x000008, "Wrong alignment on UI_Shop_C_OnUpdatePlayerCombinedInfo_Event");
static_assert(sizeof(UI_Shop_C_OnUpdatePlayerCombinedInfo_Event) == 0x000020, "Wrong size on UI_Shop_C_OnUpdatePlayerCombinedInfo_Event");
static_assert(offsetof(UI_Shop_C_OnUpdatePlayerCombinedInfo_Event, ModifiedData) == 0x000000, "Member 'UI_Shop_C_OnUpdatePlayerCombinedInfo_Event::ModifiedData' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_OnUpdatePlayerCombinedInfo_Event, CustomString) == 0x000010, "Member 'UI_Shop_C_OnUpdatePlayerCombinedInfo_Event::CustomString' has a wrong offset!");

// Function UI_Shop.UI_Shop_C.ParsePlayerCombinedInfo
// 0x0148 (0x0148 - 0x0000)
struct UI_Shop_C_ParsePlayerCombinedInfo final
{
public:
	int32                                         L_PlayerLevel;                                     // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3871[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_ShopItem_C*                         L_ShopItem;                                        // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3872[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable_1;        // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3873[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3874[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3875[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UUI_ShopItem_C*>                 CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x0040(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UUI_ShopItem_C*                         CallFunc_Array_Get_Item;                           // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3876[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3877[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayFabJsonObject*                     CallFunc_GetPlayerCombinedInfo_ReturnValue;        // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                     CallFunc_GetPlayerCombinedInfo_ReturnValue_1;      // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UPlayFabJsonObject*>             CallFunc_GetObjectArrayField_ReturnValue;          // 0x0080(0x0010)(ReferenceParm)
	TArray<class UPlayFabJsonObject*>             CallFunc_GetObjectArrayField_ReturnValue_1;        // 0x0090(0x0010)(ReferenceParm)
	class UPlayFabJsonObject*                     CallFunc_Array_Get_Item_1;                         // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                     CallFunc_Array_Get_Item_2;                         // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetNumberField_ReturnValue;               // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3878[0x4];                                     // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetStringField_ReturnValue;               // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Round_ReturnValue;                        // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3879[0x3];                                     // 0x00CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLevelInfo                             CallFunc_GetLevelByProgress_ReturnValue;           // 0x00D0(0x0048)()
	class FString                                 CallFunc_GetStringField_ReturnValue_1;             // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_387A[0x3];                                     // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_387B[0x3];                                     // 0x0131(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x013A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_387C[0x5];                                     // 0x013B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Round_A_ImplicitCast;                     // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Shop_C_ParsePlayerCombinedInfo) == 0x000008, "Wrong alignment on UI_Shop_C_ParsePlayerCombinedInfo");
static_assert(sizeof(UI_Shop_C_ParsePlayerCombinedInfo) == 0x000148, "Wrong size on UI_Shop_C_ParsePlayerCombinedInfo");
static_assert(offsetof(UI_Shop_C_ParsePlayerCombinedInfo, L_PlayerLevel) == 0x000000, "Member 'UI_Shop_C_ParsePlayerCombinedInfo::L_PlayerLevel' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ParsePlayerCombinedInfo, L_ShopItem) == 0x000008, "Member 'UI_Shop_C_ParsePlayerCombinedInfo::L_ShopItem' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ParsePlayerCombinedInfo, Temp_int_Array_Index_Variable) == 0x000010, "Member 'UI_Shop_C_ParsePlayerCombinedInfo::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ParsePlayerCombinedInfo, Temp_bool_True_if_break_was_hit_Variable) == 0x000014, "Member 'UI_Shop_C_ParsePlayerCombinedInfo::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ParsePlayerCombinedInfo, CallFunc_Not_PreBool_ReturnValue) == 0x000015, "Member 'UI_Shop_C_ParsePlayerCombinedInfo::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ParsePlayerCombinedInfo, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'UI_Shop_C_ParsePlayerCombinedInfo::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ParsePlayerCombinedInfo, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'UI_Shop_C_ParsePlayerCombinedInfo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ParsePlayerCombinedInfo, Temp_bool_True_if_break_was_hit_Variable_1) == 0x000020, "Member 'UI_Shop_C_ParsePlayerCombinedInfo::Temp_bool_True_if_break_was_hit_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ParsePlayerCombinedInfo, Temp_int_Array_Index_Variable_1) == 0x000024, "Member 'UI_Shop_C_ParsePlayerCombinedInfo::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ParsePlayerCombinedInfo, CallFunc_Not_PreBool_ReturnValue_1) == 0x000028, "Member 'UI_Shop_C_ParsePlayerCombinedInfo::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ParsePlayerCombinedInfo, Temp_int_Loop_Counter_Variable_1) == 0x00002C, "Member 'UI_Shop_C_ParsePlayerCombinedInfo::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ParsePlayerCombinedInfo, Temp_int_Array_Index_Variable_2) == 0x000030, "Member 'UI_Shop_C_ParsePlayerCombinedInfo::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ParsePlayerCombinedInfo, CallFunc_Add_IntInt_ReturnValue_1) == 0x000034, "Member 'UI_Shop_C_ParsePlayerCombinedInfo::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ParsePlayerCombinedInfo, CallFunc_Greater_IntInt_ReturnValue) == 0x000038, "Member 'UI_Shop_C_ParsePlayerCombinedInfo::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ParsePlayerCombinedInfo, CallFunc_GetAllWidgetsOfClass_FoundWidgets) == 0x000040, "Member 'UI_Shop_C_ParsePlayerCombinedInfo::CallFunc_GetAllWidgetsOfClass_FoundWidgets' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ParsePlayerCombinedInfo, CallFunc_Array_Get_Item) == 0x000050, "Member 'UI_Shop_C_ParsePlayerCombinedInfo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ParsePlayerCombinedInfo, CallFunc_Array_Length_ReturnValue) == 0x000058, "Member 'UI_Shop_C_ParsePlayerCombinedInfo::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ParsePlayerCombinedInfo, Temp_int_Loop_Counter_Variable_2) == 0x00005C, "Member 'UI_Shop_C_ParsePlayerCombinedInfo::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ParsePlayerCombinedInfo, CallFunc_Less_IntInt_ReturnValue) == 0x000060, "Member 'UI_Shop_C_ParsePlayerCombinedInfo::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ParsePlayerCombinedInfo, CallFunc_Add_IntInt_ReturnValue_2) == 0x000064, "Member 'UI_Shop_C_ParsePlayerCombinedInfo::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ParsePlayerCombinedInfo, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000068, "Member 'UI_Shop_C_ParsePlayerCombinedInfo::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ParsePlayerCombinedInfo, CallFunc_GetPlayerCombinedInfo_ReturnValue) == 0x000070, "Member 'UI_Shop_C_ParsePlayerCombinedInfo::CallFunc_GetPlayerCombinedInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ParsePlayerCombinedInfo, CallFunc_GetPlayerCombinedInfo_ReturnValue_1) == 0x000078, "Member 'UI_Shop_C_ParsePlayerCombinedInfo::CallFunc_GetPlayerCombinedInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ParsePlayerCombinedInfo, CallFunc_GetObjectArrayField_ReturnValue) == 0x000080, "Member 'UI_Shop_C_ParsePlayerCombinedInfo::CallFunc_GetObjectArrayField_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ParsePlayerCombinedInfo, CallFunc_GetObjectArrayField_ReturnValue_1) == 0x000090, "Member 'UI_Shop_C_ParsePlayerCombinedInfo::CallFunc_GetObjectArrayField_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ParsePlayerCombinedInfo, CallFunc_Array_Get_Item_1) == 0x0000A0, "Member 'UI_Shop_C_ParsePlayerCombinedInfo::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ParsePlayerCombinedInfo, CallFunc_Array_Get_Item_2) == 0x0000A8, "Member 'UI_Shop_C_ParsePlayerCombinedInfo::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ParsePlayerCombinedInfo, CallFunc_GetNumberField_ReturnValue) == 0x0000B0, "Member 'UI_Shop_C_ParsePlayerCombinedInfo::CallFunc_GetNumberField_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ParsePlayerCombinedInfo, CallFunc_GetStringField_ReturnValue) == 0x0000B8, "Member 'UI_Shop_C_ParsePlayerCombinedInfo::CallFunc_GetStringField_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ParsePlayerCombinedInfo, CallFunc_Round_ReturnValue) == 0x0000C8, "Member 'UI_Shop_C_ParsePlayerCombinedInfo::CallFunc_Round_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ParsePlayerCombinedInfo, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0000CC, "Member 'UI_Shop_C_ParsePlayerCombinedInfo::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ParsePlayerCombinedInfo, CallFunc_GetLevelByProgress_ReturnValue) == 0x0000D0, "Member 'UI_Shop_C_ParsePlayerCombinedInfo::CallFunc_GetLevelByProgress_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ParsePlayerCombinedInfo, CallFunc_GetStringField_ReturnValue_1) == 0x000118, "Member 'UI_Shop_C_ParsePlayerCombinedInfo::CallFunc_GetStringField_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ParsePlayerCombinedInfo, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x000128, "Member 'UI_Shop_C_ParsePlayerCombinedInfo::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ParsePlayerCombinedInfo, CallFunc_Array_Length_ReturnValue_1) == 0x00012C, "Member 'UI_Shop_C_ParsePlayerCombinedInfo::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ParsePlayerCombinedInfo, CallFunc_Less_IntInt_ReturnValue_1) == 0x000130, "Member 'UI_Shop_C_ParsePlayerCombinedInfo::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ParsePlayerCombinedInfo, CallFunc_Array_Length_ReturnValue_2) == 0x000134, "Member 'UI_Shop_C_ParsePlayerCombinedInfo::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ParsePlayerCombinedInfo, CallFunc_BooleanAND_ReturnValue) == 0x000138, "Member 'UI_Shop_C_ParsePlayerCombinedInfo::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ParsePlayerCombinedInfo, CallFunc_Less_IntInt_ReturnValue_2) == 0x000139, "Member 'UI_Shop_C_ParsePlayerCombinedInfo::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ParsePlayerCombinedInfo, CallFunc_BooleanAND_ReturnValue_1) == 0x00013A, "Member 'UI_Shop_C_ParsePlayerCombinedInfo::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Shop_C_ParsePlayerCombinedInfo, CallFunc_Round_A_ImplicitCast) == 0x000140, "Member 'UI_Shop_C_ParsePlayerCombinedInfo::CallFunc_Round_A_ImplicitCast' has a wrong offset!");

}

