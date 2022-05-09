#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Deployable_Barrier_Assault_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Deployable_Barrier_Assault.BP_Deployable_Barrier_Assault_C
// 0x0018 (0x0588 - 0x0570)
class ABP_Deployable_Barrier_Assault_C : public ABP_Deployable_Barrier_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0570(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	int                                                ShimmerInterpID_1;                                        // 0x0578(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x057C(0x0004) MISSED OFFSET
	class UAudioComponent*                             AudioComponent_1;                                         // 0x0580(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Deployable_Barrier_Assault.BP_Deployable_Barrier_Assault_C"));
		return ptr;
	}


	void InitializeForTeam(int Team);
	void ExecuteUbergraph_BP_Deployable_Barrier_Assault(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
