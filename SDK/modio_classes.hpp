#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "modio_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class modio.CallbackProxy_AddMetadataKVP
// 0x0080 (0x00B0 - 0x0030)
class UCallbackProxy_AddMetadataKVP : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET
	class UObject*                                     WorldContextObject;                                       // 0x0088(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0090(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x00A0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class modio.CallbackProxy_AddMetadataKVP"));
		return ptr;
	}


	static class UCallbackProxy_AddMetadataKVP* AddMetadataKVP(class UObject* WorldContext, int ModId, TMap<struct FString, struct FString> MetadataKVP);
};


// Class modio.CallbackProxy_AddMod
// 0x00B0 (0x00E0 - 0x0030)
class UCallbackProxy_AddMod : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0030(0x0088) MISSED OFFSET
	class UObject*                                     WorldContextObject;                                       // 0x00B8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x00C0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x00D0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class modio.CallbackProxy_AddMod"));
		return ptr;
	}


	static class UCallbackProxy_AddMod* AddMod(class UObject* WorldContext, const struct FModioModCreator& ModCreator);
};


// Class modio.CallbackProxy_AddModDependencies
// 0x0040 (0x0070 - 0x0030)
class UCallbackProxy_AddModDependencies : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET
	class UObject*                                     WorldContextObject;                                       // 0x0048(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class modio.CallbackProxy_AddModDependencies"));
		return ptr;
	}


	static class UCallbackProxy_AddModDependencies* AddModDependencies(class UObject* WorldContext, int ModId, TArray<int> Dependencies);
};


// Class modio.CallbackProxy_AddModImages
// 0x0040 (0x0070 - 0x0030)
class UCallbackProxy_AddModImages : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET
	class UObject*                                     WorldContextObject;                                       // 0x0048(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class modio.CallbackProxy_AddModImages"));
		return ptr;
	}


	static class UCallbackProxy_AddModImages* AddModImages(class UObject* WorldContext, int ModId, TArray<struct FString> ImagePaths);
};


// Class modio.CallbackProxy_AddModLogo
// 0x0040 (0x0070 - 0x0030)
class UCallbackProxy_AddModLogo : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET
	class UObject*                                     WorldContextObject;                                       // 0x0048(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class modio.CallbackProxy_AddModLogo"));
		return ptr;
	}


	static class UCallbackProxy_AddModLogo* AddModLogo(class UObject* WorldContext, int ModId, const struct FString& LogoPath);
};


// Class modio.CallbackProxy_AddModRating
// 0x0030 (0x0060 - 0x0030)
class UCallbackProxy_AddModRating : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	class UObject*                                     WorldContextObject;                                       // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class modio.CallbackProxy_AddModRating"));
		return ptr;
	}


	static class UCallbackProxy_AddModRating* AddModRating(class UObject* WorldContext, int ModId, bool IsRatingPositive);
};


// Class modio.CallbackProxy_AddModSketchfabLinks
// 0x0040 (0x0070 - 0x0030)
class UCallbackProxy_AddModSketchfabLinks : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET
	class UObject*                                     WorldContextObject;                                       // 0x0048(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class modio.CallbackProxy_AddModSketchfabLinks"));
		return ptr;
	}


	static class UCallbackProxy_AddModSketchfabLinks* AddModSketchfabLinks(class UObject* WorldContext, int ModId, TArray<struct FString> SketchfabLinks);
};


// Class modio.CallbackProxy_AddModTags
// 0x0040 (0x0070 - 0x0030)
class UCallbackProxy_AddModTags : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET
	class UObject*                                     WorldContextObject;                                       // 0x0048(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class modio.CallbackProxy_AddModTags"));
		return ptr;
	}


	static class UCallbackProxy_AddModTags* AddModTags(class UObject* WorldContext, int ModId, TArray<struct FString> Tags);
};


// Class modio.CallbackProxy_AddModYoutubeLinks
// 0x0040 (0x0070 - 0x0030)
class UCallbackProxy_AddModYoutubeLinks : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET
	class UObject*                                     WorldContextObject;                                       // 0x0048(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class modio.CallbackProxy_AddModYoutubeLinks"));
		return ptr;
	}


	static class UCallbackProxy_AddModYoutubeLinks* AddModYoutubeLinks(class UObject* WorldContext, int ModId, TArray<struct FString> YoutubeLinks);
};


