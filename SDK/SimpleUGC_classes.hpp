#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SimpleUGC_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SimpleUGC.UGCRegistry
// 0x0068 (0x0090 - 0x0028)
class UUGCRegistry : public UObject
{
public:
	TArray<struct FUGCPackage>                         UGCPackages;                                              // 0x0028(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TMap<class UClass* /*AActor*/, class UClass* /*AActor*/> RegisteredOverrides;                                      // 0x0038(0x0050) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SimpleUGC.UGCRegistry"));
		return ptr;
	}


	int GetPackageModID(const struct FUGCPackage& Package);
	bool GetMapsInPackage(const struct FUGCPackage& Package, TArray<struct FName>* Maps);
	bool GetAllClassesInPackage(const struct FUGCPackage& Package, TArray<class UClass* /*UObject*/>* Classes);
	bool FindUGCPackages(bool bRescanPlugins);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
