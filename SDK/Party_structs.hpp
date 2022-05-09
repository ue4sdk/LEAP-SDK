#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "Party_enums.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Party.SocialPlatformDescription
// 0x0020
struct FSocialPlatformDescription
{
	struct FString                                     SocialPlatformTypeName;                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     SocialPlatformName;                                       // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Party.OnlinePartyRepDataBase
// 0x0018
struct FOnlinePartyRepDataBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Party.UserPlatform
// 0x0020
struct FUserPlatform
{
	struct FSocialPlatformDescription                  PlatformDescription;                                      // 0x0000(0x0020) (CPF_NativeAccessSpecifierPrivate)
};

// ScriptStruct Party.PartyMemberRepData
// 0x0128 (0x0140 - 0x0018)
struct FPartyMemberRepData : public FOnlinePartyRepDataBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FUserPlatform                               Platform;                                                 // 0x0020(0x0020) (CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0040(0x0030) MISSED OFFSET
	struct FUniqueNetIdRepl                            PlatformUniqueId;                                         // 0x0070(0x0028) (CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0x30];                                      // 0x0098(0x0030) MISSED OFFSET
	struct FString                                     PlatformSessionId;                                        // 0x00C8(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData03[0x30];                                      // 0x00D8(0x0030) MISSED OFFSET
	ECrossplayPreference                               CrossplayPreference;                                      // 0x0108(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData04[0x37];                                      // 0x0109(0x0037) MISSED OFFSET
};

// ScriptStruct Party.PartyPrivacySettings
// 0x0003
struct FPartyPrivacySettings
{
	EPartyType                                         PartyType;                                                // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EPartyInviteRestriction                            PartyInviteRestriction;                                   // 0x0001(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bOnlyLeaderFriendsCanJoin;                                // 0x0002(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Party.PartyPlatformSessionInfo
// 0x0040
struct FPartyPlatformSessionInfo
{
	struct FName                                       OssName;                                                  // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     SessionId;                                                // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                            OwnerPrimaryId;                                           // 0x0018(0x0028) (CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Party.SocialChatChannelConfig
// 0x0040
struct FSocialChatChannelConfig
{
	class USocialUser*                                 SocialUser;                                               // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
	TArray<class USocialChatChannel*>                  ListenChannels;                                           // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0028(0x0018) MISSED OFFSET
};

// ScriptStruct Party.PartyRepData
// 0x0068 (0x0080 - 0x0018)
struct FPartyRepData : public FOnlinePartyRepDataBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FPartyPrivacySettings                       PrivacySettings;                                          // 0x0020(0x0003) (CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x35];                                      // 0x0023(0x0035) MISSED OFFSET
	TArray<struct FPartyPlatformSessionInfo>           PlatformSessions;                                         // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0068(0x0018) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
