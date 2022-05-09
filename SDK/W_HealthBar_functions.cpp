// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_HealthBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_HealthBar.W_HealthBar_C.HealthChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Delta                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_HealthBar_C::HealthChanged(float Delta)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_HealthBar.W_HealthBar_C.HealthChanged"));

	struct
	{
		float                          Delta;
	} params = {};

	params.Delta = Delta;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_HealthBar.W_HealthBar_C.Init
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UHealthInterface> HealthInterface                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_HealthBar_C::Init(const TScriptInterface<class UHealthInterface>& HealthInterface)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_HealthBar.W_HealthBar_C.Init"));

	struct
	{
		TScriptInterface<class UHealthInterface> HealthInterface;
	} params = {};

	params.HealthInterface = HealthInterface;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_HealthBar.W_HealthBar_C.OnShieldsChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Delta                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_HealthBar_C::OnShieldsChanged(float Delta)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_HealthBar.W_HealthBar_C.OnShieldsChanged"));

	struct
	{
		float                          Delta;
	} params = {};

	params.Delta = Delta;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_HealthBar.W_HealthBar_C.SetBarColouring
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            HealthColor                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_HealthBar_C::SetBarColouring(const struct FLinearColor& HealthColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_HealthBar.W_HealthBar_C.SetBarColouring"));

	struct
	{
		struct FLinearColor            HealthColor;
	} params = {};

	params.HealthColor = HealthColor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_HealthBar.W_HealthBar_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_HealthBar_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_HealthBar.W_HealthBar_C.Tick"));

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


// Function W_HealthBar.W_HealthBar_C.CreateMaterial
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_HealthBar_C::CreateMaterial()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_HealthBar.W_HealthBar_C.CreateMaterial"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_HealthBar.W_HealthBar_C.SetBarColouringWithShields
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            HealthColor                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            ShieldColor                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_HealthBar_C::SetBarColouringWithShields(const struct FLinearColor& HealthColor, const struct FLinearColor& ShieldColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_HealthBar.W_HealthBar_C.SetBarColouringWithShields"));

	struct
	{
		struct FLinearColor            HealthColor;
		struct FLinearColor            ShieldColor;
	} params = {};

	params.HealthColor = HealthColor;
	params.ShieldColor = ShieldColor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_HealthBar.W_HealthBar_C.ExecuteUbergraph_W_HealthBar
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_HealthBar_C::ExecuteUbergraph_W_HealthBar(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_HealthBar.W_HealthBar_C.ExecuteUbergraph_W_HealthBar"));

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
