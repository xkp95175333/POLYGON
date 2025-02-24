#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GunCharacteristics_Module

#include "Basic.hpp"

#include "POLYGON_structs.hpp"


namespace SDK::Params
{

// Function UI_GunCharacteristics_Module.UI_GunCharacteristics_Module_C.ExecuteUbergraph_UI_GunCharacteristics_Module
// 0x0118 (0x0118 - 0x0000)
struct UI_GunCharacteristics_Module_C_ExecuteUbergraph_UI_GunCharacteristics_Module final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EGunModuleType                                Temp_byte_Variable;                                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CB0[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0018(0x0018)()
	class FText                                   Temp_text_Variable_1;                              // 0x0030(0x0018)()
	class FText                                   Temp_text_Variable_2;                              // 0x0048(0x0018)()
	class FText                                   Temp_text_Variable_3;                              // 0x0060(0x0018)()
	class FText                                   Temp_text_Variable_4;                              // 0x0078(0x0018)()
	class FText                                   Temp_text_Variable_5;                              // 0x0090(0x0018)()
	class FText                                   Temp_text_Variable_6;                              // 0x00A8(0x0018)()
	class FText                                   Temp_text_Variable_7;                              // 0x00C0(0x0018)()
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CB1[0x6];                                     // 0x00F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_CustomEvent_ModuleClass;                    // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_Select_Default;                             // 0x0100(0x0018)()
};
static_assert(alignof(UI_GunCharacteristics_Module_C_ExecuteUbergraph_UI_GunCharacteristics_Module) == 0x000008, "Wrong alignment on UI_GunCharacteristics_Module_C_ExecuteUbergraph_UI_GunCharacteristics_Module");
static_assert(sizeof(UI_GunCharacteristics_Module_C_ExecuteUbergraph_UI_GunCharacteristics_Module) == 0x000118, "Wrong size on UI_GunCharacteristics_Module_C_ExecuteUbergraph_UI_GunCharacteristics_Module");
static_assert(offsetof(UI_GunCharacteristics_Module_C_ExecuteUbergraph_UI_GunCharacteristics_Module, EntryPoint) == 0x000000, "Member 'UI_GunCharacteristics_Module_C_ExecuteUbergraph_UI_GunCharacteristics_Module::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_GunCharacteristics_Module_C_ExecuteUbergraph_UI_GunCharacteristics_Module, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'UI_GunCharacteristics_Module_C_ExecuteUbergraph_UI_GunCharacteristics_Module::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_GunCharacteristics_Module_C_ExecuteUbergraph_UI_GunCharacteristics_Module, Temp_byte_Variable) == 0x000014, "Member 'UI_GunCharacteristics_Module_C_ExecuteUbergraph_UI_GunCharacteristics_Module::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_GunCharacteristics_Module_C_ExecuteUbergraph_UI_GunCharacteristics_Module, Temp_text_Variable) == 0x000018, "Member 'UI_GunCharacteristics_Module_C_ExecuteUbergraph_UI_GunCharacteristics_Module::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(UI_GunCharacteristics_Module_C_ExecuteUbergraph_UI_GunCharacteristics_Module, Temp_text_Variable_1) == 0x000030, "Member 'UI_GunCharacteristics_Module_C_ExecuteUbergraph_UI_GunCharacteristics_Module::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_GunCharacteristics_Module_C_ExecuteUbergraph_UI_GunCharacteristics_Module, Temp_text_Variable_2) == 0x000048, "Member 'UI_GunCharacteristics_Module_C_ExecuteUbergraph_UI_GunCharacteristics_Module::Temp_text_Variable_2' has a wrong offset!");
static_assert(offsetof(UI_GunCharacteristics_Module_C_ExecuteUbergraph_UI_GunCharacteristics_Module, Temp_text_Variable_3) == 0x000060, "Member 'UI_GunCharacteristics_Module_C_ExecuteUbergraph_UI_GunCharacteristics_Module::Temp_text_Variable_3' has a wrong offset!");
static_assert(offsetof(UI_GunCharacteristics_Module_C_ExecuteUbergraph_UI_GunCharacteristics_Module, Temp_text_Variable_4) == 0x000078, "Member 'UI_GunCharacteristics_Module_C_ExecuteUbergraph_UI_GunCharacteristics_Module::Temp_text_Variable_4' has a wrong offset!");
static_assert(offsetof(UI_GunCharacteristics_Module_C_ExecuteUbergraph_UI_GunCharacteristics_Module, Temp_text_Variable_5) == 0x000090, "Member 'UI_GunCharacteristics_Module_C_ExecuteUbergraph_UI_GunCharacteristics_Module::Temp_text_Variable_5' has a wrong offset!");
static_assert(offsetof(UI_GunCharacteristics_Module_C_ExecuteUbergraph_UI_GunCharacteristics_Module, Temp_text_Variable_6) == 0x0000A8, "Member 'UI_GunCharacteristics_Module_C_ExecuteUbergraph_UI_GunCharacteristics_Module::Temp_text_Variable_6' has a wrong offset!");
static_assert(offsetof(UI_GunCharacteristics_Module_C_ExecuteUbergraph_UI_GunCharacteristics_Module, Temp_text_Variable_7) == 0x0000C0, "Member 'UI_GunCharacteristics_Module_C_ExecuteUbergraph_UI_GunCharacteristics_Module::Temp_text_Variable_7' has a wrong offset!");
static_assert(offsetof(UI_GunCharacteristics_Module_C_ExecuteUbergraph_UI_GunCharacteristics_Module, K2Node_CustomEvent_Loaded) == 0x0000D8, "Member 'UI_GunCharacteristics_Module_C_ExecuteUbergraph_UI_GunCharacteristics_Module::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(UI_GunCharacteristics_Module_C_ExecuteUbergraph_UI_GunCharacteristics_Module, Temp_object_Variable) == 0x0000E0, "Member 'UI_GunCharacteristics_Module_C_ExecuteUbergraph_UI_GunCharacteristics_Module::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(UI_GunCharacteristics_Module_C_ExecuteUbergraph_UI_GunCharacteristics_Module, K2Node_DynamicCast_AsTexture_2D) == 0x0000E8, "Member 'UI_GunCharacteristics_Module_C_ExecuteUbergraph_UI_GunCharacteristics_Module::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(UI_GunCharacteristics_Module_C_ExecuteUbergraph_UI_GunCharacteristics_Module, K2Node_DynamicCast_bSuccess) == 0x0000F0, "Member 'UI_GunCharacteristics_Module_C_ExecuteUbergraph_UI_GunCharacteristics_Module::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_GunCharacteristics_Module_C_ExecuteUbergraph_UI_GunCharacteristics_Module, K2Node_Event_IsDesignTime) == 0x0000F1, "Member 'UI_GunCharacteristics_Module_C_ExecuteUbergraph_UI_GunCharacteristics_Module::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UI_GunCharacteristics_Module_C_ExecuteUbergraph_UI_GunCharacteristics_Module, K2Node_CustomEvent_ModuleClass) == 0x0000F8, "Member 'UI_GunCharacteristics_Module_C_ExecuteUbergraph_UI_GunCharacteristics_Module::K2Node_CustomEvent_ModuleClass' has a wrong offset!");
static_assert(offsetof(UI_GunCharacteristics_Module_C_ExecuteUbergraph_UI_GunCharacteristics_Module, K2Node_Select_Default) == 0x000100, "Member 'UI_GunCharacteristics_Module_C_ExecuteUbergraph_UI_GunCharacteristics_Module::K2Node_Select_Default' has a wrong offset!");

// Function UI_GunCharacteristics_Module.UI_GunCharacteristics_Module_C.OnLoaded_28ADFBD243DD2DEB1FF81BA8F1B6A864
// 0x0008 (0x0008 - 0x0000)
struct UI_GunCharacteristics_Module_C_OnLoaded_28ADFBD243DD2DEB1FF81BA8F1B6A864 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GunCharacteristics_Module_C_OnLoaded_28ADFBD243DD2DEB1FF81BA8F1B6A864) == 0x000008, "Wrong alignment on UI_GunCharacteristics_Module_C_OnLoaded_28ADFBD243DD2DEB1FF81BA8F1B6A864");
static_assert(sizeof(UI_GunCharacteristics_Module_C_OnLoaded_28ADFBD243DD2DEB1FF81BA8F1B6A864) == 0x000008, "Wrong size on UI_GunCharacteristics_Module_C_OnLoaded_28ADFBD243DD2DEB1FF81BA8F1B6A864");
static_assert(offsetof(UI_GunCharacteristics_Module_C_OnLoaded_28ADFBD243DD2DEB1FF81BA8F1B6A864, Loaded) == 0x000000, "Member 'UI_GunCharacteristics_Module_C_OnLoaded_28ADFBD243DD2DEB1FF81BA8F1B6A864::Loaded' has a wrong offset!");

// Function UI_GunCharacteristics_Module.UI_GunCharacteristics_Module_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_GunCharacteristics_Module_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GunCharacteristics_Module_C_PreConstruct) == 0x000001, "Wrong alignment on UI_GunCharacteristics_Module_C_PreConstruct");
static_assert(sizeof(UI_GunCharacteristics_Module_C_PreConstruct) == 0x000001, "Wrong size on UI_GunCharacteristics_Module_C_PreConstruct");
static_assert(offsetof(UI_GunCharacteristics_Module_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_GunCharacteristics_Module_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UI_GunCharacteristics_Module.UI_GunCharacteristics_Module_C.SetModule
// 0x0008 (0x0008 - 0x0000)
struct UI_GunCharacteristics_Module_C_SetModule final
{
public:
	class UClass*                                 ModuleClass;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GunCharacteristics_Module_C_SetModule) == 0x000008, "Wrong alignment on UI_GunCharacteristics_Module_C_SetModule");
static_assert(sizeof(UI_GunCharacteristics_Module_C_SetModule) == 0x000008, "Wrong size on UI_GunCharacteristics_Module_C_SetModule");
static_assert(offsetof(UI_GunCharacteristics_Module_C_SetModule, ModuleClass) == 0x000000, "Member 'UI_GunCharacteristics_Module_C_SetModule::ModuleClass' has a wrong offset!");

}

