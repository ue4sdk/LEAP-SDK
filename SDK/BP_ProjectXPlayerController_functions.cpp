// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ProjectXPlayerController_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ProjectXPlayerController.BP_ProjectXPlayerController_C.OnPlayerStateAcquired_69E318834CA991A8242AD4852E85C170
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXPlayerController_C::OnPlayerStateAcquired_69E318834CA991A8242AD4852E85C170(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayerController.BP_ProjectXPlayerController_C.OnPlayerStateAcquired_69E318834CA991A8242AD4852E85C170"));

	struct
	{
		class APlayerState*            PlayerState;
	} params = {};

	params.PlayerState = PlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXPlayerController.BP_ProjectXPlayerController_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_ProjectXPlayerController_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayerController.BP_ProjectXPlayerController_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXPlayerController.BP_ProjectXPlayerController_C.SpawnContextPing
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 SpawnVector                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXPlayerController_C::SpawnContextPing(const struct FVector& SpawnVector)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayerController.BP_ProjectXPlayerController_C.SpawnContextPing"));

	struct
	{
		struct FVector                 SpawnVector;
	} params = {};

	params.SpawnVector = SpawnVector;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXPlayerController.BP_ProjectXPlayerController_C.ExecuteUbergraph_BP_ProjectXPlayerController
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXPlayerController_C::ExecuteUbergraph_BP_ProjectXPlayerController(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayerController.BP_ProjectXPlayerController_C.ExecuteUbergraph_BP_ProjectXPlayerController"));

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
