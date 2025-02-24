#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Menu_Squad_Friend

#include "Basic.hpp"

#include "UI_Menu_Squad_Friend_classes.hpp"
#include "UI_Menu_Squad_Friend_parameters.hpp"


namespace SDK
{

// Function UI_Menu_Squad_Friend.UI_Menu_Squad_Friend_C.BndEvt__UI_Squad_Friend_Button_Invite_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Menu_Squad_Friend_C::BndEvt__UI_Squad_Friend_Button_Invite_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Menu_Squad_Friend_C", "BndEvt__UI_Squad_Friend_Button_Invite_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Menu_Squad_Friend.UI_Menu_Squad_Friend_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void UUI_Menu_Squad_Friend_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Menu_Squad_Friend_C", "BP_OnEntryReleased");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Menu_Squad_Friend.UI_Menu_Squad_Friend_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsExpanded                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Squad_Friend_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Menu_Squad_Friend_C", "BP_OnItemExpansionChanged");

	Params::UI_Menu_Squad_Friend_C_BP_OnItemExpansionChanged Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Menu_Squad_Friend.UI_Menu_Squad_Friend_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsSelected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Squad_Friend_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Menu_Squad_Friend_C", "BP_OnItemSelectionChanged");

	Params::UI_Menu_Squad_Friend_C_BP_OnItemSelectionChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Menu_Squad_Friend.UI_Menu_Squad_Friend_C.ExecuteUbergraph_UI_Menu_Squad_Friend
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Squad_Friend_C::ExecuteUbergraph_UI_Menu_Squad_Friend(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Menu_Squad_Friend_C", "ExecuteUbergraph_UI_Menu_Squad_Friend");

	Params::UI_Menu_Squad_Friend_C_ExecuteUbergraph_UI_Menu_Squad_Friend Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Menu_Squad_Friend.UI_Menu_Squad_Friend_C.OnGetAvatar_Event
// (BlueprintCallable, BlueprintEvent)

void UUI_Menu_Squad_Friend_C::OnGetAvatar_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Menu_Squad_Friend_C", "OnGetAvatar_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Menu_Squad_Friend.UI_Menu_Squad_Friend_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                          ListItemObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Squad_Friend_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Menu_Squad_Friend_C", "OnListItemObjectSet");

	Params::UI_Menu_Squad_Friend_C_OnListItemObjectSet Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Menu_Squad_Friend.UI_Menu_Squad_Friend_C.OnPartyExited_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl                 LocalUserId                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPartyId*                         PartyId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Squad_Friend_C::OnPartyExited_Event(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Menu_Squad_Friend_C", "OnPartyExited_Event");

	Params::UI_Menu_Squad_Friend_C_OnPartyExited_Event Parms{};

	Parms.LocalUserId = std::move(LocalUserId);
	Parms.PartyId = PartyId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Menu_Squad_Friend.UI_Menu_Squad_Friend_C.OnPartyJoined_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl                 LocalUserId                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPartyId*                         PartyId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Squad_Friend_C::OnPartyJoined_Event(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Menu_Squad_Friend_C", "OnPartyJoined_Event");

	Params::UI_Menu_Squad_Friend_C_OnPartyJoined_Event Parms{};

	Parms.LocalUserId = std::move(LocalUserId);
	Parms.PartyId = PartyId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Menu_Squad_Friend.UI_Menu_Squad_Friend_C.OnPartyMemberExited_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl                 LocalUserId                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPartyId*                         PartyId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl                 MemberId                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// EMemberExitedReason_                    Reason                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Squad_Friend_C::OnPartyMemberExited_Event(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const struct FUniqueNetIdRepl& MemberId, EMemberExitedReason_ Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Menu_Squad_Friend_C", "OnPartyMemberExited_Event");

	Params::UI_Menu_Squad_Friend_C_OnPartyMemberExited_Event Parms{};

	Parms.LocalUserId = std::move(LocalUserId);
	Parms.PartyId = PartyId;
	Parms.MemberId = std::move(MemberId);
	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Menu_Squad_Friend.UI_Menu_Squad_Friend_C.OnPartyMemberJoined_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl                 LocalUserId                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPartyId*                         PartyId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl                 MemberId                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UUI_Menu_Squad_Friend_C::OnPartyMemberJoined_Event(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const struct FUniqueNetIdRepl& MemberId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Menu_Squad_Friend_C", "OnPartyMemberJoined_Event");

	Params::UI_Menu_Squad_Friend_C_OnPartyMemberJoined_Event Parms{};

	Parms.LocalUserId = std::move(LocalUserId);
	Parms.PartyId = PartyId;
	Parms.MemberId = std::move(MemberId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Menu_Squad_Friend.UI_Menu_Squad_Friend_C.OnPresenceUpdated_Event
// (BlueprintCallable, BlueprintEvent)

void UUI_Menu_Squad_Friend_C::OnPresenceUpdated_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Menu_Squad_Friend_C", "OnPresenceUpdated_Event");

	UObject::ProcessEvent(Func, nullptr);
}

}

