#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Weapons

#include "Basic.hpp"


namespace SDK::Params
{

// Function UI_Weapons.UI_Weapons_C.ExecuteUbergraph_UI_Weapons
// 0x0120 (0x0120 - 0x0000)
struct UI_Weapons_C_ExecuteUbergraph_UI_Weapons final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AItem_Gun_General* OldGun)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AItem_Gun_General* OldCurrentGun)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class APawn* OldPawn, class APawn* NewPawn)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0034(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B49[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded_1;                       // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B4A[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable_1;                            // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D_1;                 // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0082(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0083(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B4B[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_4;            // 0x0098(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_PG_Game_Character_C*                K2Node_DynamicCast_AsBP_PG_Game_Character;         // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B4C[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AItem_Gun_General*                      K2Node_CustomEvent_oldGun_1;                       // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_PG_PlayerState_Game_C*              K2Node_DynamicCast_AsBP_PG_Player_State_Game;      // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x00CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00CB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B4D[0x4];                                     // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AItem_Gun_General*                      K2Node_CustomEvent_oldGun;                         // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B4E[0x3];                                     // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class AItem_Gun_General* OldGun)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x00DC(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B4F[0x4];                                     // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AItem_Gun_General*                      K2Node_CustomEvent_OldCurrentGun;                  // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_CustomEvent_OldPawn;                        // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_CustomEvent_NewPawn;                        // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;            // 0x0110(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Weapons_C_ExecuteUbergraph_UI_Weapons) == 0x000008, "Wrong alignment on UI_Weapons_C_ExecuteUbergraph_UI_Weapons");
static_assert(sizeof(UI_Weapons_C_ExecuteUbergraph_UI_Weapons) == 0x000120, "Wrong size on UI_Weapons_C_ExecuteUbergraph_UI_Weapons");
static_assert(offsetof(UI_Weapons_C_ExecuteUbergraph_UI_Weapons, EntryPoint) == 0x000000, "Member 'UI_Weapons_C_ExecuteUbergraph_UI_Weapons::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Weapons_C_ExecuteUbergraph_UI_Weapons, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'UI_Weapons_C_ExecuteUbergraph_UI_Weapons::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_Weapons_C_ExecuteUbergraph_UI_Weapons, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'UI_Weapons_C_ExecuteUbergraph_UI_Weapons::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UI_Weapons_C_ExecuteUbergraph_UI_Weapons, K2Node_CreateDelegate_OutputDelegate_2) == 0x000024, "Member 'UI_Weapons_C_ExecuteUbergraph_UI_Weapons::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(UI_Weapons_C_ExecuteUbergraph_UI_Weapons, K2Node_CreateDelegate_OutputDelegate_3) == 0x000034, "Member 'UI_Weapons_C_ExecuteUbergraph_UI_Weapons::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(UI_Weapons_C_ExecuteUbergraph_UI_Weapons, K2Node_CustomEvent_Loaded_1) == 0x000048, "Member 'UI_Weapons_C_ExecuteUbergraph_UI_Weapons::K2Node_CustomEvent_Loaded_1' has a wrong offset!");
static_assert(offsetof(UI_Weapons_C_ExecuteUbergraph_UI_Weapons, Temp_object_Variable) == 0x000050, "Member 'UI_Weapons_C_ExecuteUbergraph_UI_Weapons::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(UI_Weapons_C_ExecuteUbergraph_UI_Weapons, K2Node_DynamicCast_AsTexture_2D) == 0x000058, "Member 'UI_Weapons_C_ExecuteUbergraph_UI_Weapons::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(UI_Weapons_C_ExecuteUbergraph_UI_Weapons, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'UI_Weapons_C_ExecuteUbergraph_UI_Weapons::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_Weapons_C_ExecuteUbergraph_UI_Weapons, K2Node_CustomEvent_Loaded) == 0x000068, "Member 'UI_Weapons_C_ExecuteUbergraph_UI_Weapons::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(UI_Weapons_C_ExecuteUbergraph_UI_Weapons, Temp_object_Variable_1) == 0x000070, "Member 'UI_Weapons_C_ExecuteUbergraph_UI_Weapons::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_Weapons_C_ExecuteUbergraph_UI_Weapons, K2Node_DynamicCast_AsTexture_2D_1) == 0x000078, "Member 'UI_Weapons_C_ExecuteUbergraph_UI_Weapons::K2Node_DynamicCast_AsTexture_2D_1' has a wrong offset!");
static_assert(offsetof(UI_Weapons_C_ExecuteUbergraph_UI_Weapons, K2Node_DynamicCast_bSuccess_1) == 0x000080, "Member 'UI_Weapons_C_ExecuteUbergraph_UI_Weapons::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UI_Weapons_C_ExecuteUbergraph_UI_Weapons, Temp_bool_IsClosed_Variable) == 0x000081, "Member 'UI_Weapons_C_ExecuteUbergraph_UI_Weapons::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(UI_Weapons_C_ExecuteUbergraph_UI_Weapons, CallFunc_IsValid_ReturnValue) == 0x000082, "Member 'UI_Weapons_C_ExecuteUbergraph_UI_Weapons::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Weapons_C_ExecuteUbergraph_UI_Weapons, Temp_bool_Has_Been_Initd_Variable) == 0x000083, "Member 'UI_Weapons_C_ExecuteUbergraph_UI_Weapons::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(UI_Weapons_C_ExecuteUbergraph_UI_Weapons, CallFunc_GetOwningPlayer_ReturnValue) == 0x000088, "Member 'UI_Weapons_C_ExecuteUbergraph_UI_Weapons::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Weapons_C_ExecuteUbergraph_UI_Weapons, CallFunc_K2_GetPawn_ReturnValue) == 0x000090, "Member 'UI_Weapons_C_ExecuteUbergraph_UI_Weapons::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Weapons_C_ExecuteUbergraph_UI_Weapons, K2Node_CreateDelegate_OutputDelegate_4) == 0x000098, "Member 'UI_Weapons_C_ExecuteUbergraph_UI_Weapons::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(UI_Weapons_C_ExecuteUbergraph_UI_Weapons, K2Node_DynamicCast_AsBP_PG_Game_Character) == 0x0000A8, "Member 'UI_Weapons_C_ExecuteUbergraph_UI_Weapons::K2Node_DynamicCast_AsBP_PG_Game_Character' has a wrong offset!");
static_assert(offsetof(UI_Weapons_C_ExecuteUbergraph_UI_Weapons, K2Node_DynamicCast_bSuccess_2) == 0x0000B0, "Member 'UI_Weapons_C_ExecuteUbergraph_UI_Weapons::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(UI_Weapons_C_ExecuteUbergraph_UI_Weapons, K2Node_CustomEvent_oldGun_1) == 0x0000B8, "Member 'UI_Weapons_C_ExecuteUbergraph_UI_Weapons::K2Node_CustomEvent_oldGun_1' has a wrong offset!");
static_assert(offsetof(UI_Weapons_C_ExecuteUbergraph_UI_Weapons, K2Node_DynamicCast_AsBP_PG_Player_State_Game) == 0x0000C0, "Member 'UI_Weapons_C_ExecuteUbergraph_UI_Weapons::K2Node_DynamicCast_AsBP_PG_Player_State_Game' has a wrong offset!");
static_assert(offsetof(UI_Weapons_C_ExecuteUbergraph_UI_Weapons, K2Node_DynamicCast_bSuccess_3) == 0x0000C8, "Member 'UI_Weapons_C_ExecuteUbergraph_UI_Weapons::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(UI_Weapons_C_ExecuteUbergraph_UI_Weapons, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0000C9, "Member 'UI_Weapons_C_ExecuteUbergraph_UI_Weapons::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Weapons_C_ExecuteUbergraph_UI_Weapons, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x0000CA, "Member 'UI_Weapons_C_ExecuteUbergraph_UI_Weapons::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Weapons_C_ExecuteUbergraph_UI_Weapons, CallFunc_IsValid_ReturnValue_1) == 0x0000CB, "Member 'UI_Weapons_C_ExecuteUbergraph_UI_Weapons::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Weapons_C_ExecuteUbergraph_UI_Weapons, K2Node_CustomEvent_oldGun) == 0x0000D0, "Member 'UI_Weapons_C_ExecuteUbergraph_UI_Weapons::K2Node_CustomEvent_oldGun' has a wrong offset!");
static_assert(offsetof(UI_Weapons_C_ExecuteUbergraph_UI_Weapons, CallFunc_IsValid_ReturnValue_2) == 0x0000D8, "Member 'UI_Weapons_C_ExecuteUbergraph_UI_Weapons::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_Weapons_C_ExecuteUbergraph_UI_Weapons, K2Node_CreateDelegate_OutputDelegate_5) == 0x0000DC, "Member 'UI_Weapons_C_ExecuteUbergraph_UI_Weapons::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(UI_Weapons_C_ExecuteUbergraph_UI_Weapons, K2Node_CustomEvent_OldCurrentGun) == 0x0000F0, "Member 'UI_Weapons_C_ExecuteUbergraph_UI_Weapons::K2Node_CustomEvent_OldCurrentGun' has a wrong offset!");
static_assert(offsetof(UI_Weapons_C_ExecuteUbergraph_UI_Weapons, CallFunc_PlayAnimationForward_ReturnValue) == 0x0000F8, "Member 'UI_Weapons_C_ExecuteUbergraph_UI_Weapons::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Weapons_C_ExecuteUbergraph_UI_Weapons, K2Node_CustomEvent_OldPawn) == 0x000100, "Member 'UI_Weapons_C_ExecuteUbergraph_UI_Weapons::K2Node_CustomEvent_OldPawn' has a wrong offset!");
static_assert(offsetof(UI_Weapons_C_ExecuteUbergraph_UI_Weapons, K2Node_CustomEvent_NewPawn) == 0x000108, "Member 'UI_Weapons_C_ExecuteUbergraph_UI_Weapons::K2Node_CustomEvent_NewPawn' has a wrong offset!");
static_assert(offsetof(UI_Weapons_C_ExecuteUbergraph_UI_Weapons, K2Node_CreateDelegate_OutputDelegate_6) == 0x000110, "Member 'UI_Weapons_C_ExecuteUbergraph_UI_Weapons::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");

// Function UI_Weapons.UI_Weapons_C.OnLoaded_321EB0874E76A481910ADFAA8B0A3201
// 0x0008 (0x0008 - 0x0000)
struct UI_Weapons_C_OnLoaded_321EB0874E76A481910ADFAA8B0A3201 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Weapons_C_OnLoaded_321EB0874E76A481910ADFAA8B0A3201) == 0x000008, "Wrong alignment on UI_Weapons_C_OnLoaded_321EB0874E76A481910ADFAA8B0A3201");
static_assert(sizeof(UI_Weapons_C_OnLoaded_321EB0874E76A481910ADFAA8B0A3201) == 0x000008, "Wrong size on UI_Weapons_C_OnLoaded_321EB0874E76A481910ADFAA8B0A3201");
static_assert(offsetof(UI_Weapons_C_OnLoaded_321EB0874E76A481910ADFAA8B0A3201, Loaded) == 0x000000, "Member 'UI_Weapons_C_OnLoaded_321EB0874E76A481910ADFAA8B0A3201::Loaded' has a wrong offset!");

// Function UI_Weapons.UI_Weapons_C.OnLoaded_E41DF5A1487589D026FEA2ADA77B92A5
// 0x0008 (0x0008 - 0x0000)
struct UI_Weapons_C_OnLoaded_E41DF5A1487589D026FEA2ADA77B92A5 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Weapons_C_OnLoaded_E41DF5A1487589D026FEA2ADA77B92A5) == 0x000008, "Wrong alignment on UI_Weapons_C_OnLoaded_E41DF5A1487589D026FEA2ADA77B92A5");
static_assert(sizeof(UI_Weapons_C_OnLoaded_E41DF5A1487589D026FEA2ADA77B92A5) == 0x000008, "Wrong size on UI_Weapons_C_OnLoaded_E41DF5A1487589D026FEA2ADA77B92A5");
static_assert(offsetof(UI_Weapons_C_OnLoaded_E41DF5A1487589D026FEA2ADA77B92A5, Loaded) == 0x000000, "Member 'UI_Weapons_C_OnLoaded_E41DF5A1487589D026FEA2ADA77B92A5::Loaded' has a wrong offset!");

