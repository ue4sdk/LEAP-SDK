// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_ServerInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_ServerInfo.W_ServerInfo_C.CompareVersions
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UW_ServerInfo_C::CompareVersions()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerInfo.W_ServerInfo_C.CompareVersions"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_ServerInfo.W_ServerInfo_C.GetGameTypeName
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Value                          (CPF_Parm, CPF_OutParm)

void UW_ServerInfo_C::GetGameTypeName(int NewParam, struct FText* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerInfo.W_ServerInfo_C.GetGameTypeName"));

	struct
	{
		int                            NewParam;
		struct FText                   Value;
	} params = {};

	params.NewParam = NewParam;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Value != nullptr)
		*Value = params.Value;
}


// Function W_ServerInfo.W_ServerInfo_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_ServerInfo_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerInfo.W_ServerInfo_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ServerInfo.W_ServerInfo_C.ToggleEnabled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInIsEnabled                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_ServerInfo_C::ToggleEnabled(bool bInIsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerInfo.W_ServerInfo_C.ToggleEnabled"));

	struct
	{
		bool                           bInIsEnabled;
	} params = {};

	params.bInIsEnabled = bInIsEnabled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ServerInfo.W_ServerInfo_C.ChangeTextColour
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            InColorAndOpacity2             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ServerInfo_C::ChangeTextColour(const struct FLinearColor& InColorAndOpacity2)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerInfo.W_ServerInfo_C.ChangeTextColour"));

	struct
	{
		struct FLinearColor            InColorAndOpacity2;
	} params = {};

	params.InColorAndOpacity2 = InColorAndOpacity2;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ServerInfo.W_ServerInfo_C.FavouriteUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ServerInfo_C::FavouriteUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerInfo.W_ServerInfo_C.FavouriteUpdated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ServerInfo.W_ServerInfo_C.OnServerInfoLoaded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ServerInfo_C::OnServerInfoLoaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerInfo.W_ServerInfo_C.OnServerInfoLoaded"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ServerInfo.W_ServerInfo_C.OnFavouritesPressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ServerInfo_C::OnFavouritesPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerInfo.W_ServerInfo_C.OnFavouritesPressed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ServerInfo.W_ServerInfo_C.BndEvt__JoinButton_K2Node_ComponentBoundEvent_0_ButtonHovered__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_ServerInfo_C::BndEvt__JoinButton_K2Node_ComponentBoundEvent_0_ButtonHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerInfo.W_ServerInfo_C.BndEvt__JoinButton_K2Node_ComponentBoundEvent_0_ButtonHovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ServerInfo.W_ServerInfo_C.BndEvt__JoinButton_K2Node_ComponentBoundEvent_1_ButtonUnHovered__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_ServerInfo_C::BndEvt__JoinButton_K2Node_ComponentBoundEvent_1_ButtonUnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerInfo.W_ServerInfo_C.BndEvt__JoinButton_K2Node_ComponentBoundEvent_1_ButtonUnHovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ServerInfo.W_ServerInfo_C.BndEvt__JoinButton_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_ServerInfo_C::BndEvt__JoinButton_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerInfo.W_ServerInfo_C.BndEvt__JoinButton_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ServerInfo.W_ServerInfo_C.SavePassword
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ServerInfo_C::SavePassword()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerInfo.W_ServerInfo_C.SavePassword"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ServerInfo.W_ServerInfo_C.JoinSession
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ServerInfo_C::JoinSession()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerInfo.W_ServerInfo_C.JoinSession"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ServerInfo.W_ServerInfo_C.BndEvt__W_ServerBrowser_FavButton_K2Node_ComponentBoundEvent_3_FavoriteButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_ServerInfo_C::BndEvt__W_ServerBrowser_FavButton_K2Node_ComponentBoundEvent_3_FavoriteButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerInfo.W_ServerInfo_C.BndEvt__W_ServerBrowser_FavButton_K2Node_ComponentBoundEvent_3_FavoriteButtonPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ServerInfo.W_ServerInfo_C.ExecuteUbergraph_W_ServerInfo
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ServerInfo_C::ExecuteUbergraph_W_ServerInfo(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerInfo.W_ServerInfo_C.ExecuteUbergraph_W_ServerInfo"));

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


// Function W_ServerInfo.W_ServerInfo_C.JoinSessionEvent__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ServerInfo_C::JoinSessionEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerInfo.W_ServerInfo_C.JoinSessionEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
