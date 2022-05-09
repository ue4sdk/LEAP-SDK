#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_GuidedDesignator_OrbitalLaser_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GuidedDesignator_OrbitalLaser.BP_GuidedDesignator_OrbitalLaser_C
// 0x0010 (0x0898 - 0x0888)
class UBP_GuidedDesignator_OrbitalLaser_C : public UWeaponInstanceDesignator
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0888(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UMaterialInstanceDynamic*                    DMI;                                                      // 0x0890(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_GuidedDesignator_OrbitalLaser.BP_GuidedDesignator_OrbitalLaser_C"));
		return ptr;
	}


	void K2_OnDesignatorMarkerToggled();
	void ExecuteUbergraph_BP_GuidedDesignator_OrbitalLaser(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
