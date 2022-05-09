#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_CommandCenter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CommandCenter.BP_CommandCenter_C
// 0x0048 (0x0410 - 0x03C8)
class ABP_CommandCenter_C : public ACommandCenter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03D0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D8(0x0008) MISSED OFFSET
	struct FTransform                                  RelativeIconLocation;                                     // 0x03E0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CommandCenter.BP_CommandCenter_C"));
		return ptr;
	}


	void OnCommandCenterInitialized();
	void ExecuteUbergraph_BP_CommandCenter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
