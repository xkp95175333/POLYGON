#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Scoreboard_Player_Menu_Report

#include "Basic.hpp"

#include "UI_Scoreboard_Player_Menu_Report_classes.hpp"
#include "UI_Scoreboard_Player_Menu_Report_parameters.hpp"


namespace SDK
{

// Function UI_Scoreboard_Player_Menu_Report.UI_Scoreboard_Player_Menu_Report_C.BndEvt__UI_Scoreboard_Player_Menu_Report_Button_Cheater_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Scoreboard_Player_Menu_Report_C::BndEvt__UI_Scoreboard_Player_Menu_Report_Button_Cheater_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Scoreboard_Player_Menu_Report_C", "BndEvt__UI_Scoreboard_Player_Menu_Report_Button_Cheater_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Scoreboard_Player_Menu_Report.UI_Scoreboard_Player_Menu_Report_C.BndEvt__UI_Scoreboard_Player_Menu_Report_Button_Toxic_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Scoreboard_Player_Menu_Report_C::BndEvt__UI_Scoreboard_Player_Menu_Report_Button_Toxic_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Scoreboard_Player_Menu_Report_C", "BndEvt__UI_Scoreboard_Player_Menu_Report_Button_Toxic_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Scoreboard_Player_Menu_Report.UI_Scoreboard_Player_Menu_Report_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Scoreboard_Player_Menu_Report_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Scoreboard_Player_Menu_Report_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Scoreboard_Player_Menu_Report.UI_Scoreboard_Player_Menu_Report_C.ExecuteUbergraph_UI_Scoreboard_Player_Menu_Report
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Scoreboard_Player_Menu_Report_C::ExecuteUbergraph_UI_Scoreboard_Player_Menu_Report(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Scoreboard_Player_Menu_Report_C", "ExecuteUbergraph_UI_Scoreboard_Player_Menu_Report");

	Params::UI_Scoreboard_Player_Menu_Report_C_ExecuteUbergraph_UI_Scoreboard_Player_Menu_Report Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Scoreboard_Player_Menu_Report.UI_Scoreboard_Player_Menu_Report_C.OnMouseButtonDown_Background
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UUI_Scoreboard_Player_Menu_Report_C::OnMouseButtonDown_Background(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Scoreboard_Player_Menu_Report_C", "OnMouseButtonDown_Background");

	Params::UI_Scoreboard_Player_Menu_Report_C_OnMouseButtonDown_Background Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_Scoreboard_Player_Menu_Report.UI_Scoreboard_Player_Menu_Report_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_Scoreboard_Player_Menu_Report_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Scoreboard_Player_Menu_Report_C", "OnMouseLeave");

	Params::UI_Scoreboard_Player_Menu_Report_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Scoreboard_Player_Menu_Report.UI_Scoreboard_Player_Menu_Report_C.OnPlayFabResponse_860D98224F067764473B2486553C01BB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabBaseModel                Response                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                          CustomData                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Successful                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Scoreboard_Player_Menu_Report_C::OnPlayFabResponse_860D98224F067764473B2486553C01BB(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Scoreboard_Player_Menu_Report_C", "OnPlayFabResponse_860D98224F067764473B2486553C01BB");

	Params::UI_Scoreboard_Player_Menu_Report_C_OnPlayFabResponse_860D98224F067764473B2486553C01BB Parms{};

	Parms.Response = std::move(Response);
	Parms.CustomData = CustomData;
	Parms.Successful = Successful;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Scoreboard_Player_Menu_Report.UI_Scoreboard_Player_Menu_Report_C.SendReport
// (BlueprintCallable, BlueprintEvent)

void UUI_Scoreboard_Player_Menu_Report_C::SendReport()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Scoreboard_Player_Menu_Report_C", "SendReport");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Scoreboard_Player_Menu_Report.UI_Scoreboard_Player_Menu_Report_C.SendReport_Failure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabError                    Error                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                          CustomData                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Scoreboard_Player_Menu_Report_C::SendReport_Failure(const struct FPlayFabError& Error, class UObject* CustomData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Scoreboard_Player_Menu_Report_C", "SendReport_Failure");

	Params::UI_Scoreboard_Player_Menu_Report_C_SendReport_Failure Parms{};

	Parms.Error = std::move(Error);
	Parms.CustomData = CustomData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Scoreboard_Player_Menu_Report.UI_Scoreboard_Player_Menu_Report_C.SendReport_Success
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FClientReportPlayerClientResult  Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UObject*                          CustomData                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Scoreboard_Player_Menu_Report_C::SendReport_Success(const struct FClientReportPlayerClientResult& Result, class UObject* CustomData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Scoreboard_Player_Menu_Report_C", "SendReport_Success");

	Params::UI_Scoreboard_Player_Menu_Report_C_SendReport_Success Parms{};

	Parms.Result = std::move(Result);
	Parms.CustomData = CustomData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Scoreboard_Player_Menu_Report.UI_Scoreboard_Player_Menu_Report_C.SetFocusToScoreboard
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Scoreboard_Player_Menu_Report_C::SetFocusToScoreboard()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Scoreboard_Player_Menu_Report_C", "SetFocusToScoreboard");

	UObject::ProcessEvent(Func, nullptr);
}

}

