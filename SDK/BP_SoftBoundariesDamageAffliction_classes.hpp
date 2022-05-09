#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SoftBoundariesDamageAffliction_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SoftBoundariesDamageAffliction.BP_SoftBoundariesDamageAffliction_C
// 0x0038 (0x0230 - 0x01F8)
class UBP_SoftBoundariesDamageAffliction_C : public UAfflictionInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01F8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	float                                              DamageOnTick;                                             // 0x0200(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0204(0x0004) MISSED OFFSET
	class UClass* /*UDamageType*/                      DamageType;                                               // 0x0208(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              WarningTime;                                              // 0x0210(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0214(0x0004) MISSED OFFSET
	struct FTimerHandle                                WarningTimerHandle;                                       // 0x0218(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               CanApplyDamage;                                           // 0x0220(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0221(0x0007) MISSED OFFSET
	class UW_OutOfBoundariesWarning_C*                 WarningWidget;                                            // 0x0228(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SoftBoundariesDamageAffliction.BP_SoftBoundariesDamageAffliction_C"));
		return ptr;
	}


	void ReceiveTick(float DeltaSeconds);
	void K2_Start();
	void Warning_Timer();
	void K2_End();
	void ClearWarningWidget();
	void ExecuteUbergraph_BP_SoftBoundariesDamageAffliction(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
