// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_CosmeticTypesButtonList_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_CosmeticTypesButtonList.W_CosmeticTypesButtonList_C.SetLast
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_CosmeticTypesButtonList_C::SetLast()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CosmeticTypesButtonList.W_CosmeticTypesButtonList_C.SetLast"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_CosmeticTypesButtonList.W_CosmeticTypesButtonList_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_CosmeticTypesButtonList_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CosmeticTypesButtonList.W_CosmeticTypesButtonList_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_CosmeticTypesButtonList.W_CosmeticTypesButtonList_C.CreateTypeList
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ECosmeticCategory              Category                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TSet<struct FST_UI_ArmoryTypeCollection> TypeCollection                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UW_CosmeticTypesButtonList_C::CreateTypeList(ECosmeticCategory Category, TSet<struct FST_UI_ArmoryTypeCollection> TypeCollection)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CosmeticTypesButtonList.W_CosmeticTypesButtonList_C.CreateTypeList"));

	struct
	{
		ECosmeticCategory              Category;
		TSet<struct FST_UI_ArmoryTypeCollection> TypeCollection;
	} params = {};

	params.Category = Category;
	params.TypeCollection = TypeCollection;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_CosmeticTypesButtonList.W_CosmeticTypesButtonList_C.ForceTypeButtonPressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// bool                           Default                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_CosmeticTypesButtonList_C::ForceTypeButtonPressed(const struct FString& Type, bool Default)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CosmeticTypesButtonList.W_CosmeticTypesButtonList_C.ForceTypeButtonPressed"));

	struct
	{
		struct FString                 Type;
		bool                           Default;
	} params = {};

	params.Type = Type;
	params.Default = Default;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_CosmeticTypesButtonList.W_CosmeticTypesButtonList_C.ClearList
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_CosmeticTypesButtonList_C::ClearList()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CosmeticTypesButtonList.W_CosmeticTypesButtonList_C.ClearList"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_CosmeticTypesButtonList.W_CosmeticTypesButtonList_C.TypeButtonClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticCategory              Category                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TSet<struct FST_UI_ArmoryTypeCollection> CosmeticTypes                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           Colour                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// EColourSlot                    ColourSlot                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 WeaponID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_CosmeticTypesButtonList_C::TypeButtonClicked(const struct FString& ID, ECosmeticCategory Category, TSet<struct FST_UI_ArmoryTypeCollection> CosmeticTypes, bool Colour, EColourSlot ColourSlot, const struct FString& WeaponID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CosmeticTypesButtonList.W_CosmeticTypesButtonList_C.TypeButtonClicked"));

	struct
	{
		struct FString                 ID;
		ECosmeticCategory              Category;
		TSet<struct FST_UI_ArmoryTypeCollection> CosmeticTypes;
		bool                           Colour;
		EColourSlot                    ColourSlot;
		struct FString                 WeaponID;
	} params = {};

	params.ID = ID;
	params.Category = Category;
	params.CosmeticTypes = CosmeticTypes;
	params.Colour = Colour;
	params.ColourSlot = ColourSlot;
	params.WeaponID = WeaponID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_CosmeticTypesButtonList.W_CosmeticTypesButtonList_C.ExecuteUbergraph_W_CosmeticTypesButtonList
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_CosmeticTypesButtonList_C::ExecuteUbergraph_W_CosmeticTypesButtonList(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CosmeticTypesButtonList.W_CosmeticTypesButtonList_C.ExecuteUbergraph_W_CosmeticTypesButtonList"));

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


// Function W_CosmeticTypesButtonList.W_CosmeticTypesButtonList_C.OnColourButtonPressed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// EColourSlot                    ColourSlot                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_CosmeticTypesButtonList_C::OnColourButtonPressed__DelegateSignature(const struct FString& ID, EColourSlot ColourSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CosmeticTypesButtonList.W_CosmeticTypesButtonList_C.OnColourButtonPressed__DelegateSignature"));

	struct
	{
		struct FString                 ID;
		EColourSlot                    ColourSlot;
	} params = {};

	params.ID = ID;
	params.ColourSlot = ColourSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_CosmeticTypesButtonList.W_CosmeticTypesButtonList_C.OnTypeButtonPressed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 CosmeticType                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_CosmeticTypesButtonList_C::OnTypeButtonPressed__DelegateSignature(const struct FString& CosmeticType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CosmeticTypesButtonList.W_CosmeticTypesButtonList_C.OnTypeButtonPressed__DelegateSignature"));

	struct
	{
		struct FString                 CosmeticType;
	} params = {};

	params.CosmeticType = CosmeticType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