// Class modio.CallbackProxy_DeleteMetadataKVP
// 0x0080 (0x00B0 - 0x0030)
class UCallbackProxy_DeleteMetadataKVP : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET
	class UObject*                                     WorldContextObject;                                       // 0x0088(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0090(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x00A0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class modio.CallbackProxy_DeleteMetadataKVP"));
		return ptr;
	}


	static class UCallbackProxy_DeleteMetadataKVP* DeleteMetadataKVP(class UObject* WorldContext, int ModId, TMap<struct FString, struct FString> MetadataKVP);
};


// Class modio.CallbackProxy_DeleteModDependencies
// 0x0040 (0x0070 - 0x0030)
class UCallbackProxy_DeleteModDependencies : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET
	class UObject*                                     WorldContextObject;                                       // 0x0048(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class modio.CallbackProxy_DeleteModDependencies"));
		return ptr;
	}


	static class UCallbackProxy_DeleteModDependencies* DeleteModDependencies(class UObject* WorldContext, int ModId, TArray<int> Dependencies);
};


// Class modio.CallbackProxy_DeleteModImages
// 0x0040 (0x0070 - 0x0030)
class UCallbackProxy_DeleteModImages : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET
	class UObject*                                     WorldContextObject;                                       // 0x0048(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class modio.CallbackProxy_DeleteModImages"));
		return ptr;
	}


	static class UCallbackProxy_DeleteModImages* DeleteModImages(class UObject* WorldContext, int ModId, TArray<struct FString> ImagePaths);
};


// Class modio.CallbackProxy_DeleteModSketchfabLinks
// 0x0040 (0x0070 - 0x0030)
class UCallbackProxy_DeleteModSketchfabLinks : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET
	class UObject*                                     WorldContextObject;                                       // 0x0048(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class modio.CallbackProxy_DeleteModSketchfabLinks"));
		return ptr;
	}


	static class UCallbackProxy_DeleteModSketchfabLinks* DeleteModSketchfabLinks(class UObject* WorldContext, int ModId, TArray<struct FString> SketchfabLinks);
};


// Class modio.CallbackProxy_DeleteModTags
// 0x0040 (0x0070 - 0x0030)
class UCallbackProxy_DeleteModTags : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET
	class UObject*                                     WorldContextObject;                                       // 0x0048(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class modio.CallbackProxy_DeleteModTags"));
		return ptr;
	}


	static class UCallbackProxy_DeleteModTags* DeleteModTags(class UObject* WorldContext, int ModId, TArray<struct FString> Tags);
};


// Class modio.CallbackProxy_DeleteModYoutubeLinks
// 0x0040 (0x0070 - 0x0030)
class UCallbackProxy_DeleteModYoutubeLinks : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET
	class UObject*                                     WorldContextObject;                                       // 0x0048(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class modio.CallbackProxy_DeleteModYoutubeLinks"));
		return ptr;
	}


	static class UCallbackProxy_DeleteModYoutubeLinks* DeleteModYoutubeLinks(class UObject* WorldContext, int ModId, TArray<struct FString> YoutubeLinks);
};


// Class modio.CallbackProxy_DownloadModfilesById
// 0x0038 (0x0068 - 0x0030)
class UCallbackProxy_DownloadModfilesById : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	class UObject*                                     WorldContextObject;                                       // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class modio.CallbackProxy_DownloadModfilesById"));
		return ptr;
	}


	static class UCallbackProxy_DownloadModfilesById* DownloadModfilesById(class UObject* WorldContext, TArray<int> ModIds);
};


// Class modio.CallbackProxy_DownloadSubscribedModfiles
// 0x0030 (0x0060 - 0x0030)
class UCallbackProxy_DownloadSubscribedModfiles : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	class UObject*                                     WorldContextObject;                                       // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class modio.CallbackProxy_DownloadSubscribedModfiles"));
		return ptr;
	}


	static class UCallbackProxy_DownloadSubscribedModfiles* DownloadSubscribedModfiles(class UObject* WorldContext, bool UninstallUnsubscribed);
};


