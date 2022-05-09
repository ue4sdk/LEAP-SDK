#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Hotfix_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Hotfix.OnlineHotfixManager
// 0x01F8 (0x0220 - 0x0028)
class UOnlineHotfixManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1B8];                                     // 0x0028(0x01B8) MISSED OFFSET
	struct FString                                     OssName;                                                  // 0x01E0(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     HotfixManagerClassName;                                   // 0x01F0(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     DebugPrefix;                                              // 0x0200(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<class UObject*>                             AssetsHotfixedFromIniFiles;                               // 0x0210(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Hotfix.OnlineHotfixManager"));
		return ptr;
	}


	void StartHotfixProcess();
};


// Class Hotfix.UpdateManager
// 0x00F0 (0x0118 - 0x0028)
class UUpdateManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET
	float                                              HotfixCheckCompleteDelay;                                 // 0x0088(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              UpdateCheckCompleteDelay;                                 // 0x008C(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              HotfixAvailabilityCheckCompleteDelay;                     // 0x0090(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              UpdateCheckAvailabilityCompleteDelay;                     // 0x0094(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0098(0x0004) MISSED OFFSET
	int                                                AppSuspendedUpdateCheckTimeSeconds;                       // 0x009C(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x8];                                       // 0x00A0(0x0008) MISSED OFFSET
	bool                                               bPlatformEnvironmentDetected;                             // 0x00A8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bInitialUpdateFinished;                                   // 0x00A9(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bCheckHotfixAvailabilityOnly;                             // 0x00AA(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	EUpdateState                                       CurrentUpdateState;                                       // 0x00AB(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                WorstNumFilesPendingLoadViewed;                           // 0x00AC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00B0(0x0004) MISSED OFFSET
	EHotfixResult                                      LastHotfixResult;                                         // 0x00B4(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData04[0x2B];                                      // 0x00B5(0x002B) MISSED OFFSET
	struct FDateTime                                   LastUpdateCheck[0x2];                                     // 0x00E0(0x0008) (CPF_ZeroConstructor, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	EUpdateCompletionStatus                            LastCompletionResult[0x2];                                // 0x00F0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData05[0x16];                                      // 0x00F2(0x0016) MISSED OFFSET
	class UEnum*                                       UpdateStateEnum;                                          // 0x0108(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UEnum*                                       UpdateCompletionEnum;                                     // 0x0110(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Hotfix.UpdateManager"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
