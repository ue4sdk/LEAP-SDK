#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Qos_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Qos.QosBeaconClient
// 0x0038 (0x02F8 - 0x02C0)
class AQosBeaconClient : public AOnlineBeaconClient
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x02C0(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Qos.QosBeaconClient"));
		return ptr;
	}


	void ServerQosRequest(const struct FString& InSessionId);
	void ClientQosResponse(EQosResponseType Response);
};


// Class Qos.QosBeaconHost
// 0x0010 (0x0268 - 0x0258)
class AQosBeaconHost : public AOnlineBeaconHostObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0258(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Qos.QosBeaconHost"));
		return ptr;
	}

};


// Class Qos.QosEvaluator
// 0x0058 (0x0080 - 0x0028)
class UQosEvaluator : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET
	bool                                               bInProgress;                                              // 0x0048(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	bool                                               bCancelOperation;                                         // 0x0049(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x6];                                       // 0x004A(0x0006) MISSED OFFSET
	TArray<struct FDatacenterQosInstance>              Datacenters;                                              // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0060(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Qos.QosEvaluator"));
		return ptr;
	}

};


// Class Qos.QosRegionManager
// 0x0098 (0x00C0 - 0x0028)
class UQosRegionManager : public UObject
{
public:
	int                                                NumTestsPerRegion;                                        // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	float                                              PingTimeout;                                              // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	TArray<struct FQosRegionInfo>                      RegionDefinitions;                                        // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_NativeAccessSpecifierPrivate)
	TArray<struct FQosDatacenterInfo>                  DatacenterDefinitions;                                    // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_NativeAccessSpecifierPrivate)
	struct FDateTime                                   LastCheckTimestamp;                                       // 0x0050(0x0008) (CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UQosEvaluator*                               Evaluator;                                                // 0x0058(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	EQosCompletionResult                               QosEvalResult;                                            // 0x0060(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	TArray<struct FRegionQosInstance>                  RegionOptions;                                            // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPrivate)
	struct FString                                     ForceRegionId;                                            // 0x0078(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	bool                                               bRegionForcedViaCommandline;                              // 0x0088(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
	struct FString                                     SelectedRegionId;                                         // 0x0090(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0x20];                                      // 0x00A0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Qos.QosRegionManager"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
