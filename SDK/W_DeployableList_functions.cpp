// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_DeployableList_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_DeployableList.W_DeployableList_C.OnPawnAcquired_3CF34D584BC1E44117B31B84B02C8153
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DeployableList_C::OnPawnAcquired_3CF34D584BC1E44117B31B84B02C8153(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployableList.W_DeployableList_C.OnPawnAcquired_3CF34D584BC1E44117B31B84B02C8153"));

	struct
	{
		class APawn*                   Pawn;
	} params = {};

	params.Pawn = Pawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployableList.W_DeployableList_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_DeployableList_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployableList.W_DeployableList_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployableList.W_DeployableList_C.OnDeployableSpawned
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ADeployable*             Deployable                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DeployableList_C::OnDeployableSpawned(class ADeployable* Deployable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployableList.W_DeployableList_C.OnDeployableSpawned"));

	struct
	{
		class ADeployable*             Deployable;
	} params = {};

	params.Deployable = Deployable;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployableList.W_DeployableList_C.OnDeployableDestroyed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ADeployable*             Deployable                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DeployableList_C::OnDeployableDestroyed(class ADeployable* Deployable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployableList.W_DeployableList_C.OnDeployableDestroyed"));

	struct
	{
		class ADeployable*             Deployable;
	} params = {};

	params.Deployable = Deployable;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployableList.W_DeployableList_C.AddDeployableIcon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ADeployable*             Deployable                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DeployableList_C::AddDeployableIcon(class ADeployable* Deployable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployableList.W_DeployableList_C.AddDeployableIcon"));

	struct
	{
		class ADeployable*             Deployable;
	} params = {};

	params.Deployable = Deployable;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployableList.W_DeployableList_C.RemoveDeployableIcon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ADeployable*             Deployable                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DeployableList_C::RemoveDeployableIcon(class ADeployable* Deployable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployableList.W_DeployableList_C.RemoveDeployableIcon"));

	struct
	{
		class ADeployable*             Deployable;
	} params = {};

	params.Deployable = Deployable;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployableList.W_DeployableList_C.OnRemovedFromViewport
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_DeployableList_C::OnRemovedFromViewport()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployableList.W_DeployableList_C.OnRemovedFromViewport"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployableList.W_DeployableList_C.ExecuteUbergraph_W_DeployableList
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DeployableList_C::ExecuteUbergraph_W_DeployableList(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployableList.W_DeployableList_C.ExecuteUbergraph_W_DeployableList"));

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


// Function W_DeployableList.W_DeployableList_C.DeployableDestroyed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ADeployable*             Deployable                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DeployableList_C::DeployableDestroyed__DelegateSignature(class ADeployable* Deployable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployableList.W_DeployableList_C.DeployableDestroyed__DelegateSignature"));

	struct
	{
		class ADeployable*             Deployable;
	} params = {};

	params.Deployable = Deployable;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
