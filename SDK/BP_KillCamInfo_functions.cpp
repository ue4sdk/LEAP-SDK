// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_KillCamInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_KillCamInfo.BP_KillCamInfo_C.InitializeWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXPlayerState*    PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Killer                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UProjectXDamageType*/ DamageType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            NemesisData                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_KillCamInfo_C::InitializeWidget(class AProjectXPlayerState* PlayerState, class AActor* Killer, class UClass* /*UProjectXDamageType*/ DamageType, int NemesisData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_KillCamInfo.BP_KillCamInfo_C.InitializeWidget"));

	struct
	{
		class AProjectXPlayerState*    PlayerState;
		class AActor*                  Killer;
		class UClass* /*UProjectXDamageType*/ DamageType;
		int                            NemesisData;
	} params = {};

	params.PlayerState = PlayerState;
	params.Killer = Killer;
	params.DamageType = DamageType;
	params.NemesisData = NemesisData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_KillCamInfo.BP_KillCamInfo_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_KillCamInfo_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_KillCamInfo.BP_KillCamInfo_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params = {};

	params.EndPlayReason = EndPlayReason;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_KillCamInfo.BP_KillCamInfo_C.ExecuteUbergraph_BP_KillCamInfo
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_KillCamInfo_C::ExecuteUbergraph_BP_KillCamInfo(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_KillCamInfo.BP_KillCamInfo_C.ExecuteUbergraph_BP_KillCamInfo"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
