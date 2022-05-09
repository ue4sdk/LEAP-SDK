// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_FullAvatarAndBorder_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_FullAvatarAndBorder.W_FullAvatarAndBorder_C.UpdateAvatar
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              Avatar                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_FullAvatarAndBorder_C::UpdateAvatar(class UTexture2D* Avatar)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_FullAvatarAndBorder.W_FullAvatarAndBorder_C.UpdateAvatar"));

	struct
	{
		class UTexture2D*              Avatar;
	} params = {};

	params.Avatar = Avatar;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_FullAvatarAndBorder.W_FullAvatarAndBorder_C.InitLocally
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_FullAvatarAndBorder_C::InitLocally()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_FullAvatarAndBorder.W_FullAvatarAndBorder_C.InitLocally"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_FullAvatarAndBorder.W_FullAvatarAndBorder_C.UpdateUserInfo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Level                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_FullAvatarAndBorder_C::UpdateUserInfo(int Level)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_FullAvatarAndBorder.W_FullAvatarAndBorder_C.UpdateUserInfo"));

	struct
	{
		int                            Level;
	} params = {};

	params.Level = Level;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_FullAvatarAndBorder.W_FullAvatarAndBorder_C.SetName
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UW_FullAvatarAndBorder_C::SetName(const struct FText& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_FullAvatarAndBorder.W_FullAvatarAndBorder_C.SetName"));

	struct
	{
		struct FText                   Name;
	} params = {};

	params.Name = Name;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_FullAvatarAndBorder.W_FullAvatarAndBorder_C.ToggleStats
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Visible                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_FullAvatarAndBorder_C::ToggleStats(bool Visible)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_FullAvatarAndBorder.W_FullAvatarAndBorder_C.ToggleStats"));

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


// Function W_FullAvatarAndBorder.W_FullAvatarAndBorder_C.SetBanner
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCosmeticAssetBase*      Asset                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_FullAvatarAndBorder_C::SetBanner(class UCosmeticAssetBase* Asset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_FullAvatarAndBorder.W_FullAvatarAndBorder_C.SetBanner"));

	struct
	{
		class UCosmeticAssetBase*      Asset;
	} params = {};

	params.Asset = Asset;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_FullAvatarAndBorder.W_FullAvatarAndBorder_C.ExecuteUbergraph_W_FullAvatarAndBorder
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_FullAvatarAndBorder_C::ExecuteUbergraph_W_FullAvatarAndBorder(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_FullAvatarAndBorder.W_FullAvatarAndBorder_C.ExecuteUbergraph_W_FullAvatarAndBorder"));

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
