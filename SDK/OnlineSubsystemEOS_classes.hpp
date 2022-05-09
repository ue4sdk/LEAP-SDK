#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "OnlineSubsystemEOS_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OnlineSubsystemEOS.NetConnectionEOS
// 0x0008 (0x1B98 - 0x1B90)
class UNetConnectionEOS : public UIpConnection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x1B90(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class OnlineSubsystemEOS.NetConnectionEOS"));
		return ptr;
	}

};


// Class OnlineSubsystemEOS.NetDriverEOS
// 0x0008 (0x07C8 - 0x07C0)
class UNetDriverEOS : public UIpNetDriver
{
public:
	bool                                               bIsPassthrough;                                           // 0x07C0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsUsingP2PSockets;                                       // 0x07C1(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x07C2(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class OnlineSubsystemEOS.NetDriverEOS"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