// Class modio.CallbackProxy_EditMod
// 0x0098 (0x00C8 - 0x0030)
class UCallbackProxy_EditMod : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0030(0x0070) MISSED OFFSET
	class UObject*                                     WorldContextObject;                                       // 0x00A0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x00A8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x00B8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class modio.CallbackProxy_EditMod"));
		return ptr;
	}


	static class UCallbackProxy_EditMod* EditMod(class UObject* WorldContext, int ModId, const struct FModioModEditor& ModEditor);
};


// Class modio.CallbackProxy_EmailExchange
// 0x0038 (0x0068 - 0x0030)
class UCallbackProxy_EmailExchange : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	class UObject*                                     WorldContextObject;                                       // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class modio.CallbackProxy_EmailExchange"));
		return ptr;
	}


	static class UCallbackProxy_EmailExchange* EmailExchange(class UObject* WorldContext, const struct FString& SecurityCode);
};


// Class modio.CallbackProxy_EmailRequest
// 0x0038 (0x0068 - 0x0030)
class UCallbackProxy_EmailRequest : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	class UObject*                                     WorldContextObject;                                       // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class modio.CallbackProxy_EmailRequest"));
		return ptr;
	}


	static class UCallbackProxy_EmailRequest* EmailRequest(class UObject* WorldContext, const struct FString& Email);
};


// Class modio.CallbackProxy_GalaxyAuth
// 0x0038 (0x0068 - 0x0030)
class UCallbackProxy_GalaxyAuth : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	class UObject*                                     WorldContextObject;                                       // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class modio.CallbackProxy_GalaxyAuth"));
		return ptr;
	}


	static class UCallbackProxy_GalaxyAuth* GalaxyAuth(class UObject* WorldContext, const struct FString& Appdata);
};


// Class modio.CallbackProxy_GetAllMetadataKVP
// 0x0030 (0x0060 - 0x0030)
class UCallbackProxy_GetAllMetadataKVP : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	class UObject*                                     WorldContextObject;                                       // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class modio.CallbackProxy_GetAllMetadataKVP"));
		return ptr;
	}


	static class UCallbackProxy_GetAllMetadataKVP* GetAllMetadataKVP(class UObject* WorldContext, int ModId);
};


// Class modio.CallbackProxy_GetAllModDependencies
// 0x0030 (0x0060 - 0x0030)
class UCallbackProxy_GetAllModDependencies : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	class UObject*                                     WorldContextObject;                                       // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class modio.CallbackProxy_GetAllModDependencies"));
		return ptr;
	}


	static class UCallbackProxy_GetAllModDependencies* GetAllModDependencies(class UObject* WorldContext, int ModId);
};


// Class modio.CallbackProxy_GetAllModfiles
// 0x0030 (0x0060 - 0x0030)
class UCallbackProxy_GetAllModfiles : public UOnlineBlueprintCallProxyBase
{
public:
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	class UObject*                                     WorldContextObject;                                       // 0x0050(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class modio.CallbackProxy_GetAllModfiles"));
		return ptr;
	}


	static class UCallbackProxy_GetAllModfiles* GetAllModfiles(class UObject* WorldContext, int ModId);
};


// Class modio.CallbackProxy_GetAllMods
// 0x0068 (0x0098 - 0x0030)
class UCallbackProxy_GetAllMods : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0030(0x0040) MISSED OFFSET
	class UObject*                                     WorldContextObject;                                       // 0x0070(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0078(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0088(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class modio.CallbackProxy_GetAllMods"));
		return ptr;
	}


	static class UCallbackProxy_GetAllMods* GetAllMods(class UObject* WorldContext, const struct FModioFilterCreator& Filter, TArray<struct FString> ModTags, int Limit, int Offset);
};


