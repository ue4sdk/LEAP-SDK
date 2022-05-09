// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_KillCamVehicle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_KillCamVehicle.BP_KillCamVehicle_C.InitializeKillCameraActor
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class AProjectXCharacter*      Killed                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Killer                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AProjectXPlayerState*    KillerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UDamageType*/  DamageType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void ABP_KillCamVehicle_C::InitializeKillCameraActor(class AProjectXCharacter* Killed, class AActor* Killer, class AProjectXPlayerState* KillerState, class UClass* /*UDamageType*/ DamageType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_KillCamVehicle.BP_KillCamVehicle_C.InitializeKillCameraActor"));

	struct
	{
		class AProjectXCharacter*      Killed;
		class AActor*                  Killer;
		class AProjectXPlayerState*    KillerState;
		class UClass* /*UDamageType*/  DamageType;
	} params = {};

	params.Killed = Killed;
	params.Killer = Killer;
	params.KillerState = KillerState;
	params.DamageType = DamageType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
