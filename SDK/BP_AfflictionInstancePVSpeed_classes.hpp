#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_AfflictionInstancePVSpeed_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AfflictionInstancePVSpeed.BP_AfflictionInstancePVSpeed_C
// 0x0008 (0x0258 - 0x0250)
class UBP_AfflictionInstancePVSpeed_C : public UAfflictionInstanceFloat
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0250(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AfflictionInstancePVSpeed.BP_AfflictionInstancePVSpeed_C"));
		return ptr;
	}


	void K2_ApplyModifier();
	void ExecuteUbergraph_BP_AfflictionInstancePVSpeed(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
