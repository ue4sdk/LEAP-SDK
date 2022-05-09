#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_AfflictionInstanceAutoSpot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AfflictionInstanceAutoSpot.BP_AfflictionInstanceAutoSpot_C
// 0x0009 (0x0201 - 0x01F8)
class UBP_AfflictionInstanceAutoSpot_C : public UAfflictionInstanceBool
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01F8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	bool                                               bEnableAutoSpot;                                          // 0x0200(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AfflictionInstanceAutoSpot.BP_AfflictionInstanceAutoSpot_C"));
		return ptr;
	}


	void K2_ApplyModifier();
	void ExecuteUbergraph_BP_AfflictionInstanceAutoSpot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
