#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_DamagingAffliction_HealBeam_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DamagingAffliction_HealBeam.BP_DamagingAffliction_HealBeam_C
// 0x0010 (0x0220 - 0x0210)
class UBP_DamagingAffliction_HealBeam_C : public UBP_DamagingAffliction_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0210(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UW_HealProjectorOverlay_Damage_C*            Widget;                                                   // 0x0218(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_DamagingAffliction_HealBeam.BP_DamagingAffliction_HealBeam_C"));
		return ptr;
	}


	void K2_Start();
	void K2_End();
	void On_Damage_Done();
	void ExecuteUbergraph_BP_DamagingAffliction_HealBeam(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
