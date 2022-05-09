#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SoftBoundaryVolume_Canyon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SoftBoundaryVolume_Canyon.BP_SoftBoundaryVolume_Canyon_C
// 0x0010 (0x02C8 - 0x02B8)
class ABP_SoftBoundaryVolume_Canyon_C : public ASoftBoundaryVolume
{
public:
	class UBoxComponent*                               Affliction_Overlap_Trigger;                               // 0x02B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    BoundaryMaterial;                                         // 0x02C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SoftBoundaryVolume_Canyon.BP_SoftBoundaryVolume_Canyon_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
