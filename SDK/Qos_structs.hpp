#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "Qos_enums.hpp"
#include "OnlineSubsystemUtils_classes.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Qos.QosPingServerInfo
// 0x0018
struct FQosPingServerInfo
{
	struct FString                                     Address;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Port;                                                     // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Qos.QosDatacenterInfo
// 0x0038
struct FQosDatacenterInfo
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     RegionId;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnabled;                                                 // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	TArray<struct FQosPingServerInfo>                  Servers;                                                  // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Qos.DatacenterQosInstance
// 0x0068
struct FDatacenterQosInstance
{
	struct FQosDatacenterInfo                          Definition;                                               // 0x0000(0x0038) (CPF_Transient, CPF_NativeAccessSpecifierPublic)
	EQosDatacenterResult                               Result;                                                   // 0x0038(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	int                                                AvgPingMs;                                                // 0x003C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<int>                                        PingResults;                                              // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
	struct FDateTime                                   LastCheckTimestamp;                                       // 0x0058(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUsable;                                                  // 0x0060(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
};

// ScriptStruct Qos.QosRegionInfo
// 0x0030
struct FQosRegionInfo
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (CPF_NativeAccessSpecifierPublic)
	struct FString                                     RegionId;                                                 // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnabled;                                                 // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bVisible;                                                 // 0x0029(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bAutoAssignable;                                          // 0x002A(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x5];                                       // 0x002B(0x0005) MISSED OFFSET
};

// ScriptStruct Qos.RegionQosInstance
// 0x0040
struct FRegionQosInstance
{
	struct FQosRegionInfo                              Definition;                                               // 0x0000(0x0030) (CPF_Transient, CPF_NativeAccessSpecifierPublic)
	TArray<struct FDatacenterQosInstance>              DatacenterOptions;                                        // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
