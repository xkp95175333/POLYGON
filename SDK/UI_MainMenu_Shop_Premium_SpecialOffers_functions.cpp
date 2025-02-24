#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_MainMenu_Shop_Premium_SpecialOffers

#include "Basic.hpp"

#include "UI_MainMenu_Shop_Premium_SpecialOffers_classes.hpp"
#include "UI_MainMenu_Shop_Premium_SpecialOffers_parameters.hpp"


namespace SDK
{

// Function UI_MainMenu_Shop_Premium_SpecialOffers.UI_MainMenu_Shop_Premium_SpecialOffers_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_MainMenu_Shop_Premium_SpecialOffers_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MainMenu_Shop_Premium_SpecialOffers_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_MainMenu_Shop_Premium_SpecialOffers.UI_MainMenu_Shop_Premium_SpecialOffers_C.ExecuteUbergraph_UI_MainMenu_Shop_Premium_SpecialOffers
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_Shop_Premium_SpecialOffers_C::ExecuteUbergraph_UI_MainMenu_Shop_Premium_SpecialOffers(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MainMenu_Shop_Premium_SpecialOffers_C", "ExecuteUbergraph_UI_MainMenu_Shop_Premium_SpecialOffers");

	Params::UI_MainMenu_Shop_Premium_SpecialOffers_C_ExecuteUbergraph_UI_MainMenu_Shop_Premium_SpecialOffers Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_MainMenu_Shop_Premium_SpecialOffers.UI_MainMenu_Shop_Premium_SpecialOffers_C.OnUpdatePlayerCombinedInfo_Event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<EModifiedData>                   ModifiedData                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                           CustomString                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUI_MainMenu_Shop_Premium_SpecialOffers_C::OnUpdatePlayerCombinedInfo_Event(const TArray<EModifiedData>& ModifiedData, const class FString& CustomString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MainMenu_Shop_Premium_SpecialOffers_C", "OnUpdatePlayerCombinedInfo_Event");

	Params::UI_MainMenu_Shop_Premium_SpecialOffers_C_OnUpdatePlayerCombinedInfo_Event Parms{};

	Parms.ModifiedData = std::move(ModifiedData);
	Parms.CustomString = std::move(CustomString);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_MainMenu_Shop_Premium_SpecialOffers.UI_MainMenu_Shop_Premium_SpecialOffers_C.RemoveOfferByClass
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           OfferClass                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_Shop_Premium_SpecialOffers_C::RemoveOfferByClass(class UClass* OfferClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MainMenu_Shop_Premium_SpecialOffers_C", "RemoveOfferByClass");

	Params::UI_MainMenu_Shop_Premium_SpecialOffers_C_RemoveOfferByClass Parms{};

	Parms.OfferClass = OfferClass;

	UObject::ProcessEvent(Func, &Parms);
}

}

