// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_KillCamInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_KillCamInfo.W_KillCamInfo_C.OnLoaded_1A0605ED467BCBD370CED58663FAF55C
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_KillCamInfo_C::OnLoaded_1A0605ED467BCBD370CED58663FAF55C(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KillCamInfo.W_KillCamInfo_C.OnLoaded_1A0605ED467BCBD370CED58663FAF55C"));

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


// Function W_KillCamInfo.W_KillCamInfo_C.OnLoaded_162BBC3949B28601B70E758471D4EF1C
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_KillCamInfo_C::OnLoaded_162BBC3949B28601B70E758471D4EF1C(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KillCamInfo.W_KillCamInfo_C.OnLoaded_162BBC3949B28601B70E758471D4EF1C"));

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


// Function W_KillCamInfo.W_KillCamInfo_C.InitializeWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXPlayerState*    PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Killer                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UProjectXDamageType*/ DamageType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            NemesisData                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_KillCamInfo_C::InitializeWidget(class AProjectXPlayerState* PlayerState, class AActor* Killer, class UClass* /*UProjectXDamageType*/ DamageType, int NemesisData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KillCamInfo.W_KillCamInfo_C.InitializeWidget"));

	struct
	{
		class AProjectXPlayerState*    PlayerState;
		class AActor*                  Killer;
		class UClass* /*UProjectXDamageType*/ DamageType;
		int                            NemesisData;
	} params = {};

	params.PlayerState = PlayerState;
	params.Killer = Killer;
	params.DamageType = DamageType;
	params.NemesisData = NemesisData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_KillCamInfo.W_KillCamInfo_C.ScaleIn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_KillCamInfo_C::ScaleIn(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KillCamInfo.W_KillCamInfo_C.ScaleIn"));

	struct
	{
		float                          Value;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_KillCamInfo.W_KillCamInfo_C.UpdateHealth
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Killer                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_KillCamInfo_C::UpdateHealth(class AActor* Killer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KillCamInfo.W_KillCamInfo_C.UpdateHealth"));

	struct
	{
		class AActor*                  Killer;
	} params = {};

	params.Killer = Killer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_KillCamInfo.W_KillCamInfo_C.MenuToggled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UAdvancedUserWidget*     Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_KillCamInfo_C::MenuToggled(bool Toggle, class UAdvancedUserWidget* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KillCamInfo.W_KillCamInfo_C.MenuToggled"));

	struct
	{
		bool                           Toggle;
		class UAdvancedUserWidget*     Widget;
	} params = {};

	params.Toggle = Toggle;
	params.Widget = Widget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_KillCamInfo.W_KillCamInfo_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_KillCamInfo_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KillCamInfo.W_KillCamInfo_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_KillCamInfo.W_KillCamInfo_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_KillCamInfo_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KillCamInfo.W_KillCamInfo_C.Destruct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_KillCamInfo.W_KillCamInfo_C.OnMenuToggled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAdvancedUserWidget*     Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bToggle                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_KillCamInfo_C::OnMenuToggled(class UAdvancedUserWidget* Widget, bool bToggle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KillCamInfo.W_KillCamInfo_C.OnMenuToggled"));

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


// Function W_KillCamInfo.W_KillCamInfo_C.ExecuteUbergraph_W_KillCamInfo
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_KillCamInfo_C::ExecuteUbergraph_W_KillCamInfo(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KillCamInfo.W_KillCamInfo_C.ExecuteUbergraph_W_KillCamInfo"));

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
