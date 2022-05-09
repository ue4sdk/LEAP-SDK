#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum SteamParty.ESteamAvatarSize
enum class ESteamAvatarSize : uint8_t
{
	ESteamAvatarSize__AvatarNone   = 0,
	ESteamAvatarSize__AvatarSmall  = 1,
	ESteamAvatarSize__AvatarMedium = 2,
	ESteamAvatarSize__AvatarLarge  = 3,
	ESteamAvatarSize__ESteamAvatarSize_MAX = 4
};


// Enum SteamParty.EPartyStatus
enum class EPartyStatus : uint8_t
{
	EPartyStatus__PartyNone        = 0,
	EPartyStatus__PartyLeader      = 1,
	EPartyStatus__PartyMember      = 2,
	EPartyStatus__EPartyStatus_MAX = 3
};


// Enum SteamParty.ESteamPresenceState
enum class ESteamPresenceState : uint8_t
{
	ESteamPresenceState__Online    = 0,
	ESteamPresenceState__Offline   = 1,
	ESteamPresenceState__Away      = 2,
	ESteamPresenceState__ExtendedAway = 3,
	ESteamPresenceState__DoNotDisturb = 4,
	ESteamPresenceState__Chat      = 5,
	ESteamPresenceState__ESteamPresenceState_MAX = 6
};


// Enum SteamParty.EPartyChatType
enum class EPartyChatType : uint8_t
{
	EPartyChatType__Global         = 0,
	EPartyChatType__Whisper        = 1,
	EPartyChatType__EPartyChatType_MAX = 2
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
