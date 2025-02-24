#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayFabGSDK

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct PlayFabGSDK.ConnectedPlayer
// 0x0010 (0x0010 - 0x0000)
struct FConnectedPlayer final
{
public:
	class FString                                 PlayerId;                                          // 0x0000(0x0010)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FConnectedPlayer) == 0x000008, "Wrong alignment on FConnectedPlayer");
static_assert(sizeof(FConnectedPlayer) == 0x000010, "Wrong size on FConnectedPlayer");
static_assert(offsetof(FConnectedPlayer, PlayerId) == 0x000000, "Member 'FConnectedPlayer::PlayerId' has a wrong offset!");

// ScriptStruct PlayFabGSDK.GamePort
// 0x0018 (0x0018 - 0x0000)
struct FGamePort final
{
public:
	class FString                                 Name;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ServerListeningPort;                               // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ClientConnectionPort;                              // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGamePort) == 0x000008, "Wrong alignment on FGamePort");
static_assert(sizeof(FGamePort) == 0x000018, "Wrong size on FGamePort");
static_assert(offsetof(FGamePort, Name) == 0x000000, "Member 'FGamePort::Name' has a wrong offset!");
static_assert(offsetof(FGamePort, ServerListeningPort) == 0x000010, "Member 'FGamePort::ServerListeningPort' has a wrong offset!");
static_assert(offsetof(FGamePort, ClientConnectionPort) == 0x000014, "Member 'FGamePort::ClientConnectionPort' has a wrong offset!");

// ScriptStruct PlayFabGSDK.GameServerConnectionInfo
// 0x0020 (0x0020 - 0x0000)
struct FGameServerConnectionInfo final
{
public:
	class FString                                 PublicIpV4Address;                                 // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGamePort>                      GamePortsConfiguration;                            // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGameServerConnectionInfo) == 0x000008, "Wrong alignment on FGameServerConnectionInfo");
static_assert(sizeof(FGameServerConnectionInfo) == 0x000020, "Wrong size on FGameServerConnectionInfo");
static_assert(offsetof(FGameServerConnectionInfo, PublicIpV4Address) == 0x000000, "Member 'FGameServerConnectionInfo::PublicIpV4Address' has a wrong offset!");
static_assert(offsetof(FGameServerConnectionInfo, GamePortsConfiguration) == 0x000010, "Member 'FGameServerConnectionInfo::GamePortsConfiguration' has a wrong offset!");

}

