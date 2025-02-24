#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Task_FOVManagerComponent_AimingInterpolation

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Actions_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Task_FOVManagerComponent_AimingInterpolation.Task_FOVManagerComponent_AimingInterpolation_C
// 0x0058 (0x0100 - 0x00A8)
class UTask_FOVManagerComponent_AimingInterpolation_C final : public UAction
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWeaponComponent*                       WeaponComponent;                                   // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Delta_Time;                                        // 0x00B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E7F[0x4];                                     // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AItem_Module_Optic*                     Optic;                                             // 0x00C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         StartCameraFOV;                                    // 0x00C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StartMeshFOV;                                      // 0x00CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        EndCameraFOV;                                      // 0x00D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        EndMeshFOV;                                        // 0x00D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_FOVManagerComponent_Game_C*         FOVManagerComponent;                               // 0x00E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          InitialAimingState;                                // 0x00E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E80[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            CurveFOV;                                          // 0x00F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         CurveAlpha;                                        // 0x00F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Aim_Down_Time_Multiplier;                          // 0x00FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Task_FOVManagerComponent_AimingInterpolation(int32 EntryPoint);
	void ReceiveActivate();
	void ReceiveTick(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Task_FOVManagerComponent_AimingInterpolation_C">();
	}
	static class UTask_FOVManagerComponent_AimingInterpolation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTask_FOVManagerComponent_AimingInterpolation_C>();
	}
};
static_assert(alignof(UTask_FOVManagerComponent_AimingInterpolation_C) == 0x000008, "Wrong alignment on UTask_FOVManagerComponent_AimingInterpolation_C");
static_assert(sizeof(UTask_FOVManagerComponent_AimingInterpolation_C) == 0x000100, "Wrong size on UTask_FOVManagerComponent_AimingInterpolation_C");
static_assert(offsetof(UTask_FOVManagerComponent_AimingInterpolation_C, UberGraphFrame) == 0x0000A8, "Member 'UTask_FOVManagerComponent_AimingInterpolation_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTask_FOVManagerComponent_AimingInterpolation_C, WeaponComponent) == 0x0000B0, "Member 'UTask_FOVManagerComponent_AimingInterpolation_C::WeaponComponent' has a wrong offset!");
static_assert(offsetof(UTask_FOVManagerComponent_AimingInterpolation_C, Delta_Time) == 0x0000B8, "Member 'UTask_FOVManagerComponent_AimingInterpolation_C::Delta_Time' has a wrong offset!");
static_assert(offsetof(UTask_FOVManagerComponent_AimingInterpolation_C, Optic) == 0x0000C0, "Member 'UTask_FOVManagerComponent_AimingInterpolation_C::Optic' has a wrong offset!");
static_assert(offsetof(UTask_FOVManagerComponent_AimingInterpolation_C, StartCameraFOV) == 0x0000C8, "Member 'UTask_FOVManagerComponent_AimingInterpolation_C::StartCameraFOV' has a wrong offset!");
static_assert(offsetof(UTask_FOVManagerComponent_AimingInterpolation_C, StartMeshFOV) == 0x0000CC, "Member 'UTask_FOVManagerComponent_AimingInterpolation_C::StartMeshFOV' has a wrong offset!");
static_assert(offsetof(UTask_FOVManagerComponent_AimingInterpolation_C, EndCameraFOV) == 0x0000D0, "Member 'UTask_FOVManagerComponent_AimingInterpolation_C::EndCameraFOV' has a wrong offset!");
static_assert(offsetof(UTask_FOVManagerComponent_AimingInterpolation_C, EndMeshFOV) == 0x0000D8, "Member 'UTask_FOVManagerComponent_AimingInterpolation_C::EndMeshFOV' has a wrong offset!");
static_assert(offsetof(UTask_FOVManagerComponent_AimingInterpolation_C, FOVManagerComponent) == 0x0000E0, "Member 'UTask_FOVManagerComponent_AimingInterpolation_C::FOVManagerComponent' has a wrong offset!");
static_assert(offsetof(UTask_FOVManagerComponent_AimingInterpolation_C, InitialAimingState) == 0x0000E8, "Member 'UTask_FOVManagerComponent_AimingInterpolation_C::InitialAimingState' has a wrong offset!");
static_assert(offsetof(UTask_FOVManagerComponent_AimingInterpolation_C, CurveFOV) == 0x0000F0, "Member 'UTask_FOVManagerComponent_AimingInterpolation_C::CurveFOV' has a wrong offset!");
static_assert(offsetof(UTask_FOVManagerComponent_AimingInterpolation_C, CurveAlpha) == 0x0000F8, "Member 'UTask_FOVManagerComponent_AimingInterpolation_C::CurveAlpha' has a wrong offset!");
static_assert(offsetof(UTask_FOVManagerComponent_AimingInterpolation_C, Aim_Down_Time_Multiplier) == 0x0000FC, "Member 'UTask_FOVManagerComponent_AimingInterpolation_C::Aim_Down_Time_Multiplier' has a wrong offset!");

}