// Class modio.CallbackProxy_GetAllModTags
// 0x0030 (0x0060 - 0x0030)
class UCallbackProxy_GetAllModTags : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	class UObject*                                     WorldContextObject;                                       // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class modio.CallbackProxy_GetAllModTags"));
		return ptr;
	}


	static class UCallbackProxy_GetAllModTags* GetAllModTags(class UObject* WorldContext, int ModId);
};


// Class modio.CallbackProxy_GetAuthenticatedUser
// 0x0028 (0x0058 - 0x0030)
class UCallbackProxy_GetAuthenticatedUser : public UOnlineBlueprintCallProxyBase
{
public:
	class UObject*                                     WorldContextObject;                                       // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class modio.CallbackProxy_GetAuthenticatedUser"));
		return ptr;
	}


	static class UCallbackProxy_GetAuthenticatedUser* GetAuthenticatedUser(class UObject* WorldContext);
};


// Class modio.CallbackProxy_GetGame
// 0x0030 (0x0060 - 0x0030)
class UCallbackProxy_GetGame : public UOnlineBlueprintCallProxyBase
{
public:
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
	class UObject*                                     WorldContextObject;                                       // 0x0058(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class modio.CallbackProxy_GetGame"));
		return ptr;
	}


	static class UCallbackProxy_GetGame* GetGame(class UObject* WorldContext, int GameId);
};


// Class modio.CallbackProxy_GetMod
// 0x0030 (0x0060 - 0x0030)
class UCallbackProxy_GetMod : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	class UObject*                                     WorldContextObject;                                       // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class modio.CallbackProxy_GetMod"));
		return ptr;
	}


	static class UCallbackProxy_GetMod* GetMod(class UObject* WorldContext, int ModId);
};


// Class modio.CallbackProxy_GetUserEvents
// 0x0030 (0x0060 - 0x0030)
class UCallbackProxy_GetUserEvents : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	class UObject*                                     WorldContextObject;                                       // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class modio.CallbackProxy_GetUserEvents"));
		return ptr;
	}


	static class UCallbackProxy_GetUserEvents* GetUserEvents(class UObject* WorldContext, int Limit, int Offset);
};


// Class modio.CallbackProxy_GetUserModfiles
// 0x0030 (0x0060 - 0x0030)
class UCallbackProxy_GetUserModfiles : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	class UObject*                                     WorldContextObject;                                       // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class modio.CallbackProxy_GetUserModfiles"));
		return ptr;
	}


	static class UCallbackProxy_GetUserModfiles* GetUserModfiles(class UObject* WorldContext, int Limit, int Offset);
};


// Class modio.CallbackProxy_GetUserMods
// 0x0068 (0x0098 - 0x0030)
class UCallbackProxy_GetUserMods : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0030(0x0040) MISSED OFFSET
	class UObject*                                     WorldContextObject;                                       // 0x0070(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0078(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0088(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class modio.CallbackProxy_GetUserMods"));
		return ptr;
	}


	static class UCallbackProxy_GetUserMods* GetUserMods(class UObject* WorldContext, const struct FModioFilterCreator& FilterCreator, TArray<struct FString> ModTags, int Limit, int Offset);
};


// Class modio.CallbackProxy_GetUserRatings
// 0x0030 (0x0060 - 0x0030)
class UCallbackProxy_GetUserRatings : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	class UObject*                                     WorldContextObject;                                       // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class modio.CallbackProxy_GetUserRatings"));
		return ptr;
	}


	static class UCallbackProxy_GetUserRatings* GetUserRatings(class UObject* WorldContext, int Limit, int Offset);
};


// Class modio.CallbackProxy_GetUserSubscriptions
// 0x0068 (0x0098 - 0x0030)
class UCallbackProxy_GetUserSubscriptions : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0030(0x0040) MISSED OFFSET
	class UObject*                                     WorldContextObject;                                       // 0x0070(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0078(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0088(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class modio.CallbackProxy_GetUserSubscriptions"));
		return ptr;
	}


	static class UCallbackProxy_GetUserSubscriptions* GetUserSubscriptions(class UObject* WorldContext, const struct FModioFilterCreator& FilterCreator, TArray<struct FString> ModTags, int Limit, int Offset);
};