// Function UI_Weapons.UI_Weapons_C.OnPossessedPawnChanged_Event
// 0x0010 (0x0010 - 0x0000)
struct UI_Weapons_C_OnPossessedPawnChanged_Event final
{
public:
	class APawn*                                  OldPawn;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  NewPawn;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Weapons_C_OnPossessedPawnChanged_Event) == 0x000008, "Wrong alignment on UI_Weapons_C_OnPossessedPawnChanged_Event");
static_assert(sizeof(UI_Weapons_C_OnPossessedPawnChanged_Event) == 0x000010, "Wrong size on UI_Weapons_C_OnPossessedPawnChanged_Event");
static_assert(offsetof(UI_Weapons_C_OnPossessedPawnChanged_Event, OldPawn) == 0x000000, "Member 'UI_Weapons_C_OnPossessedPawnChanged_Event::OldPawn' has a wrong offset!");
static_assert(offsetof(UI_Weapons_C_OnPossessedPawnChanged_Event, NewPawn) == 0x000008, "Member 'UI_Weapons_C_OnPossessedPawnChanged_Event::NewPawn' has a wrong offset!");

// Function UI_Weapons.UI_Weapons_C.OnSetCurrentGun_Event
// 0x0008 (0x0008 - 0x0000)
struct UI_Weapons_C_OnSetCurrentGun_Event final
{
public:
	class AItem_Gun_General*                      OldCurrentGun;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Weapons_C_OnSetCurrentGun_Event) == 0x000008, "Wrong alignment on UI_Weapons_C_OnSetCurrentGun_Event");
