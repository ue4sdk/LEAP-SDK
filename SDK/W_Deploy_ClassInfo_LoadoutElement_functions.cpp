// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_Deploy_ClassInfo_LoadoutElement_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_Deploy_ClassInfo_LoadoutElement.W_Deploy_ClassInfo_LoadoutElement_C.OnLoaded_D0C20F704E819908A80AF781249748DC
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Deploy_ClassInfo_LoadoutElement_C::OnLoaded_D0C20F704E819908A80AF781249748DC(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Deploy_ClassInfo_LoadoutElement.W_Deploy_ClassInfo_LoadoutElement_C.OnLoaded_D0C20F704E819908A80AF781249748DC"));

	struct
	{
		class UObject*                 Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Deploy_ClassInfo_LoadoutElement.W_Deploy_ClassInfo_LoadoutElement_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_Deploy_ClassInfo_LoadoutElement_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Deploy_ClassInfo_LoadoutElement.W_Deploy_ClassInfo_LoadoutElement_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Deploy_ClassInfo_LoadoutElement.W_Deploy_ClassInfo_LoadoutElement_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_Deploy_ClassInfo_LoadoutElement_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Deploy_ClassInfo_LoadoutElement.W_Deploy_ClassInfo_LoadoutElement_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Deploy_ClassInfo_LoadoutElement.W_Deploy_ClassInfo_LoadoutElement_C.LoadIcon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Deploy_ClassInfo_LoadoutElement_C::LoadIcon()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Deploy_ClassInfo_LoadoutElement.W_Deploy_ClassInfo_LoadoutElement_C.LoadIcon"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Deploy_ClassInfo_LoadoutElement.W_Deploy_ClassInfo_LoadoutElement_C.Init
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*AProjectXCharacter*/ PlayerClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
// class UClass* /*UWeaponInstance*/ Weapons                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Deploy_ClassInfo_LoadoutElement_C::Init(class UClass* /*AProjectXCharacter*/ PlayerClass, class UClass* /*UWeaponInstance*/ Weapons)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Deploy_ClassInfo_LoadoutElement.W_Deploy_ClassInfo_LoadoutElement_C.Init"));

	struct
	{
		class UClass* /*AProjectXCharacter*/ PlayerClass;
		class UClass* /*UWeaponInstance*/ Weapons;
	} params = {};

	params.PlayerClass = PlayerClass;
	params.Weapons = Weapons;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Deploy_ClassInfo_LoadoutElement.W_Deploy_ClassInfo_LoadoutElement_C.UpdateDisplay
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Deploy_ClassInfo_LoadoutElement_C::UpdateDisplay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Deploy_ClassInfo_LoadoutElement.W_Deploy_ClassInfo_LoadoutElement_C.UpdateDisplay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Deploy_ClassInfo_LoadoutElement.W_Deploy_ClassInfo_LoadoutElement_C.ExecuteUbergraph_W_Deploy_ClassInfo_LoadoutElement
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Deploy_ClassInfo_LoadoutElement_C::ExecuteUbergraph_W_Deploy_ClassInfo_LoadoutElement(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Deploy_ClassInfo_LoadoutElement.W_Deploy_ClassInfo_LoadoutElement_C.ExecuteUbergraph_W_Deploy_ClassInfo_LoadoutElement"));

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
