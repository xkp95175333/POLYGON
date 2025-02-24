#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Menu_Squad

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "OnlineSubsystemBlueprints_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Menu_Squad.UI_Menu_Squad_C
// 0x00D0 (0x0350 - 0x0280)
class UUI_Menu_Squad_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       MainButtonAnimation;                               // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ShowAnimation;                                     // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                Button_Friends;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_Open;                                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_Squad;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_FriendButton_Background;                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_NumMembers_2;                                // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_NumMembers_3;                                // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_NumMembers_4;                                // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_NumMembers_5;                                // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_SquadButton_Background;                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListView*                              ListView_Friends;                                  // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Menu_Squad_PlayerSlot_C*            UI_Squad_PlayerSlot_1;                             // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Menu_Squad_PlayerSlot_C*            UI_Squad_PlayerSlot_2;                             // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Menu_Squad_PlayerSlot_C*            UI_Squad_PlayerSlot_3;                             // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Menu_Squad_PlayerSlot_C*            UI_Squad_PlayerSlot_4;                             // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Menu_Squad_PlayerSlot_C*            UI_Squad_PlayerSlot_5;                             // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_Squad;                                 // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_FriendButton;                       // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Main;                               // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_SquadButton;                        // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPartyId*                               JoinedSquad;                                       // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          CreatingParty;                                     // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3454[0x7];                                     // 0x0339(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FUniqueNetIdRepl>               PendingSquadInvitations;                           // 0x0340(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void BndEvt__UI_Menu_Squad_Button_Friends_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_Menu_Squad_Button_Friends_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_Menu_Squad_Button_Open_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__UI_Menu_Squad_Button_Squad_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_Menu_Squad_Button_Squad_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_Squad_Button_Friends_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_Squad_Button_Squad_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_UI_Menu_Squad(int32 EntryPoint);
	void FillFriendList();
	void InviteToSquad(class UUI_Menu_Squad_Friend_C* Friend);
	void IsLocalUserLeader(bool* IsLeader);
	void ListenDelegates();
	void OnCallFailed_7344AF7C4DC39CD5996EB9A5A37BA7B0(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, ECreatePartyCompletionResult_ Result);
	void OnCallFailed_94AC82684142D04BA97792A8E5D78A1C(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, ELeavePartyCompletionResult_ Result);
	void OnCallFailed_EB4EDC7641FBC8F8B24CE39924CD81D1(int32 LocalUserNum, bool bWasSuccessful, const class FString& ListName, const class FString& ErrorStr);
	void OnCallFailed_FA4D34474260B64CA0DD95B03A080BB3(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const struct FUniqueNetIdRepl& RecipientId, ESendPartyInvitationCompletionResult_ Result);
	void OnCreatePartyComplete_7344AF7C4DC39CD5996EB9A5A37BA7B0(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, ECreatePartyCompletionResult_ Result);
	void OnLeavePartyComplete_94AC82684142D04BA97792A8E5D78A1C(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, ELeavePartyCompletionResult_ Result);
	void OnLoginComplete_Event(int32 LocalUserNum, bool bWasSuccessful, const struct FUniqueNetIdRepl& UserId, const class FString& Error);
	void OnPartyDataReceived_Event(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, class FName Namespace, class UReadablePartyData* PartyData);
	void OnPartyExited_Event(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId);
	void OnPartyInvitesChanged_Event(const struct FUniqueNetIdRepl& LocalUserId);
	void OnPartyJoined_Event(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId);
	void OnPartyMemberExited_Event(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const struct FUniqueNetIdRepl& MemberId, EMemberExitedReason_ Reason);
	void OnPartyMemberJoined_Event(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const struct FUniqueNetIdRepl& MemberId);
	void OnPartyMemberPromoted_Event(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const struct FUniqueNetIdRepl& NewLeaderId);
	void OnReadFriendsListComplete_EB4EDC7641FBC8F8B24CE39924CD81D1(int32 LocalUserNum, bool bWasSuccessful, const class FString& ListName, const class FString& ErrorStr);
	void OnSendPartyInvitationComplete_FA4D34474260B64CA0DD95B03A080BB3(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const struct FUniqueNetIdRepl& RecipientId, ESendPartyInvitationCompletionResult_ Result);
	void OpenFriendSection();
	void ReceivedNewSquadData(class UReadablePartyData* NewData);
	void Show_Invite_to_Squad();
	void SortFriendsByStatus();
	void UpdatePartyMembers();
	void UpdateSquadData(class UPlayFabJsonObject* Data);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Menu_Squad_C">();
	}
	static class UUI_Menu_Squad_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Menu_Squad_C>();
	}
};
static_assert(alignof(UUI_Menu_Squad_C) == 0x000008, "Wrong alignment on UUI_Menu_Squad_C");
static_assert(sizeof(UUI_Menu_Squad_C) == 0x000350, "Wrong size on UUI_Menu_Squad_C");
static_assert(offsetof(UUI_Menu_Squad_C, UberGraphFrame) == 0x000280, "Member 'UUI_Menu_Squad_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Squad_C, MainButtonAnimation) == 0x000288, "Member 'UUI_Menu_Squad_C::MainButtonAnimation' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Squad_C, ShowAnimation) == 0x000290, "Member 'UUI_Menu_Squad_C::ShowAnimation' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Squad_C, Button_Friends) == 0x000298, "Member 'UUI_Menu_Squad_C::Button_Friends' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Squad_C, Button_Open) == 0x0002A0, "Member 'UUI_Menu_Squad_C::Button_Open' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Squad_C, Button_Squad) == 0x0002A8, "Member 'UUI_Menu_Squad_C::Button_Squad' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Squad_C, Image_FriendButton_Background) == 0x0002B0, "Member 'UUI_Menu_Squad_C::Image_FriendButton_Background' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Squad_C, Image_NumMembers_2) == 0x0002B8, "Member 'UUI_Menu_Squad_C::Image_NumMembers_2' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Squad_C, Image_NumMembers_3) == 0x0002C0, "Member 'UUI_Menu_Squad_C::Image_NumMembers_3' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Squad_C, Image_NumMembers_4) == 0x0002C8, "Member 'UUI_Menu_Squad_C::Image_NumMembers_4' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Squad_C, Image_NumMembers_5) == 0x0002D0, "Member 'UUI_Menu_Squad_C::Image_NumMembers_5' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Squad_C, Image_SquadButton_Background) == 0x0002D8, "Member 'UUI_Menu_Squad_C::Image_SquadButton_Background' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Squad_C, ListView_Friends) == 0x0002E0, "Member 'UUI_Menu_Squad_C::ListView_Friends' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Squad_C, UI_Squad_PlayerSlot_1) == 0x0002E8, "Member 'UUI_Menu_Squad_C::UI_Squad_PlayerSlot_1' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Squad_C, UI_Squad_PlayerSlot_2) == 0x0002F0, "Member 'UUI_Menu_Squad_C::UI_Squad_PlayerSlot_2' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Squad_C, UI_Squad_PlayerSlot_3) == 0x0002F8, "Member 'UUI_Menu_Squad_C::UI_Squad_PlayerSlot_3' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Squad_C, UI_Squad_PlayerSlot_4) == 0x000300, "Member 'UUI_Menu_Squad_C::UI_Squad_PlayerSlot_4' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Squad_C, UI_Squad_PlayerSlot_5) == 0x000308, "Member 'UUI_Menu_Squad_C::UI_Squad_PlayerSlot_5' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Squad_C, VerticalBox_Squad) == 0x000310, "Member 'UUI_Menu_Squad_C::VerticalBox_Squad' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Squad_C, WidgetSwitcher_FriendButton) == 0x000318, "Member 'UUI_Menu_Squad_C::WidgetSwitcher_FriendButton' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Squad_C, WidgetSwitcher_Main) == 0x000320, "Member 'UUI_Menu_Squad_C::WidgetSwitcher_Main' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Squad_C, WidgetSwitcher_SquadButton) == 0x000328, "Member 'UUI_Menu_Squad_C::WidgetSwitcher_SquadButton' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Squad_C, JoinedSquad) == 0x000330, "Member 'UUI_Menu_Squad_C::JoinedSquad' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Squad_C, CreatingParty) == 0x000338, "Member 'UUI_Menu_Squad_C::CreatingParty' has a wrong offset!");
static_assert(offsetof(UUI_Menu_Squad_C, PendingSquadInvitations) == 0x000340, "Member 'UUI_Menu_Squad_C::PendingSquadInvitations' has a wrong offset!");

}

