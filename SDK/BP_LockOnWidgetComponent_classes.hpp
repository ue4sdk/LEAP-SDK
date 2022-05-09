#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_LockOnWidgetComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LockOnWidgetComponent.BP_LockOnWidgetComponent_C
// 0x0008 (0x05F8 - 0x05F0)
class UBP_LockOnWidgetComponent_C : public UAdvancedWidgetComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_LockOnWidgetComponent.BP_LockOnWidgetComponent_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_LockOnWidgetComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
