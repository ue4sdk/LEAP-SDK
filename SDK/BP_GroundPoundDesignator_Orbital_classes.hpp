#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_GroundPoundDesignator_Orbital_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GroundPoundDesignator_Orbital.BP_GroundPoundDesignator_Orbital_C
// 0x0020 (0x0308 - 0x02E8)
class ABP_GroundPoundDesignator_Orbital_C : public ABP_GroundPoundDesignator_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02E8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UStaticMeshComponent*                        SM_OrbitalLaser2;                                         // 0x02F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh2;                                              // 0x02F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0300(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_GroundPoundDesignator_Orbital.BP_GroundPoundDesignator_Orbital_C"));
		return ptr;
	}


	void K2_UpdateValidDesignator(bool bValidDesignator);
	void SetColour(const struct FLinearColor& Colour);
	void FadeAway(float Value);
	void ExecuteUbergraph_BP_GroundPoundDesignator_Orbital(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
