// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_PurchaseButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_PurchaseButton.W_PurchaseButton_C.GetFavouriteClassPrimaryWeapon
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash)

struct FString UW_PurchaseButton_C::GetFavouriteClassPrimaryWeapon()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PurchaseButton.W_PurchaseButton_C.GetFavouriteClassPrimaryWeapon"));

	struct
	{
		struct FString                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_PurchaseButton.W_PurchaseButton_C.CanPurchase
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UW_PurchaseButton_C::CanPurchase()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PurchaseButton.W_PurchaseButton_C.CanPurchase"));

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


// Function W_PurchaseButton.W_PurchaseButton_C.SetColors
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PurchaseButton_C::SetColors()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PurchaseButton.W_PurchaseButton_C.SetColors"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PurchaseButton.W_PurchaseButton_C.FormatTime
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FTimespan               Timespan                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Text                           (CPF_Parm, CPF_OutParm)

void UW_PurchaseButton_C::FormatTime(const struct FTimespan& Timespan, struct FText* Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PurchaseButton.W_PurchaseButton_C.FormatTime"));

	struct
	{
		struct FTimespan               Timespan;
		struct FText                   Text;
	} params = {};

	params.Timespan = Timespan;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Text != nullptr)
		*Text = params.Text;
}


// Function W_PurchaseButton.W_PurchaseButton_C.GetCurrentMoney
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

int UW_PurchaseButton_C::GetCurrentMoney()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PurchaseButton.W_PurchaseButton_C.GetCurrentMoney"));

	struct
	{
		int                            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_PurchaseButton.W_PurchaseButton_C.ProcessingPurchaseComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PurchaseButton_C::ProcessingPurchaseComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PurchaseButton.W_PurchaseButton_C.ProcessingPurchaseComplete"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PurchaseButton.W_PurchaseButton_C.OnBackButtonClick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PurchaseButton_C::OnBackButtonClick(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PurchaseButton.W_PurchaseButton_C.OnBackButtonClick"));

	struct
	{
		struct FString                 ID;
		struct FString                 Name;
		ECosmeticType                  Type;
		class UClass* /*UUserWidget*/  Widget;
	} params = {};

	params.ID = ID;
	params.Name = Name;
	params.Type = Type;
	params.Widget = Widget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PurchaseButton.W_PurchaseButton_C.BndEvt__btn_PurchaseNew_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PurchaseButton_C::BndEvt__btn_PurchaseNew_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PurchaseButton.W_PurchaseButton_C.BndEvt__btn_PurchaseNew_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature"));

	struct
	{
		struct FString                 ID;
		struct FString                 Name;
		ECosmeticType                  Type;
		class UClass* /*UUserWidget*/  Widget;
	} params = {};

	params.ID = ID;
	params.Name = Name;
	params.Type = Type;
	params.Widget = Widget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PurchaseButton.W_PurchaseButton_C.ToggleLoading
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Loading                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_PurchaseButton_C::ToggleLoading(bool Loading)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PurchaseButton.W_PurchaseButton_C.ToggleLoading"));

	struct
	{
		bool                           Loading;
	} params = {};

	params.Loading = Loading;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PurchaseButton.W_PurchaseButton_C.OnCosmeticSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ECosmeticType                  CosmeticType                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UWeaponInstance*/ WeaponClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
// class UCosmeticAssetBase*      CosmeticAsset                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PurchaseButton_C::OnCosmeticSelected(ECosmeticType CosmeticType, class UClass* /*UWeaponInstance*/ WeaponClass, class UCosmeticAssetBase* CosmeticAsset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PurchaseButton.W_PurchaseButton_C.OnCosmeticSelected"));

	struct
	{
		ECosmeticType                  CosmeticType;
		class UClass* /*UWeaponInstance*/ WeaponClass;
		class UCosmeticAssetBase*      CosmeticAsset;
	} params = {};

	params.CosmeticType = CosmeticType;
	params.WeaponClass = WeaponClass;
	params.CosmeticAsset = CosmeticAsset;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PurchaseButton.W_PurchaseButton_C.TypeSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PurchaseButton_C::TypeSelected(ECosmeticType Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PurchaseButton.W_PurchaseButton_C.TypeSelected"));

	struct
	{
		ECosmeticType                  Type;
	} params = {};

	params.Type = Type;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PurchaseButton.W_PurchaseButton_C.UpdateTimeRemaining
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PurchaseButton_C::UpdateTimeRemaining()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PurchaseButton.W_PurchaseButton_C.UpdateTimeRemaining"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PurchaseButton.W_PurchaseButton_C.Continue with purchase
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PurchaseButton_C::Continue_with_purchase()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PurchaseButton.W_PurchaseButton_C.Continue with purchase"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PurchaseButton.W_PurchaseButton_C.Cancel
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PurchaseButton_C::Cancel()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PurchaseButton.W_PurchaseButton_C.Cancel"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PurchaseButton.W_PurchaseButton_C.Init
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Cost                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 ItemCode                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 WeapnName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDateTime               StartTime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   DisplayName                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// ERarity                        Rarity                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PurchaseButton_C::Init(int Cost, const struct FString& ItemCode, const struct FString& WeapnName, ECosmeticType Type, const struct FDateTime& StartTime, const struct FText& DisplayName, ERarity Rarity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PurchaseButton.W_PurchaseButton_C.Init"));

	struct
	{
		int                            Cost;
		struct FString                 ItemCode;
		struct FString                 WeapnName;
		ECosmeticType                  Type;
		struct FDateTime               StartTime;
		struct FText                   DisplayName;
		ERarity                        Rarity;
	} params = {};

	params.Cost = Cost;
	params.ItemCode = ItemCode;
	params.WeapnName = WeapnName;
	params.Type = Type;
	params.StartTime = StartTime;
	params.DisplayName = DisplayName;
	params.Rarity = Rarity;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PurchaseButton.W_PurchaseButton_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PurchaseButton_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PurchaseButton.W_PurchaseButton_C.Tick"));

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


// Function W_PurchaseButton.W_PurchaseButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_PurchaseButton_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PurchaseButton.W_PurchaseButton_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PurchaseButton.W_PurchaseButton_C.ExecuteUbergraph_W_PurchaseButton
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PurchaseButton_C::ExecuteUbergraph_W_PurchaseButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PurchaseButton.W_PurchaseButton_C.ExecuteUbergraph_W_PurchaseButton"));

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


// Function W_PurchaseButton.W_PurchaseButton_C.OnPurchasePressed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 item_Code                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_PurchaseButton_C::OnPurchasePressed__DelegateSignature(const struct FString& item_Code)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PurchaseButton.W_PurchaseButton_C.OnPurchasePressed__DelegateSignature"));

	struct
	{
		struct FString                 item_Code;
	} params = {};

	params.item_Code = item_Code;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
