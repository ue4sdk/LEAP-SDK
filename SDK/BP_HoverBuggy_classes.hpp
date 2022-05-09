#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_HoverBuggy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_HoverBuggy.BP_HoverBuggy_C
// 0x001C (0x0C41 - 0x0C25)
class ABP_HoverBuggy_C : public ABP_ProjectXVehicle_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0C25(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C28(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UChildActorComponent*                        Gunner;                                                   // 0x0C30(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UChildActorComponent*                        Passenger;                                                // 0x0C38(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	bool                                               bGunToggle;                                               // 0x0C40(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_HoverBuggy.BP_HoverBuggy_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void Set_Invalid_Team_Colour();
	void Set_Valid_Team_Colour();
	void ExecuteUbergraph_BP_HoverBuggy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
