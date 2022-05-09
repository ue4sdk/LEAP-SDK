#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MagicLeapPlanes_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MagicLeapPlanes.MagicLeapPlanesComponent
// 0x0060 (0x0280 - 0x0220)
class UMagicLeapPlanesComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0220(0x0008) MISSED OFFSET
	class UBoxComponent*                               SearchVolume;                                             // 0x0228(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MaxResults;                                               // 0x0230(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MinHolePerimeter;                                         // 0x0234(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MinPlaneArea;                                             // 0x0238(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EMagicLeapPlaneQueryType                           QueryType;                                                // 0x023C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x023D(0x0003) MISSED OFFSET
	float                                              SimilarityThreshold;                                      // 0x0240(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0244(0x0004) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnPlanesQueryResult;                                      // 0x0248(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPrivate)
	struct FMulticastScriptDelegate                    OnPersistentPlanesQueryResult;                            // 0x0258(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0268(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MagicLeapPlanes.MagicLeapPlanesComponent"));
		return ptr;
	}


	bool RequestPlanesAsync();
};


// Class MagicLeapPlanes.MagicLeapPlanesFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMagicLeapPlanesFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MagicLeapPlanes.MagicLeapPlanesFunctionLibrary"));
		return ptr;
	}


	static void ReorderPlaneFlags(TArray<EMagicLeapPlaneQueryFlags> InPriority, TArray<EMagicLeapPlaneQueryFlags> InFlagsToReorder, TArray<EMagicLeapPlaneQueryFlags>* OutReorderedFlags);
	static bool RemovePersistentQuery(const struct FGuid& Handle);
	static void RemoveFlagsNotInQuery(TArray<EMagicLeapPlaneQueryFlags> InQueryFlags, TArray<EMagicLeapPlaneQueryFlags> InResultFlags, TArray<EMagicLeapPlaneQueryFlags>* OutFlags);
	static bool PlanesQueryBeginAsync(const struct FMagicLeapPlanesQuery& Query, const struct FScriptDelegate& ResultDelegate);
	static bool PlanesPersistentQueryBeginAsync(const struct FMagicLeapPlanesQuery& Query, const struct FGuid& Handle, const struct FScriptDelegate& ResultDelegate);
	static bool IsTrackerValid();
	static struct FTransform GetContentScale(class AActor* ContentActor, const struct FMagicLeapPlaneResult& PlaneResult);
	static bool DestroyTracker();
	static bool CreateTracker();
	static struct FGuid AddPersistentQuery(EMagicLeapPlaneQueryType PersistentQueryType);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
