// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_SupplydropMarker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_SupplydropMarker.W_SupplyDropMarker_C.GetImageDynamicMaterial
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UMaterialInstanceDynamic* DynamicImageMaterial           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SupplyDropMarker_C::GetImageDynamicMaterial(class UMaterialInstanceDynamic** DynamicImageMaterial)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SupplydropMarker.W_SupplyDropMarker_C.GetImageDynamicMaterial"));

	struct
	{
		class UMaterialInstanceDynamic* DynamicImageMaterial;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (DynamicImageMaterial != nullptr)
		*DynamicImageMaterial = params.DynamicImageMaterial;
}


// Function W_SupplydropMarker.W_SupplyDropMarker_C.MenuToggled
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAdvancedUserWidget*     Widget1                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Toggled1                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_SupplyDropMarker_C::MenuToggled(class UAdvancedUserWidget* Widget1, bool Toggled1)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SupplydropMarker.W_SupplyDropMarker_C.MenuToggled"));

	struct
	{
		class UAdvancedUserWidget*     Widget1;
		bool                           Toggled1;
	} params = {};

	params.Widget1 = Widget1;
	params.Toggled1 = Toggled1;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SupplydropMarker.W_SupplyDropMarker_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_SupplyDropMarker_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SupplydropMarker.W_SupplyDropMarker_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SupplydropMarker.W_SupplyDropMarker_C.ToggleMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAdvancedUserWidget*     Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bToggle                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_SupplyDropMarker_C::ToggleMenu(class UAdvancedUserWidget* Widget, bool bToggle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SupplydropMarker.W_SupplyDropMarker_C.ToggleMenu"));

	struct
	{
		class UAdvancedUserWidget*     Widget;
		bool                           bToggle;
	} params = {};

	params.Widget = Widget;
	params.bToggle = bToggle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SupplydropMarker.W_SupplyDropMarker_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SupplyDropMarker_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SupplydropMarker.W_SupplyDropMarker_C.Tick"));

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


// Function W_SupplydropMarker.W_SupplyDropMarker_C.UpdateImage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture*                Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SupplyDropMarker_C::UpdateImage(class UTexture* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SupplydropMarker.W_SupplyDropMarker_C.UpdateImage"));

	struct
	{
		class UTexture*                Value;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SupplydropMarker.W_SupplyDropMarker_C.UpdateTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_SupplyDropMarker_C::UpdateTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SupplydropMarker.W_SupplyDropMarker_C.UpdateTimer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SupplydropMarker.W_SupplyDropMarker_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_SupplyDropMarker_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SupplydropMarker.W_SupplyDropMarker_C.Destruct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SupplydropMarker.W_SupplyDropMarker_C.OnMenuToggled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAdvancedUserWidget*     Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bToggle                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_SupplyDropMarker_C::OnMenuToggled(class UAdvancedUserWidget* Widget, bool bToggle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SupplydropMarker.W_SupplyDropMarker_C.OnMenuToggled"));

	struct
	{
		class UAdvancedUserWidget*     Widget;
		bool                           bToggle;
	} params = {};

	params.Widget = Widget;
	params.bToggle = bToggle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SupplydropMarker.W_SupplyDropMarker_C.ExecuteUbergraph_W_SupplyDropMarker
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SupplyDropMarker_C::ExecuteUbergraph_W_SupplyDropMarker(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SupplydropMarker.W_SupplyDropMarker_C.ExecuteUbergraph_W_SupplyDropMarker"));

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
