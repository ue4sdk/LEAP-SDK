// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_Deploy_Classes_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_Deploy_Classes.W_Deploy_Classes_C.OnPlayerStateAcquired_DB412F894AFBB8813AC169A88662689A
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Deploy_Classes_C::OnPlayerStateAcquired_DB412F894AFBB8813AC169A88662689A(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Deploy_Classes.W_Deploy_Classes_C.OnPlayerStateAcquired_DB412F894AFBB8813AC169A88662689A"));

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


// Function W_Deploy_Classes.W_Deploy_Classes_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_Deploy_Classes_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Deploy_Classes.W_Deploy_Classes_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Deploy_Classes.W_Deploy_Classes_C.InitClassSelection
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UClass* /*AProjectXCharacter*/> Classes                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UW_Deploy_Classes_C::InitClassSelection(TArray<class UClass* /*AProjectXCharacter*/> Classes)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Deploy_Classes.W_Deploy_Classes_C.InitClassSelection"));

	struct
	{
		TArray<class UClass* /*AProjectXCharacter*/> Classes;
	} params = {};

	params.Classes = Classes;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Deploy_Classes.W_Deploy_Classes_C.ClassSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*AProjectXCharacter*/ Class                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Deploy_Classes_C::ClassSelected(class UClass* /*AProjectXCharacter*/ Class)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Deploy_Classes.W_Deploy_Classes_C.ClassSelected"));

	struct
	{
		class UClass* /*AProjectXCharacter*/ Class;
	} params = {};

	params.Class = Class;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Deploy_Classes.W_Deploy_Classes_C.ForceSelectDefault
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*AProjectXCharacter*/ SelectedClass                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Deploy_Classes_C::ForceSelectDefault(class UClass* /*AProjectXCharacter*/ SelectedClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Deploy_Classes.W_Deploy_Classes_C.ForceSelectDefault"));

	struct
	{
		class UClass* /*AProjectXCharacter*/ SelectedClass;
	} params = {};

	params.SelectedClass = SelectedClass;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Deploy_Classes.W_Deploy_Classes_C.On Player Class Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*AProjectXCharacter*/ PlayerClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void UW_Deploy_Classes_C::On_Player_Class_Changed(class UClass* /*AProjectXCharacter*/ PlayerClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Deploy_Classes.W_Deploy_Classes_C.On Player Class Changed"));

	struct
	{
		class UClass* /*AProjectXCharacter*/ PlayerClass;
	} params = {};

	params.PlayerClass = PlayerClass;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Deploy_Classes.W_Deploy_Classes_C.ExecuteUbergraph_W_Deploy_Classes
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Deploy_Classes_C::ExecuteUbergraph_W_Deploy_Classes(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Deploy_Classes.W_Deploy_Classes_C.ExecuteUbergraph_W_Deploy_Classes"));

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


// Function W_Deploy_Classes.W_Deploy_Classes_C.NewClassSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*AProjectXCharacter*/ Class                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Deploy_Classes_C::NewClassSelected__DelegateSignature(class UClass* /*AProjectXCharacter*/ Class)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Deploy_Classes.W_Deploy_Classes_C.NewClassSelected__DelegateSignature"));

	struct
	{
		class UClass* /*AProjectXCharacter*/ Class;
	} params = {};

	params.Class = Class;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
