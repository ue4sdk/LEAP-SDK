// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_HealthPickup_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_HealthPickup.BP_HealthPickup_C.CanPickup
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXCharacter*      Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_HealthPickup_C::CanPickup(class AProjectXCharacter* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_HealthPickup.BP_HealthPickup_C.CanPickup"));

	struct
	{
		class AProjectXCharacter*      Player;
		bool                           ReturnValue;
	} params = {};

	params.Player = Player;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_HealthPickup.BP_HealthPickup_C.GetShieldsToAdd
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TScriptInterface<class UHealthInterface> Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float ABP_HealthPickup_C::GetShieldsToAdd(const TScriptInterface<class UHealthInterface>& Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_HealthPickup.BP_HealthPickup_C.GetShieldsToAdd"));

	struct
	{
		TScriptInterface<class UHealthInterface> Target;
		float                          ReturnValue;
	} params = {};

	params.Target = Target;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_HealthPickup.BP_HealthPickup_C.GetHealthToAdd
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TScriptInterface<class UHealthInterface> NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float ABP_HealthPickup_C::GetHealthToAdd(const TScriptInterface<class UHealthInterface>& NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_HealthPickup.BP_HealthPickup_C.GetHealthToAdd"));

	struct
	{
		TScriptInterface<class UHealthInterface> NewParam;
		float                          ReturnValue;
	} params = {};

	params.NewParam = NewParam;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_HealthPickup.BP_HealthPickup_C.OnItemPickedUp
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_HealthPickup_C::OnItemPickedUp(class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_HealthPickup.BP_HealthPickup_C.OnItemPickedUp"));

	struct
	{
		class AActor*                  OtherActor;
	} params = {};

	params.OtherActor = OtherActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_HealthPickup.BP_HealthPickup_C.ExecuteUbergraph_BP_HealthPickup
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_HealthPickup_C::ExecuteUbergraph_BP_HealthPickup(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_HealthPickup.BP_HealthPickup_C.ExecuteUbergraph_BP_HealthPickup"));

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
