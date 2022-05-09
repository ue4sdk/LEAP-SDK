#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_AfflictionInstanceFlagCarrier_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AfflictionInstanceFlagCarrier.BP_AfflictionInstanceFlagCarrier_C
// 0x0018 (0x0210 - 0x01F8)
class UBP_AfflictionInstanceFlagCarrier_C : public UAfflictionInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01F8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class ABP_CarriedFlag_C*                           CarriedFlag;                                              // 0x0200(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UW_FlagCarryOverlay_C*                       Widget;                                                   // 0x0208(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AfflictionInstanceFlagCarrier.BP_AfflictionInstanceFlagCarrier_C"));
		return ptr;
	}


	void K2_Start();
	void K2_End();
	void ExecuteUbergraph_BP_AfflictionInstanceFlagCarrier(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
