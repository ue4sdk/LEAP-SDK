#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_GroundPoundDesignator_OrbitalSmall_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GroundPoundDesignator_OrbitalSmall.BP_GroundPoundDesignator_OrbitalSmall_C
// 0x0008 (0x02F0 - 0x02E8)
class ABP_GroundPoundDesignator_OrbitalSmall_C : public ABP_GroundPoundDesignator_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02E8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_GroundPoundDesignator_OrbitalSmall.BP_GroundPoundDesignator_OrbitalSmall_C"));
		return ptr;
	}


	void K2_UpdateValidDesignator(bool bValidDesignator);
	void ExecuteUbergraph_BP_GroundPoundDesignator_OrbitalSmall(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