static_assert(sizeof(UI_Weapons_C_OnSetCurrentGun_Event) == 0x000008, "Wrong size on UI_Weapons_C_OnSetCurrentGun_Event");
static_assert(offsetof(UI_Weapons_C_OnSetCurrentGun_Event, OldCurrentGun) == 0x000000, "Member 'UI_Weapons_C_OnSetCurrentGun_Event::OldCurrentGun' has a wrong offset!");

// Function UI_Weapons.UI_Weapons_C.OnSetPrimaryGun_Event
// 0x0008 (0x0008 - 0x0000)
struct UI_Weapons_C_OnSetPrimaryGun_Event final
{
public:
	class AItem_Gun_General*                      OldGun;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Weapons_C_OnSetPrimaryGun_Event) == 0x000008, "Wrong alignment on UI_Weapons_C_OnSetPrimaryGun_Event");
static_assert(sizeof(UI_Weapons_C_OnSetPrimaryGun_Event) == 0x000008, "Wrong size on UI_Weapons_C_OnSetPrimaryGun_Event");
static_assert(offsetof(UI_Weapons_C_OnSetPrimaryGun_Event, OldGun) == 0x000000, "Member 'UI_Weapons_C_OnSetPrimaryGun_Event::OldGun' has a wrong offset!");

// Function UI_Weapons.UI_Weapons_C.OnSetSecondaryGun_Event
// 0x0008 (0x0008 - 0x0000)
struct UI_Weapons_C_OnSetSecondaryGun_Event final
{
public:
	class AItem_Gun_General*                      OldGun;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Weapons_C_OnSetSecondaryGun_Event) == 0x000008, "Wrong alignment on UI_Weapons_C_OnSetSecondaryGun_Event");
static_assert(sizeof(UI_Weapons_C_OnSetSecondaryGun_Event) == 0x000008, "Wrong size on UI_Weapons_C_OnSetSecondaryGun_Event");
static_assert(offsetof(UI_Weapons_C_OnSetSecondaryGun_Event, OldGun) == 0x000000, "Member 'UI_Weapons_C_OnSetSecondaryGun_Event::OldGun' has a wrong offset!");

}

