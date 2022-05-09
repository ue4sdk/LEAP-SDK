#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_DamagingAffliction_Incendiary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DamagingAffliction_Incendiary.BP_DamagingAffliction_Incendiary_C
// 0x0008 (0x0200 - 0x01F8)
class UBP_DamagingAffliction_Incendiary_C : public UAfflictionInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01F8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_DamagingAffliction_Incendiary.BP_DamagingAffliction_Incendiary_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_DamagingAffliction_Incendiary(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
