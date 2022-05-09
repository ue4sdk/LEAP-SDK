#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_DamagingAffliction_Shield_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DamagingAffliction_Shield.BP_DamagingAffliction_Shield_C
// 0x0028 (0x0220 - 0x01F8)
class UBP_DamagingAffliction_Shield_C : public UAfflictionInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01F8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	float                                              DamageOnTick;                                             // 0x0200(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0204(0x0004) MISSED OFFSET
	class UClass* /*UDamageType*/                      DamageType;                                               // 0x0208(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              TickInterval__seconds_;                                   // 0x0210(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0214(0x0004) MISSED OFFSET
	class UW_HealProjectorOverlay_Damage_C*            Widget;                                                   // 0x0218(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_DamagingAffliction_Shield.BP_DamagingAffliction_Shield_C"));
		return ptr;
	}


	void ReceiveTick(float DeltaSeconds);
	void K2_End();
	void K2_Start();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_DamagingAffliction_Shield(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
