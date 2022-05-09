// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_KillCamCharacter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_KillCamCharacter.BP_KillCamCharacter_C.UpdateDefaultMaterials
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class ABP_DisplayCharacter_C*  Display                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AProjectXCharacter*      KillerDefaultObject            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_KillCamCharacter_C::UpdateDefaultMaterials(class ABP_DisplayCharacter_C* Display, class AProjectXCharacter* KillerDefaultObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_KillCamCharacter.BP_KillCamCharacter_C.UpdateDefaultMaterials"));

	struct
	{
		class ABP_DisplayCharacter_C*  Display;
		class AProjectXCharacter*      KillerDefaultObject;
	} params = {};

	params.Display = Display;
	params.KillerDefaultObject = KillerDefaultObject;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_KillCamCharacter.BP_KillCamCharacter_C.UpdateTransform
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class ABP_DisplayCharacter_C*  Display                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AProjectXCharacter*      KillerDefaultObject            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_KillCamCharacter_C::UpdateTransform(class ABP_DisplayCharacter_C* Display, class AProjectXCharacter* KillerDefaultObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_KillCamCharacter.BP_KillCamCharacter_C.UpdateTransform"));

	struct
	{
		class ABP_DisplayCharacter_C*  Display;
		class AProjectXCharacter*      KillerDefaultObject;
	} params = {};

	params.Display = Display;
	params.KillerDefaultObject = KillerDefaultObject;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_KillCamCharacter.BP_KillCamCharacter_C.InitializeKillCameraActor
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class AProjectXCharacter*      Killed                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Killer                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AProjectXPlayerState*    KillerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UDamageType*/  DamageType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void ABP_KillCamCharacter_C::InitializeKillCameraActor(class AProjectXCharacter* Killed, class AActor* Killer, class AProjectXPlayerState* KillerState, class UClass* /*UDamageType*/ DamageType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_KillCamCharacter.BP_KillCamCharacter_C.InitializeKillCameraActor"));

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


// Function BP_KillCamCharacter.BP_KillCamCharacter_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_KillCamCharacter_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_KillCamCharacter.BP_KillCamCharacter_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_KillCamCharacter.BP_KillCamCharacter_C.OnKillerFocused
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_KillCamCharacter_C::OnKillerFocused()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_KillCamCharacter.BP_KillCamCharacter_C.OnKillerFocused"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_KillCamCharacter.BP_KillCamCharacter_C.ExecuteUbergraph_BP_KillCamCharacter
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_KillCamCharacter_C::ExecuteUbergraph_BP_KillCamCharacter(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_KillCamCharacter.BP_KillCamCharacter_C.ExecuteUbergraph_BP_KillCamCharacter"));

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
