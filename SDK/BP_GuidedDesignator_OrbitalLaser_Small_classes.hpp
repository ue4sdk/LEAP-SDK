#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_GuidedDesignator_OrbitalLaser_Small_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GuidedDesignator_OrbitalLaser_Small.BP_GuidedDesignator_OrbitalLaser_Small_C
// 0x0008 (0x0890 - 0x0888)
class UBP_GuidedDesignator_OrbitalLaser_Small_C : public UWeaponInstanceDesignator
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0888(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_GuidedDesignator_OrbitalLaser_Small.BP_GuidedDesignator_OrbitalLaser_Small_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_GuidedDesignator_OrbitalLaser_Small(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
