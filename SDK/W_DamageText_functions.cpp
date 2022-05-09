// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_DamageText_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_DamageText.W_DamageText_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DamageText_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DamageText.W_DamageText_C.Tick"));

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


// Function W_DamageText.W_DamageText_C.UpdateDamage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Damage                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bHeadshot                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_DamageText_C::UpdateDamage(float Damage, bool bHeadshot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DamageText.W_DamageText_C.UpdateDamage"));

	struct
	{
		float                          Damage;
		bool                           bHeadshot;
	} params = {};

	params.Damage = Damage;
	params.bHeadshot = bHeadshot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DamageText.W_DamageText_C.Scale
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DamageText_C::Scale(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DamageText.W_DamageText_C.Scale"));

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


// Function W_DamageText.W_DamageText_C.InitFromPool
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_DamageText_C::InitFromPool()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DamageText.W_DamageText_C.InitFromPool"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DamageText.W_DamageText_C.UpdateWidgetScreenPosition
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_DamageText_C::UpdateWidgetScreenPosition()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DamageText.W_DamageText_C.UpdateWidgetScreenPosition"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DamageText.W_DamageText_C.ExecuteUbergraph_W_DamageText
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DamageText_C::ExecuteUbergraph_W_DamageText(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DamageText.W_DamageText_C.ExecuteUbergraph_W_DamageText"));

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
