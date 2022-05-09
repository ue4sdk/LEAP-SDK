// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_DisplayAvatar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_DisplayAvatar.W_DisplayAvatar_C.GetAsset
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 Key                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// class UCosmeticAssetBase*      FoundAsset                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DisplayAvatar_C::GetAsset(const struct FString& Key, class UCosmeticAssetBase** FoundAsset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DisplayAvatar.W_DisplayAvatar_C.GetAsset"));

	struct
	{
		struct FString                 Key;
		class UCosmeticAssetBase*      FoundAsset;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (FoundAsset != nullptr)
		*FoundAsset = params.FoundAsset;
}


// Function W_DisplayAvatar.W_DisplayAvatar_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_DisplayAvatar_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DisplayAvatar.W_DisplayAvatar_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DisplayAvatar.W_DisplayAvatar_C.OnBannerSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_DisplayAvatar_C::OnBannerSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DisplayAvatar.W_DisplayAvatar_C.OnBannerSelected"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DisplayAvatar.W_DisplayAvatar_C.OnAvatarSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_DisplayAvatar_C::OnAvatarSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DisplayAvatar.W_DisplayAvatar_C.OnAvatarSelected"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DisplayAvatar.W_DisplayAvatar_C.ItemSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bSelected                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 WeaponID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// unsigned char                  Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 ShortCode                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class UClass* /*AProjectXCharacter*/ NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DisplayAvatar_C::ItemSelected(bool bSelected, ECosmeticType Type, const struct FString& WeaponID, unsigned char Slot, const struct FString& ShortCode, class UClass* /*AProjectXCharacter*/ NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DisplayAvatar.W_DisplayAvatar_C.ItemSelected"));

	struct
	{
		bool                           bSelected;
		ECosmeticType                  Type;
		struct FString                 WeaponID;
		unsigned char                  Slot;
		struct FString                 ShortCode;
		class UClass* /*AProjectXCharacter*/ NewParam;
	} params = {};

	params.bSelected = bSelected;
	params.Type = Type;
	params.WeaponID = WeaponID;
	params.Slot = Slot;
	params.ShortCode = ShortCode;
	params.NewParam = NewParam;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DisplayAvatar.W_DisplayAvatar_C.ToggleDisplayAvatarVisibilty
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Visible                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_DisplayAvatar_C::ToggleDisplayAvatarVisibilty(bool Visible)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DisplayAvatar.W_DisplayAvatar_C.ToggleDisplayAvatarVisibilty"));

	struct
	{
		bool                           Visible;
	} params = {};

	params.Visible = Visible;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DisplayAvatar.W_DisplayAvatar_C.TypeSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DisplayAvatar_C::TypeSelected(ECosmeticType Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DisplayAvatar.W_DisplayAvatar_C.TypeSelected"));

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


// Function W_DisplayAvatar.W_DisplayAvatar_C.UpdateBanner
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_DisplayAvatar_C::UpdateBanner()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DisplayAvatar.W_DisplayAvatar_C.UpdateBanner"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DisplayAvatar.W_DisplayAvatar_C.ExecuteUbergraph_W_DisplayAvatar
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DisplayAvatar_C::ExecuteUbergraph_W_DisplayAvatar(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DisplayAvatar.W_DisplayAvatar_C.ExecuteUbergraph_W_DisplayAvatar"));

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
