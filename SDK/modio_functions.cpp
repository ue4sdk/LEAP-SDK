// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "modio_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function modio.CallbackProxy_AddMetadataKVP.AddMetadataKVP
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ModId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TMap<struct FString, struct FString> MetadataKVP                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UCallbackProxy_AddMetadataKVP* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCallbackProxy_AddMetadataKVP* UCallbackProxy_AddMetadataKVP::AddMetadataKVP(class UObject* WorldContext, int ModId, TMap<struct FString, struct FString> MetadataKVP)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.CallbackProxy_AddMetadataKVP.AddMetadataKVP"));

	struct
	{
		class UObject*                 WorldContext;
		int                            ModId;
		TMap<struct FString, struct FString> MetadataKVP;
		class UCallbackProxy_AddMetadataKVP* ReturnValue;
	} params = {};

	params.WorldContext = WorldContext;
	params.ModId = ModId;
	params.MetadataKVP = MetadataKVP;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function modio.CallbackProxy_AddMod.AddMod
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FModioModCreator        ModCreator                     (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// class UCallbackProxy_AddMod*   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCallbackProxy_AddMod* UCallbackProxy_AddMod::AddMod(class UObject* WorldContext, const struct FModioModCreator& ModCreator)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.CallbackProxy_AddMod.AddMod"));

	struct
	{
		class UObject*                 WorldContext;
		struct FModioModCreator        ModCreator;
		class UCallbackProxy_AddMod*   ReturnValue;
	} params = {};

	params.WorldContext = WorldContext;
	params.ModCreator = ModCreator;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function modio.CallbackProxy_AddModDependencies.AddModDependencies
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ModId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<int>                    Dependencies                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UCallbackProxy_AddModDependencies* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCallbackProxy_AddModDependencies* UCallbackProxy_AddModDependencies::AddModDependencies(class UObject* WorldContext, int ModId, TArray<int> Dependencies)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.CallbackProxy_AddModDependencies.AddModDependencies"));

	struct
	{
		class UObject*                 WorldContext;
		int                            ModId;
		TArray<int>                    Dependencies;
		class UCallbackProxy_AddModDependencies* ReturnValue;
	} params = {};

	params.WorldContext = WorldContext;
	params.ModId = ModId;
	params.Dependencies = Dependencies;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function modio.CallbackProxy_AddModImages.AddModImages
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ModId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FString>         ImagePaths                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UCallbackProxy_AddModImages* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCallbackProxy_AddModImages* UCallbackProxy_AddModImages::AddModImages(class UObject* WorldContext, int ModId, TArray<struct FString> ImagePaths)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.CallbackProxy_AddModImages.AddModImages"));

	struct
	{
		class UObject*                 WorldContext;
		int                            ModId;
		TArray<struct FString>         ImagePaths;
		class UCallbackProxy_AddModImages* ReturnValue;
	} params = {};

	params.WorldContext = WorldContext;
	params.ModId = ModId;
	params.ImagePaths = ImagePaths;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function modio.CallbackProxy_AddModLogo.AddModLogo
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ModId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 LogoPath                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCallbackProxy_AddModLogo* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCallbackProxy_AddModLogo* UCallbackProxy_AddModLogo::AddModLogo(class UObject* WorldContext, int ModId, const struct FString& LogoPath)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.CallbackProxy_AddModLogo.AddModLogo"));

	struct
	{
		class UObject*                 WorldContext;
		int                            ModId;
		struct FString                 LogoPath;
		class UCallbackProxy_AddModLogo* ReturnValue;
	} params = {};

	params.WorldContext = WorldContext;
	params.ModId = ModId;
	params.LogoPath = LogoPath;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function modio.CallbackProxy_AddModRating.AddModRating
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ModId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           IsRatingPositive               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCallbackProxy_AddModRating* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCallbackProxy_AddModRating* UCallbackProxy_AddModRating::AddModRating(class UObject* WorldContext, int ModId, bool IsRatingPositive)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.CallbackProxy_AddModRating.AddModRating"));

	struct
	{
		class UObject*                 WorldContext;
		int                            ModId;
		bool                           IsRatingPositive;
		class UCallbackProxy_AddModRating* ReturnValue;
	} params = {};

	params.WorldContext = WorldContext;
	params.ModId = ModId;
	params.IsRatingPositive = IsRatingPositive;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function modio.CallbackProxy_AddModSketchfabLinks.AddModSketchfabLinks
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ModId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FString>         SketchfabLinks                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UCallbackProxy_AddModSketchfabLinks* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCallbackProxy_AddModSketchfabLinks* UCallbackProxy_AddModSketchfabLinks::AddModSketchfabLinks(class UObject* WorldContext, int ModId, TArray<struct FString> SketchfabLinks)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.CallbackProxy_AddModSketchfabLinks.AddModSketchfabLinks"));

	struct
	{
		class UObject*                 WorldContext;
		int                            ModId;
		TArray<struct FString>         SketchfabLinks;
		class UCallbackProxy_AddModSketchfabLinks* ReturnValue;
	} params = {};

	params.WorldContext = WorldContext;
	params.ModId = ModId;
	params.SketchfabLinks = SketchfabLinks;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function modio.CallbackProxy_AddModTags.AddModTags
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ModId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FString>         Tags                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UCallbackProxy_AddModTags* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCallbackProxy_AddModTags* UCallbackProxy_AddModTags::AddModTags(class UObject* WorldContext, int ModId, TArray<struct FString> Tags)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.CallbackProxy_AddModTags.AddModTags"));

	struct
	{
		class UObject*                 WorldContext;
		int                            ModId;
		TArray<struct FString>         Tags;
		class UCallbackProxy_AddModTags* ReturnValue;
	} params = {};

	params.WorldContext = WorldContext;
	params.ModId = ModId;
	params.Tags = Tags;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function modio.CallbackProxy_AddModYoutubeLinks.AddModYoutubeLinks
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ModId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FString>         YoutubeLinks                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UCallbackProxy_AddModYoutubeLinks* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCallbackProxy_AddModYoutubeLinks* UCallbackProxy_AddModYoutubeLinks::AddModYoutubeLinks(class UObject* WorldContext, int ModId, TArray<struct FString> YoutubeLinks)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.CallbackProxy_AddModYoutubeLinks.AddModYoutubeLinks"));

	struct
	{
		class UObject*                 WorldContext;
		int                            ModId;
		TArray<struct FString>         YoutubeLinks;
		class UCallbackProxy_AddModYoutubeLinks* ReturnValue;
	} params = {};

	params.WorldContext = WorldContext;
	params.ModId = ModId;
	params.YoutubeLinks = YoutubeLinks;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function modio.CallbackProxy_DeleteMetadataKVP.DeleteMetadataKVP
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ModId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TMap<struct FString, struct FString> MetadataKVP                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UCallbackProxy_DeleteMetadataKVP* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCallbackProxy_DeleteMetadataKVP* UCallbackProxy_DeleteMetadataKVP::DeleteMetadataKVP(class UObject* WorldContext, int ModId, TMap<struct FString, struct FString> MetadataKVP)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.CallbackProxy_DeleteMetadataKVP.DeleteMetadataKVP"));

	struct
	{
		class UObject*                 WorldContext;
		int                            ModId;
		TMap<struct FString, struct FString> MetadataKVP;
		class UCallbackProxy_DeleteMetadataKVP* ReturnValue;
	} params = {};

	params.WorldContext = WorldContext;
	params.ModId = ModId;
	params.MetadataKVP = MetadataKVP;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function modio.CallbackProxy_DeleteModDependencies.DeleteModDependencies
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ModId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<int>                    Dependencies                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UCallbackProxy_DeleteModDependencies* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCallbackProxy_DeleteModDependencies* UCallbackProxy_DeleteModDependencies::DeleteModDependencies(class UObject* WorldContext, int ModId, TArray<int> Dependencies)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.CallbackProxy_DeleteModDependencies.DeleteModDependencies"));

	struct
	{
		class UObject*                 WorldContext;
		int                            ModId;
		TArray<int>                    Dependencies;
		class UCallbackProxy_DeleteModDependencies* ReturnValue;
	} params = {};

	params.WorldContext = WorldContext;
	params.ModId = ModId;
	params.Dependencies = Dependencies;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function modio.CallbackProxy_DeleteModImages.DeleteModImages
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ModId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FString>         ImagePaths                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UCallbackProxy_DeleteModImages* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCallbackProxy_DeleteModImages* UCallbackProxy_DeleteModImages::DeleteModImages(class UObject* WorldContext, int ModId, TArray<struct FString> ImagePaths)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.CallbackProxy_DeleteModImages.DeleteModImages"));

	struct
	{
		class UObject*                 WorldContext;
		int                            ModId;
		TArray<struct FString>         ImagePaths;
		class UCallbackProxy_DeleteModImages* ReturnValue;
	} params = {};

	params.WorldContext = WorldContext;
	params.ModId = ModId;
	params.ImagePaths = ImagePaths;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function modio.CallbackProxy_DeleteModSketchfabLinks.DeleteModSketchfabLinks
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ModId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FString>         SketchfabLinks                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UCallbackProxy_DeleteModSketchfabLinks* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCallbackProxy_DeleteModSketchfabLinks* UCallbackProxy_DeleteModSketchfabLinks::DeleteModSketchfabLinks(class UObject* WorldContext, int ModId, TArray<struct FString> SketchfabLinks)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.CallbackProxy_DeleteModSketchfabLinks.DeleteModSketchfabLinks"));

	struct
	{
		class UObject*                 WorldContext;
		int                            ModId;
		TArray<struct FString>         SketchfabLinks;
		class UCallbackProxy_DeleteModSketchfabLinks* ReturnValue;
	} params = {};

	params.WorldContext = WorldContext;
	params.ModId = ModId;
	params.SketchfabLinks = SketchfabLinks;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function modio.CallbackProxy_DeleteModTags.DeleteModTags
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ModId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FString>         Tags                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UCallbackProxy_DeleteModTags* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCallbackProxy_DeleteModTags* UCallbackProxy_DeleteModTags::DeleteModTags(class UObject* WorldContext, int ModId, TArray<struct FString> Tags)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.CallbackProxy_DeleteModTags.DeleteModTags"));

	struct
	{
		class UObject*                 WorldContext;
		int                            ModId;
		TArray<struct FString>         Tags;
		class UCallbackProxy_DeleteModTags* ReturnValue;
	} params = {};

	params.WorldContext = WorldContext;
	params.ModId = ModId;
	params.Tags = Tags;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function modio.CallbackProxy_DeleteModYoutubeLinks.DeleteModYoutubeLinks
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ModId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FString>         YoutubeLinks                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UCallbackProxy_DeleteModYoutubeLinks* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCallbackProxy_DeleteModYoutubeLinks* UCallbackProxy_DeleteModYoutubeLinks::DeleteModYoutubeLinks(class UObject* WorldContext, int ModId, TArray<struct FString> YoutubeLinks)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.CallbackProxy_DeleteModYoutubeLinks.DeleteModYoutubeLinks"));

	struct
	{
		class UObject*                 WorldContext;
		int                            ModId;
		TArray<struct FString>         YoutubeLinks;
		class UCallbackProxy_DeleteModYoutubeLinks* ReturnValue;
	} params = {};

	params.WorldContext = WorldContext;
	params.ModId = ModId;
	params.YoutubeLinks = YoutubeLinks;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function modio.CallbackProxy_DownloadModfilesById.DownloadModfilesById
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<int>                    ModIds                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UCallbackProxy_DownloadModfilesById* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCallbackProxy_DownloadModfilesById* UCallbackProxy_DownloadModfilesById::DownloadModfilesById(class UObject* WorldContext, TArray<int> ModIds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.CallbackProxy_DownloadModfilesById.DownloadModfilesById"));

	struct
	{
		class UObject*                 WorldContext;
		TArray<int>                    ModIds;
		class UCallbackProxy_DownloadModfilesById* ReturnValue;
	} params = {};

	params.WorldContext = WorldContext;
	params.ModIds = ModIds;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function modio.CallbackProxy_DownloadSubscribedModfiles.DownloadSubscribedModfiles
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           UninstallUnsubscribed          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCallbackProxy_DownloadSubscribedModfiles* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCallbackProxy_DownloadSubscribedModfiles* UCallbackProxy_DownloadSubscribedModfiles::DownloadSubscribedModfiles(class UObject* WorldContext, bool UninstallUnsubscribed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.CallbackProxy_DownloadSubscribedModfiles.DownloadSubscribedModfiles"));

	struct
	{
		class UObject*                 WorldContext;
		bool                           UninstallUnsubscribed;
		class UCallbackProxy_DownloadSubscribedModfiles* ReturnValue;
	} params = {};

	params.WorldContext = WorldContext;
	params.UninstallUnsubscribed = UninstallUnsubscribed;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function modio.CallbackProxy_EditMod.EditMod
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ModId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FModioModEditor         ModEditor                      (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// class UCallbackProxy_EditMod*  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCallbackProxy_EditMod* UCallbackProxy_EditMod::EditMod(class UObject* WorldContext, int ModId, const struct FModioModEditor& ModEditor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.CallbackProxy_EditMod.EditMod"));

	struct
	{
		class UObject*                 WorldContext;
		int                            ModId;
		struct FModioModEditor         ModEditor;
		class UCallbackProxy_EditMod*  ReturnValue;
	} params = {};

	params.WorldContext = WorldContext;
	params.ModId = ModId;
	params.ModEditor = ModEditor;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function modio.CallbackProxy_EmailExchange.EmailExchange
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 SecurityCode                   (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCallbackProxy_EmailExchange* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCallbackProxy_EmailExchange* UCallbackProxy_EmailExchange::EmailExchange(class UObject* WorldContext, const struct FString& SecurityCode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.CallbackProxy_EmailExchange.EmailExchange"));

	struct
	{
		class UObject*                 WorldContext;
		struct FString                 SecurityCode;
		class UCallbackProxy_EmailExchange* ReturnValue;
	} params = {};

	params.WorldContext = WorldContext;
	params.SecurityCode = SecurityCode;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function modio.CallbackProxy_EmailRequest.EmailRequest
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Email                          (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCallbackProxy_EmailRequest* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCallbackProxy_EmailRequest* UCallbackProxy_EmailRequest::EmailRequest(class UObject* WorldContext, const struct FString& Email)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.CallbackProxy_EmailRequest.EmailRequest"));

	struct
	{
		class UObject*                 WorldContext;
		struct FString                 Email;
		class UCallbackProxy_EmailRequest* ReturnValue;
	} params = {};

	params.WorldContext = WorldContext;
	params.Email = Email;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function modio.CallbackProxy_GalaxyAuth.GalaxyAuth
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Appdata                        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCallbackProxy_GalaxyAuth* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCallbackProxy_GalaxyAuth* UCallbackProxy_GalaxyAuth::GalaxyAuth(class UObject* WorldContext, const struct FString& Appdata)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.CallbackProxy_GalaxyAuth.GalaxyAuth"));

	struct
	{
		class UObject*                 WorldContext;
		struct FString                 Appdata;
		class UCallbackProxy_GalaxyAuth* ReturnValue;
	} params = {};

	params.WorldContext = WorldContext;
	params.Appdata = Appdata;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function modio.CallbackProxy_GetAllMetadataKVP.GetAllMetadataKVP
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ModId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCallbackProxy_GetAllMetadataKVP* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCallbackProxy_GetAllMetadataKVP* UCallbackProxy_GetAllMetadataKVP::GetAllMetadataKVP(class UObject* WorldContext, int ModId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.CallbackProxy_GetAllMetadataKVP.GetAllMetadataKVP"));

	struct
	{
		class UObject*                 WorldContext;
		int                            ModId;
		class UCallbackProxy_GetAllMetadataKVP* ReturnValue;
	} params = {};

	params.WorldContext = WorldContext;
	params.ModId = ModId;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function modio.CallbackProxy_GetAllModDependencies.GetAllModDependencies
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ModId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCallbackProxy_GetAllModDependencies* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCallbackProxy_GetAllModDependencies* UCallbackProxy_GetAllModDependencies::GetAllModDependencies(class UObject* WorldContext, int ModId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.CallbackProxy_GetAllModDependencies.GetAllModDependencies"));

	struct
	{
		class UObject*                 WorldContext;
		int                            ModId;
		class UCallbackProxy_GetAllModDependencies* ReturnValue;
	} params = {};

	params.WorldContext = WorldContext;
	params.ModId = ModId;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function modio.CallbackProxy_GetAllModfiles.GetAllModfiles
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ModId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCallbackProxy_GetAllModfiles* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCallbackProxy_GetAllModfiles* UCallbackProxy_GetAllModfiles::GetAllModfiles(class UObject* WorldContext, int ModId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.CallbackProxy_GetAllModfiles.GetAllModfiles"));

	struct
	{
		class UObject*                 WorldContext;
		int                            ModId;
		class UCallbackProxy_GetAllModfiles* ReturnValue;
	} params = {};

	params.WorldContext = WorldContext;
	params.ModId = ModId;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function modio.CallbackProxy_GetAllMods.GetAllMods
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FModioFilterCreator     Filter                         (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FString>         ModTags                        (CPF_Parm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// int                            Limit                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Offset                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCallbackProxy_GetAllMods* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCallbackProxy_GetAllMods* UCallbackProxy_GetAllMods::GetAllMods(class UObject* WorldContext, const struct FModioFilterCreator& Filter, TArray<struct FString> ModTags, int Limit, int Offset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.CallbackProxy_GetAllMods.GetAllMods"));

	struct
	{
		class UObject*                 WorldContext;
		struct FModioFilterCreator     Filter;
		TArray<struct FString>         ModTags;
		int                            Limit;
		int                            Offset;
		class UCallbackProxy_GetAllMods* ReturnValue;
	} params = {};

	params.WorldContext = WorldContext;
	params.Filter = Filter;
	params.ModTags = ModTags;
	params.Limit = Limit;
	params.Offset = Offset;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function modio.CallbackProxy_GetAllModTags.GetAllModTags
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ModId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCallbackProxy_GetAllModTags* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCallbackProxy_GetAllModTags* UCallbackProxy_GetAllModTags::GetAllModTags(class UObject* WorldContext, int ModId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.CallbackProxy_GetAllModTags.GetAllModTags"));

	struct
	{
		class UObject*                 WorldContext;
		int                            ModId;
		class UCallbackProxy_GetAllModTags* ReturnValue;
	} params = {};

	params.WorldContext = WorldContext;
	params.ModId = ModId;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function modio.CallbackProxy_GetAuthenticatedUser.GetAuthenticatedUser
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCallbackProxy_GetAuthenticatedUser* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCallbackProxy_GetAuthenticatedUser* UCallbackProxy_GetAuthenticatedUser::GetAuthenticatedUser(class UObject* WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.CallbackProxy_GetAuthenticatedUser.GetAuthenticatedUser"));

	struct
	{
		class UObject*                 WorldContext;
		class UCallbackProxy_GetAuthenticatedUser* ReturnValue;
	} params = {};

	params.WorldContext = WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function modio.CallbackProxy_GetGame.GetGame
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            GameId                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCallbackProxy_GetGame*  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCallbackProxy_GetGame* UCallbackProxy_GetGame::GetGame(class UObject* WorldContext, int GameId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.CallbackProxy_GetGame.GetGame"));

	struct
	{
		class UObject*                 WorldContext;
		int                            GameId;
		class UCallbackProxy_GetGame*  ReturnValue;
	} params = {};

	params.WorldContext = WorldContext;
	params.GameId = GameId;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function modio.CallbackProxy_GetMod.GetMod
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ModId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCallbackProxy_GetMod*   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCallbackProxy_GetMod* UCallbackProxy_GetMod::GetMod(class UObject* WorldContext, int ModId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.CallbackProxy_GetMod.GetMod"));

	struct
	{
		class UObject*                 WorldContext;
		int                            ModId;
		class UCallbackProxy_GetMod*   ReturnValue;
	} params = {};

	params.WorldContext = WorldContext;
	params.ModId = ModId;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function modio.CallbackProxy_GetUserEvents.GetUserEvents
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Limit                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Offset                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCallbackProxy_GetUserEvents* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCallbackProxy_GetUserEvents* UCallbackProxy_GetUserEvents::GetUserEvents(class UObject* WorldContext, int Limit, int Offset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.CallbackProxy_GetUserEvents.GetUserEvents"));

	struct
	{
		class UObject*                 WorldContext;
		int                            Limit;
		int                            Offset;
		class UCallbackProxy_GetUserEvents* ReturnValue;
	} params = {};

	params.WorldContext = WorldContext;
	params.Limit = Limit;
	params.Offset = Offset;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function modio.CallbackProxy_GetUserModfiles.GetUserModfiles
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Limit                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Offset                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCallbackProxy_GetUserModfiles* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCallbackProxy_GetUserModfiles* UCallbackProxy_GetUserModfiles::GetUserModfiles(class UObject* WorldContext, int Limit, int Offset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.CallbackProxy_GetUserModfiles.GetUserModfiles"));

	struct
	{
		class UObject*                 WorldContext;
		int                            Limit;
		int                            Offset;
		class UCallbackProxy_GetUserModfiles* ReturnValue;
	} params = {};

	params.WorldContext = WorldContext;
	params.Limit = Limit;
	params.Offset = Offset;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function modio.CallbackProxy_GetUserMods.GetUserMods
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FModioFilterCreator     FilterCreator                  (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FString>         ModTags                        (CPF_Parm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// int                            Limit                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Offset                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCallbackProxy_GetUserMods* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCallbackProxy_GetUserMods* UCallbackProxy_GetUserMods::GetUserMods(class UObject* WorldContext, const struct FModioFilterCreator& FilterCreator, TArray<struct FString> ModTags, int Limit, int Offset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.CallbackProxy_GetUserMods.GetUserMods"));

	struct
	{
		class UObject*                 WorldContext;
		struct FModioFilterCreator     FilterCreator;
		TArray<struct FString>         ModTags;
		int                            Limit;
		int                            Offset;
		class UCallbackProxy_GetUserMods* ReturnValue;
	} params = {};

	params.WorldContext = WorldContext;
	params.FilterCreator = FilterCreator;
	params.ModTags = ModTags;
	params.Limit = Limit;
	params.Offset = Offset;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function modio.CallbackProxy_GetUserRatings.GetUserRatings
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Limit                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Offset                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCallbackProxy_GetUserRatings* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCallbackProxy_GetUserRatings* UCallbackProxy_GetUserRatings::GetUserRatings(class UObject* WorldContext, int Limit, int Offset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.CallbackProxy_GetUserRatings.GetUserRatings"));

	struct
	{
		class UObject*                 WorldContext;
		int                            Limit;
		int                            Offset;
		class UCallbackProxy_GetUserRatings* ReturnValue;
	} params = {};

	params.WorldContext = WorldContext;
	params.Limit = Limit;
	params.Offset = Offset;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function modio.CallbackProxy_GetUserSubscriptions.GetUserSubscriptions
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FModioFilterCreator     FilterCreator                  (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FString>         ModTags                        (CPF_Parm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// int                            Limit                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Offset                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCallbackProxy_GetUserSubscriptions* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCallbackProxy_GetUserSubscriptions* UCallbackProxy_GetUserSubscriptions::GetUserSubscriptions(class UObject* WorldContext, const struct FModioFilterCreator& FilterCreator, TArray<struct FString> ModTags, int Limit, int Offset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.CallbackProxy_GetUserSubscriptions.GetUserSubscriptions"));

	struct
	{
		class UObject*                 WorldContext;
		struct FModioFilterCreator     FilterCreator;
		TArray<struct FString>         ModTags;
		int                            Limit;
		int                            Offset;
		class UCallbackProxy_GetUserSubscriptions* ReturnValue;
	} params = {};

	params.WorldContext = WorldContext;
	params.FilterCreator = FilterCreator;
	params.ModTags = ModTags;
	params.Limit = Limit;
	params.Offset = Offset;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function modio.CallbackProxy_OculusAuth.OculusAuth
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Nonce                          (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 OculusUserId                   (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 AccessToken                    (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Email                          (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Device                         (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            DateExpires                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCallbackProxy_OculusAuth* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCallbackProxy_OculusAuth* UCallbackProxy_OculusAuth::OculusAuth(class UObject* WorldContext, const struct FString& Nonce, const struct FString& OculusUserId, const struct FString& AccessToken, const struct FString& Email, const struct FString& Device, int DateExpires)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.CallbackProxy_OculusAuth.OculusAuth"));

	struct
	{
		class UObject*                 WorldContext;
		struct FString                 Nonce;
		struct FString                 OculusUserId;
		struct FString                 AccessToken;
		struct FString                 Email;
		struct FString                 Device;
		int                            DateExpires;
		class UCallbackProxy_OculusAuth* ReturnValue;
	} params = {};

	params.WorldContext = WorldContext;
	params.Nonce = Nonce;
	params.OculusUserId = OculusUserId;
	params.AccessToken = AccessToken;
	params.Email = Email;
	params.Device = Device;
	params.DateExpires = DateExpires;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function modio.CallbackProxy_SetModDownloadListener.SetModDownloadListener
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCallbackProxy_SetModDownloadListener* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCallbackProxy_SetModDownloadListener* UCallbackProxy_SetModDownloadListener::SetModDownloadListener(class UObject* WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.CallbackProxy_SetModDownloadListener.SetModDownloadListener"));

	struct
	{
		class UObject*                 WorldContext;
		class UCallbackProxy_SetModDownloadListener* ReturnValue;
	} params = {};

	params.WorldContext = WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function modio.CallbackProxy_SetModEventListener.SetModEventListener
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCallbackProxy_SetModEventListener* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCallbackProxy_SetModEventListener* UCallbackProxy_SetModEventListener::SetModEventListener(class UObject* WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.CallbackProxy_SetModEventListener.SetModEventListener"));

	struct
	{
		class UObject*                 WorldContext;
		class UCallbackProxy_SetModEventListener* ReturnValue;
	} params = {};

	params.WorldContext = WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function modio.CallbackProxy_SetModfileUploadListener.SetModfileUploadListener
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCallbackProxy_SetModfileUploadListener* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCallbackProxy_SetModfileUploadListener* UCallbackProxy_SetModfileUploadListener::SetModfileUploadListener(class UObject* WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.CallbackProxy_SetModfileUploadListener.SetModfileUploadListener"));

	struct
	{
		class UObject*                 WorldContext;
		class UCallbackProxy_SetModfileUploadListener* ReturnValue;
	} params = {};

	params.WorldContext = WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function modio.CallbackProxy_SteamAuth.SteamAuth
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Base64Ticket                   (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCallbackProxy_SteamAuth* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCallbackProxy_SteamAuth* UCallbackProxy_SteamAuth::SteamAuth(class UObject* WorldContext, const struct FString& Base64Ticket)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.CallbackProxy_SteamAuth.SteamAuth"));

	struct
	{
		class UObject*                 WorldContext;
		struct FString                 Base64Ticket;
		class UCallbackProxy_SteamAuth* ReturnValue;
	} params = {};

	params.WorldContext = WorldContext;
	params.Base64Ticket = Base64Ticket;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function modio.CallbackProxy_SubmitReport.SubmitReport
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<EModioResourceType> Resource                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ID                             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<EModioReportType>  Report                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Name                           (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Summary                        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCallbackProxy_SubmitReport* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCallbackProxy_SubmitReport* UCallbackProxy_SubmitReport::SubmitReport(class UObject* WorldContext, TEnumAsByte<EModioResourceType> Resource, int ID, TEnumAsByte<EModioReportType> Report, const struct FString& Name, const struct FString& Summary)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.CallbackProxy_SubmitReport.SubmitReport"));

	struct
	{
		class UObject*                 WorldContext;
		TEnumAsByte<EModioResourceType> Resource;
		int                            ID;
		TEnumAsByte<EModioReportType>  Report;
		struct FString                 Name;
		struct FString                 Summary;
		class UCallbackProxy_SubmitReport* ReturnValue;
	} params = {};

	params.WorldContext = WorldContext;
	params.Resource = Resource;
	params.ID = ID;
	params.Report = Report;
	params.Name = Name;
	params.Summary = Summary;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function modio.CallbackProxy_SubscribeToMod.SubscribeToMod
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ModId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCallbackProxy_SubscribeToMod* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCallbackProxy_SubscribeToMod* UCallbackProxy_SubscribeToMod::SubscribeToMod(class UObject* WorldContext, int ModId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.CallbackProxy_SubscribeToMod.SubscribeToMod"));

	struct
	{
		class UObject*                 WorldContext;
		int                            ModId;
		class UCallbackProxy_SubscribeToMod* ReturnValue;
	} params = {};

	params.WorldContext = WorldContext;
	params.ModId = ModId;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function modio.CallbackProxy_UninstallUnavailableMods.UninstallUnavailableMods
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCallbackProxy_UninstallUnavailableMods* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCallbackProxy_UninstallUnavailableMods* UCallbackProxy_UninstallUnavailableMods::UninstallUnavailableMods(class UObject* WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.CallbackProxy_UninstallUnavailableMods.UninstallUnavailableMods"));

	struct
	{
		class UObject*                 WorldContext;
		class UCallbackProxy_UninstallUnavailableMods* ReturnValue;
	} params = {};

	params.WorldContext = WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function modio.CallbackProxy_UnsubscribeFromMod.UnsubscribeFromMod
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ModId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCallbackProxy_UnsubscribeFromMod* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCallbackProxy_UnsubscribeFromMod* UCallbackProxy_UnsubscribeFromMod::UnsubscribeFromMod(class UObject* WorldContext, int ModId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.CallbackProxy_UnsubscribeFromMod.UnsubscribeFromMod"));

	struct
	{
		class UObject*                 WorldContext;
		int                            ModId;
		class UCallbackProxy_UnsubscribeFromMod* ReturnValue;
	} params = {};

	params.WorldContext = WorldContext;
	params.ModId = ModId;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function modio.ModioFunctionLibrary.ModioUninstallMod
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ModId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           SuccessfullyUninstalled        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModioFunctionLibrary::ModioUninstallMod(class UObject* WorldContextObject, int ModId, bool* SuccessfullyUninstalled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.ModioFunctionLibrary.ModioUninstallMod"));

	struct
	{
		class UObject*                 WorldContextObject;
		int                            ModId;
		bool                           SuccessfullyUninstalled;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.ModId = ModId;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (SuccessfullyUninstalled != nullptr)
		*SuccessfullyUninstalled = params.SuccessfullyUninstalled;
}


// Function modio.ModioFunctionLibrary.ModioSetUserEventsPollInterval
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            IntervalInSeconds              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModioFunctionLibrary::ModioSetUserEventsPollInterval(class UObject* WorldContextObject, int IntervalInSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.ModioFunctionLibrary.ModioSetUserEventsPollInterval"));

	struct
	{
		class UObject*                 WorldContextObject;
		int                            IntervalInSeconds;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.IntervalInSeconds = IntervalInSeconds;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function modio.ModioFunctionLibrary.ModioSetModEventsPollInterval
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            IntervalInSeconds              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModioFunctionLibrary::ModioSetModEventsPollInterval(class UObject* WorldContextObject, int IntervalInSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.ModioFunctionLibrary.ModioSetModEventsPollInterval"));

	struct
	{
		class UObject*                 WorldContextObject;
		int                            IntervalInSeconds;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.IntervalInSeconds = IntervalInSeconds;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function modio.ModioFunctionLibrary.ModioResumeDownloads
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModioFunctionLibrary::ModioResumeDownloads(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.ModioFunctionLibrary.ModioResumeDownloads"));

	struct
	{
		class UObject*                 WorldContextObject;
	} params = {};

	params.WorldContextObject = WorldContextObject;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function modio.ModioFunctionLibrary.ModioProcess
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModioFunctionLibrary::ModioProcess(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.ModioFunctionLibrary.ModioProcess"));

	struct
	{
		class UObject*                 WorldContextObject;
	} params = {};

	params.WorldContextObject = WorldContextObject;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function modio.ModioFunctionLibrary.ModioPrioritizeModDownload
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ModId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModioFunctionLibrary::ModioPrioritizeModDownload(class UObject* WorldContextObject, int ModId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.ModioFunctionLibrary.ModioPrioritizeModDownload"));

	struct
	{
		class UObject*                 WorldContextObject;
		int                            ModId;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.ModId = ModId;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function modio.ModioFunctionLibrary.ModioPollEvents
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModioFunctionLibrary::ModioPollEvents(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.ModioFunctionLibrary.ModioPollEvents"));

	struct
	{
		class UObject*                 WorldContextObject;
	} params = {};

	params.WorldContextObject = WorldContextObject;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function modio.ModioFunctionLibrary.ModioPauseDownloads
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModioFunctionLibrary::ModioPauseDownloads(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.ModioFunctionLibrary.ModioPauseDownloads"));

	struct
	{
		class UObject*                 WorldContextObject;
	} params = {};

	params.WorldContextObject = WorldContextObject;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function modio.ModioFunctionLibrary.ModioLogout
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModioFunctionLibrary::ModioLogout(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.ModioFunctionLibrary.ModioLogout"));

	struct
	{
		class UObject*                 WorldContextObject;
	} params = {};

	params.WorldContextObject = WorldContextObject;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function modio.ModioFunctionLibrary.ModioIsLoggedIn
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           IsLoggedIn                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModioFunctionLibrary::ModioIsLoggedIn(class UObject* WorldContextObject, bool* IsLoggedIn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.ModioFunctionLibrary.ModioIsLoggedIn"));

	struct
	{
		class UObject*                 WorldContextObject;
		bool                           IsLoggedIn;
	} params = {};

	params.WorldContextObject = WorldContextObject;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (IsLoggedIn != nullptr)
		*IsLoggedIn = params.IsLoggedIn;
}


// Function modio.ModioFunctionLibrary.ModioIsCurrentUserSubscribed
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ModId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           IsSubscribed                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModioFunctionLibrary::ModioIsCurrentUserSubscribed(class UObject* WorldContextObject, int ModId, bool* IsSubscribed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.ModioFunctionLibrary.ModioIsCurrentUserSubscribed"));

	struct
	{
		class UObject*                 WorldContextObject;
		int                            ModId;
		bool                           IsSubscribed;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.ModId = ModId;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (IsSubscribed != nullptr)
		*IsSubscribed = params.IsSubscribed;
}


// Function modio.ModioFunctionLibrary.ModioInstallDownloadedMods
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModioFunctionLibrary::ModioInstallDownloadedMods(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.ModioFunctionLibrary.ModioInstallDownloadedMods"));

	struct
	{
		class UObject*                 WorldContextObject;
	} params = {};

	params.WorldContextObject = WorldContextObject;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function modio.ModioFunctionLibrary.ModioGetModState
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ModId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// unsigned char                  ModState                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModioFunctionLibrary::ModioGetModState(class UObject* WorldContextObject, int ModId, unsigned char* ModState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.ModioFunctionLibrary.ModioGetModState"));

	struct
	{
		class UObject*                 WorldContextObject;
		int                            ModId;
		unsigned char                  ModState;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.ModId = ModId;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (ModState != nullptr)
		*ModState = params.ModState;
}


// Function modio.ModioFunctionLibrary.ModioGetModfileUploadQueue
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FModioQueuedModfileUpload> UploadQueue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void UModioFunctionLibrary::ModioGetModfileUploadQueue(class UObject* WorldContextObject, TArray<struct FModioQueuedModfileUpload>* UploadQueue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.ModioFunctionLibrary.ModioGetModfileUploadQueue"));

	struct
	{
		class UObject*                 WorldContextObject;
		TArray<struct FModioQueuedModfileUpload> UploadQueue;
	} params = {};

	params.WorldContextObject = WorldContextObject;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (UploadQueue != nullptr)
		*UploadQueue = params.UploadQueue;
}


// Function modio.ModioFunctionLibrary.ModioGetModDownloadQueue
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FModioQueuedModDownload> QueuedMods                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void UModioFunctionLibrary::ModioGetModDownloadQueue(class UObject* WorldContextObject, TArray<struct FModioQueuedModDownload>* QueuedMods)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.ModioFunctionLibrary.ModioGetModDownloadQueue"));

	struct
	{
		class UObject*                 WorldContextObject;
		TArray<struct FModioQueuedModDownload> QueuedMods;
	} params = {};

	params.WorldContextObject = WorldContextObject;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (QueuedMods != nullptr)
		*QueuedMods = params.QueuedMods;
}


// Function modio.ModioFunctionLibrary.ModioGetInstalledMod
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ModId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Path                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FModioMod               Mod                            (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)

void UModioFunctionLibrary::ModioGetInstalledMod(class UObject* WorldContextObject, int ModId, struct FString* Path, struct FModioMod* Mod)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.ModioFunctionLibrary.ModioGetInstalledMod"));

	struct
	{
		class UObject*                 WorldContextObject;
		int                            ModId;
		struct FString                 Path;
		struct FModioMod               Mod;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.ModId = ModId;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Path != nullptr)
		*Path = params.Path;
	if (Mod != nullptr)
		*Mod = params.Mod;
}


// Function modio.ModioFunctionLibrary.ModioGetCurrentUserSubscriptions
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<int>                    ModIds                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void UModioFunctionLibrary::ModioGetCurrentUserSubscriptions(class UObject* WorldContextObject, TArray<int>* ModIds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.ModioFunctionLibrary.ModioGetCurrentUserSubscriptions"));

	struct
	{
		class UObject*                 WorldContextObject;
		TArray<int>                    ModIds;
	} params = {};

	params.WorldContextObject = WorldContextObject;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (ModIds != nullptr)
		*ModIds = params.ModIds;
}


// Function modio.ModioFunctionLibrary.ModioGetCurrentUserModRating
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ModId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// unsigned char                  ModRating                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModioFunctionLibrary::ModioGetCurrentUserModRating(class UObject* WorldContextObject, int ModId, unsigned char* ModRating)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.ModioFunctionLibrary.ModioGetCurrentUserModRating"));

	struct
	{
		class UObject*                 WorldContextObject;
		int                            ModId;
		unsigned char                  ModRating;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.ModId = ModId;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (ModRating != nullptr)
		*ModRating = params.ModRating;
}


// Function modio.ModioFunctionLibrary.ModioGetAllInstalledMods
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FModioInstalledMod> InstalledMods                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void UModioFunctionLibrary::ModioGetAllInstalledMods(class UObject* WorldContextObject, TArray<struct FModioInstalledMod>* InstalledMods)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.ModioFunctionLibrary.ModioGetAllInstalledMods"));

	struct
	{
		class UObject*                 WorldContextObject;
		TArray<struct FModioInstalledMod> InstalledMods;
	} params = {};

	params.WorldContextObject = WorldContextObject;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (InstalledMods != nullptr)
		*InstalledMods = params.InstalledMods;
}


// Function modio.ModioFunctionLibrary.ModioGetAllDownloadedMods
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<int>                    DownloadedMods                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void UModioFunctionLibrary::ModioGetAllDownloadedMods(class UObject* WorldContextObject, TArray<int>* DownloadedMods)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.ModioFunctionLibrary.ModioGetAllDownloadedMods"));

	struct
	{
		class UObject*                 WorldContextObject;
		TArray<int>                    DownloadedMods;
	} params = {};

	params.WorldContextObject = WorldContextObject;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (DownloadedMods != nullptr)
		*DownloadedMods = params.DownloadedMods;
}


// Function modio.ModioFunctionLibrary.ModioDownloadMod
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ModId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModioFunctionLibrary::ModioDownloadMod(class UObject* WorldContextObject, int ModId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.ModioFunctionLibrary.ModioDownloadMod"));

	struct
	{
		class UObject*                 WorldContextObject;
		int                            ModId;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.ModId = ModId;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function modio.ModioFunctionLibrary.ModioCurrentUser
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FModioUser              User                           (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)

void UModioFunctionLibrary::ModioCurrentUser(class UObject* WorldContextObject, struct FModioUser* User)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.ModioFunctionLibrary.ModioCurrentUser"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FModioUser              User;
	} params = {};

	params.WorldContextObject = WorldContextObject;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (User != nullptr)
		*User = params.User;
}


// Function modio.ModioFunctionLibrary.ModioCancelModDownload
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ModId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModioFunctionLibrary::ModioCancelModDownload(class UObject* WorldContextObject, int ModId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.ModioFunctionLibrary.ModioCancelModDownload"));

	struct
	{
		class UObject*                 WorldContextObject;
		int                            ModId;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.ModId = ModId;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function modio.ModioFunctionLibrary.ModioAddModfile
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ModId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FModioModfileCreator    ModfileCreator                 (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UModioFunctionLibrary::ModioAddModfile(class UObject* WorldContextObject, int ModId, const struct FModioModfileCreator& ModfileCreator)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.ModioFunctionLibrary.ModioAddModfile"));

	struct
	{
		class UObject*                 WorldContextObject;
		int                            ModId;
		struct FModioModfileCreator    ModfileCreator;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.ModId = ModId;
	params.ModfileCreator = ModfileCreator;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function modio.ModioFunctionLibrary.AuthenticateViaToken
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 AccessToken                    (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModioFunctionLibrary::AuthenticateViaToken(class UObject* WorldContextObject, const struct FString& AccessToken)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function modio.ModioFunctionLibrary.AuthenticateViaToken"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FString                 AccessToken;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.AccessToken = AccessToken;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