// Class modio.CallbackProxy_OculusAuth
// 0x0080 (0x00B0 - 0x0030)
class UCallbackProxy_OculusAuth : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET
	class UObject*                                     WorldContextObject;                                       // 0x0088(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0090(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x00A0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class modio.CallbackProxy_OculusAuth"));
		return ptr;
	}


	static class UCallbackProxy_OculusAuth* OculusAuth(class UObject* WorldContext, const struct FString& Nonce, const struct FString& OculusUserId, const struct FString& AccessToken, const struct FString& Email, const struct FString& Device, int DateExpires);
};


// Class modio.CallbackProxy_SetModDownloadListener
// 0x0028 (0x0058 - 0x0030)
class UCallbackProxy_SetModDownloadListener : public UOnlineBlueprintCallProxyBase
{
public:
	class UObject*                                     WorldContextObject;                                       // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class modio.CallbackProxy_SetModDownloadListener"));
		return ptr;
	}


	static class UCallbackProxy_SetModDownloadListener* SetModDownloadListener(class UObject* WorldContext);
};


// Class modio.CallbackProxy_SetModEventListener
// 0x0028 (0x0058 - 0x0030)
class UCallbackProxy_SetModEventListener : public UOnlineBlueprintCallProxyBase
{
public:
	class UObject*                                     WorldContextObject;                                       // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class modio.CallbackProxy_SetModEventListener"));
		return ptr;
	}


	static class UCallbackProxy_SetModEventListener* SetModEventListener(class UObject* WorldContext);
};


// Class modio.CallbackProxy_SetModfileUploadListener
// 0x0028 (0x0058 - 0x0030)
class UCallbackProxy_SetModfileUploadListener : public UOnlineBlueprintCallProxyBase
{
public:
	class UObject*                                     WorldContextObject;                                       // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class modio.CallbackProxy_SetModfileUploadListener"));
		return ptr;
	}


	static class UCallbackProxy_SetModfileUploadListener* SetModfileUploadListener(class UObject* WorldContext);
};


// Class modio.CallbackProxy_SteamAuth
// 0x0038 (0x0068 - 0x0030)
class UCallbackProxy_SteamAuth : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	class UObject*                                     WorldContextObject;                                       // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class modio.CallbackProxy_SteamAuth"));
		return ptr;
	}


	static class UCallbackProxy_SteamAuth* SteamAuth(class UObject* WorldContext, const struct FString& Base64Ticket);
};


// Class modio.CallbackProxy_SubmitReport
// 0x0058 (0x0088 - 0x0030)
class UCallbackProxy_SubmitReport : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0030(0x0030) MISSED OFFSET
	class UObject*                                     WorldContextObject;                                       // 0x0060(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0078(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class modio.CallbackProxy_SubmitReport"));
		return ptr;
	}


	static class UCallbackProxy_SubmitReport* SubmitReport(class UObject* WorldContext, TEnumAsByte<EModioResourceType> Resource, int ID, TEnumAsByte<EModioReportType> Report, const struct FString& Name, const struct FString& Summary);
};


// Class modio.CallbackProxy_SubscribeToMod
// 0x0030 (0x0060 - 0x0030)
class UCallbackProxy_SubscribeToMod : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	class UObject*                                     WorldContextObject;                                       // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class modio.CallbackProxy_SubscribeToMod"));
		return ptr;
	}


	static class UCallbackProxy_SubscribeToMod* SubscribeToMod(class UObject* WorldContext, int ModId);
};


// Class modio.CallbackProxy_UninstallUnavailableMods
// 0x0028 (0x0058 - 0x0030)
class UCallbackProxy_UninstallUnavailableMods : public UOnlineBlueprintCallProxyBase
{
public:
	class UObject*                                     WorldContextObject;                                       // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class modio.CallbackProxy_UninstallUnavailableMods"));
		return ptr;
	}


	static class UCallbackProxy_UninstallUnavailableMods* UninstallUnavailableMods(class UObject* WorldContext);
};


