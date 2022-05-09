#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum UnrealWebServer.EHttpRequestMethod
enum class EHttpRequestMethod : uint8_t
{
	EHttpRequestMethod__VE_ALL     = 0,
	EHttpRequestMethod__VE_GET     = 1,
	EHttpRequestMethod__VE_POST    = 2,
	EHttpRequestMethod__VE_HEAD    = 3,
	EHttpRequestMethod__VE_CONNECT = 4,
	EHttpRequestMethod__VE_PUT     = 5,
	EHttpRequestMethod__VE_OPTIONS = 6,
	EHttpRequestMethod__VE_PROPFIND = 7,
	EHttpRequestMethod__VE_MKCOL   = 8,
	EHttpRequestMethod__VE_MAX     = 9
};


// Enum UnrealWebServer.EHttpStatusCode
enum class EHttpStatusCode : uint8_t
{
	EHttpStatusCode__VE_Continue   = 0,
	EHttpStatusCode__VE_SwitchingProtocols = 1,
	EHttpStatusCode__VE_Processing = 2,
	EHttpStatusCode__VE_OK         = 3,
	EHttpStatusCode__VE_Created    = 4,
	EHttpStatusCode__VE_Accepted   = 5,
	EHttpStatusCode__VE_NonAuthoritativeInformation = 6,
	EHttpStatusCode__VE_NoContent  = 7,
	EHttpStatusCode__VE_ResetContent = 8,
	EHttpStatusCode__VE_PartialContent = 9,
	EHttpStatusCode__VE_MultiStatus = 10,
	EHttpStatusCode__VE_AlreadyReported = 11,
	EHttpStatusCode__VE_ImUsed     = 12,
	EHttpStatusCode__VE_MultipleChoices = 13,
	EHttpStatusCode__VE_MovedPermanently = 14,
	EHttpStatusCode__VE_Found      = 15,
	EHttpStatusCode__VE_SeeOther   = 16,
	EHttpStatusCode__VE_NotModified = 17,
	EHttpStatusCode__VE_UseProxy   = 18,
	EHttpStatusCode__VE_SwitchProxy = 19,
	EHttpStatusCode__VE_TemporaryRedirect = 20,
	EHttpStatusCode__VE_PermanentRedirect = 21,
	EHttpStatusCode__VE_BadRequest = 22,
	EHttpStatusCode__VE_Unauthorized = 23,
	EHttpStatusCode__VE_PaymentRequired = 24,
	EHttpStatusCode__VE_Forbidden  = 25,
	EHttpStatusCode__VE_NotFound   = 26,
	EHttpStatusCode__VE_MethodNotAllowed = 27,
	EHttpStatusCode__VE_NotAcceptable = 28,
	EHttpStatusCode__VE_ProxyAuthenticationRequired = 29,
	EHttpStatusCode__VE_RequestTimeout = 30,
	EHttpStatusCode__VE_Conflict   = 31,
	EHttpStatusCode__VE_Gone       = 32,
	EHttpStatusCode__VE_LengthRequired = 33,
	EHttpStatusCode__VE_PreconditionFailed = 34,
	EHttpStatusCode__VE_PayloadTooLarge = 35,
	EHttpStatusCode__VE_UriTooLong = 36,
	EHttpStatusCode__VE_UnsupportedMediaType = 37,
	EHttpStatusCode__VE_RangeNotSatisfiable = 38,
	EHttpStatusCode__VE_ExpectationFailed = 39,
	EHttpStatusCode__VE_ImATeapot  = 40,
	EHttpStatusCode__VE_MisdirectedRequest = 41,
	EHttpStatusCode__VE_UnprocessableEntity = 42,
	EHttpStatusCode__VE_Locked     = 43,
	EHttpStatusCode__VE_Failed     = 44,
	EHttpStatusCode__VE_UpgradeRequired = 45,
	EHttpStatusCode__VE_PreconditionRequired = 46,
	EHttpStatusCode__VE_TooManyRequests = 47,
	EHttpStatusCode__VE_RequestHeaderFieldsTooLarge = 48,
	EHttpStatusCode__VE_UnavailableForLegalReasons = 49,
	EHttpStatusCode__VE_InternalServerError = 50,
	EHttpStatusCode__VE_NotImplemented = 51,
	EHttpStatusCode__VE_BadGateway = 52,
	EHttpStatusCode__VE_ServiceUnavailable = 53,
	EHttpStatusCode__VE_GatewayTimeout = 54,
	EHttpStatusCode__VE_HttpVersionNotSupported = 55,
	EHttpStatusCode__VE_VariantAlsoNegotiates = 56,
	EHttpStatusCode__VE_InsufficientStorage = 57,
	EHttpStatusCode__VE_LoopDetected = 58,
	EHttpStatusCode__VE_NotExtended = 59,
	EHttpStatusCode__VE_NetworkAuthenticationRequired = 60,
	EHttpStatusCode__VE_MAX        = 61
};


// Enum UnrealWebServer.EMediaType
enum class EMediaType : uint8_t
{
	EMediaType__APPLICATION_JAVASCRIPT = 0,
	EMediaType__APPLICATION_JSON   = 1,
	EMediaType__APPLICATION_OCTET_STREAM = 2,
	EMediaType__APPLICATION_OGG    = 3,
	EMediaType__APPLICATION_PDF    = 4,
	EMediaType__APPLICATION_ZIP    = 5,
	EMediaType__AUDIO_MPEG         = 6,
	EMediaType__AUDIO_WAV          = 7,
	EMediaType__IMAGE_GIF          = 8,
	EMediaType__IMAGE_JPEG         = 9,
	EMediaType__IMAGE_PNG          = 10,
	EMediaType__IMAGE_TIFF         = 11,
	EMediaType__MULTIPART_FORM_DATA = 12,
	EMediaType__TEXT_CSS           = 13,
	EMediaType__TEXT_CSV           = 14,
	EMediaType__TEXT_HTML          = 15,
	EMediaType__TEXT_JAVASCRIPT    = 16,
	EMediaType__TEXT_PLAIN         = 17,
	EMediaType__TEXT_XML           = 18,
	EMediaType__VIDEO_MP4          = 19,
	EMediaType__VIDEO_MPEG         = 20,
	EMediaType__VIDEO_QUICKTIME    = 21,
	EMediaType__VIDEO_WEBM         = 22,
	EMediaType__EMediaType_MAX     = 23
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
