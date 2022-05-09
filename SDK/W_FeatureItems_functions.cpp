// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_FeatureItems_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_FeatureItems.W_FeatureItems_C.Hide
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_FeatureItems_C::Hide()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_FeatureItems.W_FeatureItems_C.Hide"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_FeatureItems.W_FeatureItems_C.Save Item Icons
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor)

void UW_FeatureItems_C::Save_Item_Icons(const struct FScriptDelegate& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_FeatureItems.W_FeatureItems_C.Save Item Icons"));

	struct
	{
		struct FScriptDelegate         Event;
	} params = {};

	params.Event = Event;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_FeatureItems.W_FeatureItems_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_FeatureItems_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_FeatureItems.W_FeatureItems_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_FeatureItems.W_FeatureItems_C.OnFeaturesLoaded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_FeatureItems_C::OnFeaturesLoaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_FeatureItems.W_FeatureItems_C.OnFeaturesLoaded"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_FeatureItems.W_FeatureItems_C.OnFeatureSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UW_ItemIcon_New_C*       Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_FeatureItems_C::OnFeatureSelected(class UW_ItemIcon_New_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_FeatureItems.W_FeatureItems_C.OnFeatureSelected"));

	struct
	{
		class UW_ItemIcon_New_C*       Button;
	} params = {};

	params.Button = Button;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_FeatureItems.W_FeatureItems_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_FeatureItems_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_FeatureItems.W_FeatureItems_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_FeatureItems.W_FeatureItems_C.UpdateTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_FeatureItems_C::UpdateTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_FeatureItems.W_FeatureItems_C.UpdateTimer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_FeatureItems.W_FeatureItems_C.OnItemPurchased
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bSucess                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FString                 ItemId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_FeatureItems_C::OnItemPurchased(bool bSucess, const struct FString& ItemId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_FeatureItems.W_FeatureItems_C.OnItemPurchased"));

	struct
	{
		bool                           bSucess;
		struct FString                 ItemId;
	} params = {};

	params.bSucess = bSucess;
	params.ItemId = ItemId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_FeatureItems.W_FeatureItems_C.ExecuteUbergraph_W_FeatureItems
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_FeatureItems_C::ExecuteUbergraph_W_FeatureItems(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_FeatureItems.W_FeatureItems_C.ExecuteUbergraph_W_FeatureItems"));

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


// Function W_FeatureItems.W_FeatureItems_C.FeatureItemSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UW_ItemIcon_New_C*       Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDateTime               EndDate                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_FeatureItems_C::FeatureItemSelected__DelegateSignature(class UW_ItemIcon_New_C* Item, const struct FDateTime& EndDate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_FeatureItems.W_FeatureItems_C.FeatureItemSelected__DelegateSignature"));

	struct
	{
		class UW_ItemIcon_New_C*       Item;
		struct FDateTime               EndDate;
	} params = {};

	params.Item = Item;
	params.EndDate = EndDate;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