// Class modio.CallbackProxy_UnsubscribeFromMod
// 0x0030 (0x0060 - 0x0030)
class UCallbackProxy_UnsubscribeFromMod : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	class UObject*                                     WorldContextObject;                                       // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class modio.CallbackProxy_UnsubscribeFromMod"));
		return ptr;
	}


	static class UCallbackProxy_UnsubscribeFromMod* UnsubscribeFromMod(class UObject* WorldContext, int ModId);
};


// Class modio.ModioActorComponent
// 0x0010 (0x00D8 - 0x00C8)
class UModioActorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class modio.ModioActorComponent"));
		return ptr;
	}

};


// Class modio.ModioFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UModioFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class modio.ModioFunctionLibrary"));
		return ptr;
	}


	static void ModioUninstallMod(class UObject* WorldContextObject, int ModId, bool* SuccessfullyUninstalled);
	static void ModioSetUserEventsPollInterval(class UObject* WorldContextObject, int IntervalInSeconds);
	static void ModioSetModEventsPollInterval(class UObject* WorldContextObject, int IntervalInSeconds);
	static void ModioResumeDownloads(class UObject* WorldContextObject);
	static void ModioProcess(class UObject* WorldContextObject);
	static void ModioPrioritizeModDownload(class UObject* WorldContextObject, int ModId);
	static void ModioPollEvents(class UObject* WorldContextObject);
	static void ModioPauseDownloads(class UObject* WorldContextObject);
	static void ModioLogout(class UObject* WorldContextObject);
	static void ModioIsLoggedIn(class UObject* WorldContextObject, bool* IsLoggedIn);
	static void ModioIsCurrentUserSubscribed(class UObject* WorldContextObject, int ModId, bool* IsSubscribed);
	static void ModioInstallDownloadedMods(class UObject* WorldContextObject);
	static void ModioGetModState(class UObject* WorldContextObject, int ModId, unsigned char* ModState);
	static void ModioGetModfileUploadQueue(class UObject* WorldContextObject, TArray<struct FModioQueuedModfileUpload>* UploadQueue);
	static void ModioGetModDownloadQueue(class UObject* WorldContextObject, TArray<struct FModioQueuedModDownload>* QueuedMods);
	static void ModioGetInstalledMod(class UObject* WorldContextObject, int ModId, struct FString* Path, struct FModioMod* Mod);
	static void ModioGetCurrentUserSubscriptions(class UObject* WorldContextObject, TArray<int>* ModIds);
	static void ModioGetCurrentUserModRating(class UObject* WorldContextObject, int ModId, unsigned char* ModRating);
	static void ModioGetAllInstalledMods(class UObject* WorldContextObject, TArray<struct FModioInstalledMod>* InstalledMods);
	static void ModioGetAllDownloadedMods(class UObject* WorldContextObject, TArray<int>* DownloadedMods);
	static void ModioDownloadMod(class UObject* WorldContextObject, int ModId);
	static void ModioCurrentUser(class UObject* WorldContextObject, struct FModioUser* User);
	static void ModioCancelModDownload(class UObject* WorldContextObject, int ModId);
	static void ModioAddModfile(class UObject* WorldContextObject, int ModId, const struct FModioModfileCreator& ModfileCreator);
	static void AuthenticateViaToken(class UObject* WorldContextObject, const struct FString& AccessToken);
};


// Class modio.ModioSettings
// 0x0030 (0x0058 - 0x0028)
class UModioSettings : public UObject
{
public:
	int                                                GameId;                                                   // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FString                                     ApiKey;                                                   // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     RootDirectory;                                            // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bRootDirectoryIsInUserSettingsDirectory : 1;              // 0x0050(0x0001) (CPF_Edit, CPF_Config, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bRunOnDedicatedServer : 1;                                // 0x0050(0x0001) (CPF_Edit, CPF_Config, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bIsLiveEnvironment : 1;                                   // 0x0050(0x0001) (CPF_Edit, CPF_Config, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bInstallOnModDownload : 1;                                // 0x0050(0x0001) (CPF_Edit, CPF_Config, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bRetrieveModsFromOtherGames : 1;                          // 0x0050(0x0001) (CPF_Edit, CPF_Config, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bEnablePolling : 1;                                       // 0x0050(0x0001) (CPF_Edit, CPF_Config, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class modio.ModioSettings"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
