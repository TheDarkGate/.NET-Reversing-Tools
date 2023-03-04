#ifndef _KEYGEN_H
#define _KEYGEN_H

#include <wtypes.h>		// needed for FILETIME definition

#pragma comment(lib, "keygen.lib")

// #define OBSIDIUM_USE_NAMESPACE in your project to wrap the Obsidium API 
// into a namespace
// Any API calls etc. will need to be prefixed with obsidium::
#ifdef __cplusplus
#ifdef OBSIDIUM_USE_NAMESPACE
namespace obsidium {
#endif
#endif

//#define HAVE_STDINT
#ifdef HAVE_STDINT
	#include <stdint.h>
#else
	#ifdef _MSC_VER
		typedef unsigned __int8 uint8_t;
		typedef unsigned __int16 uint16_t;
		typedef unsigned __int32 uint32_t;
	#else
		typedef unsigned char uint8_t;
		typedef unsigned short uint16_t;
		typedef unsigned long uint32_t;
	#endif
#endif

#pragma pack(push)
#pragma pack(1)

// error codes returned by GenerateLicenseLong and GenerateLicenseShort
#define KEYGEN_ERROR				0		// internal error
#define KEYGEN_INVALID_PARAMETER	-1		// invalid parameter passed to function
#define KEYGEN_OPF_OPEN_ERROR		-2		// error opening project file
#define KEYGEN_OPF_INVALID			-3		// invalid project file
#define KEYGEN_OPF_ERROR			-4		// no keys found in project file or read error
#define KEYGEN_FAIL_ALLOC			-5		// memory allocation error
#define KEYGEN_FAIL_BUSY			-6
#define KEYGEN_FAIL_USB				-7

// error codes returned by VerifyLicenseLong and VerifyLicenseShort
#define KEYVER_OK					1		// keyfile verification successful
#define KEYVER_FAIL					0		// keyfile is invalid
#define KEYVER_INVALID_PARAMETER	-1		// invalid parameter passed to function
#define KEYVER_OPF_OPEN_ERROR		-2		// error opening project file
#define KEYVER_OPF_INVALID			-3		// invalid project file
#define KEYVER_FAIL_ALLOC			-4		// memory allocation error
#define KEYVER_FAIL_BUSY			-5		// the library is busy

// flags passed to GetLicenseHash
#define LICENSE_BIN					0		// binary key
#define LICENSE_TEXT				1		// text key
#define LICENSE_SHORT				2		// short key

// flags used in KEYGEN_INFO_LONG and KEYVER_INFO_LONG
#define LONGKEY_FLAG_TEXT			1		// generate or verify text key instead of binary key
#define LONGKEY_FLAG_LEGACY_SYSID	2		// use old system ID format (Obsidium < 1.4.2)
#define LONGKEY_FLAG_USBID_DRIVE	4		// get USB device ID from drive string in lpUsbId

// structure passed to GenerateLicenseLong
typedef struct
{
	uint32_t		dwSize;					// size of this structure
	uint32_t		dwFlags;				// flags
	const char*		lpInfo1;				// license info
	const char*		lpInfo2;				// ""
	const char*		lpInfo3;				// ""
	const char*		lpExtInfo;				// ""
	const char*		lpSystemId;				// system ID string
	const FILETIME*	lpExpDate;				// expiration date
	void*			lpBuffer;				// output buffer
	const char*		lpProjectFile;			// project filename
} KEYGEN_INFO_LONG;

typedef struct
{
	uint32_t		dwSize;					// size of this structure
	uint32_t		dwFlags;				// flags
	const char*		lpInfo1;				// license info
	const char*		lpInfo2;				// ""
	const char*		lpInfo3;				// ""
	const char*		lpExtInfo;				// ""
	const char*		lpSystemId;				// system ID string
	const char*		lpUsbId;				// USB ID string or drive letter
	const FILETIME*	lpExpDate;				// expiration date
	void*			lpBuffer;				// output buffer
	const char*		lpProjectFile;			// project filename
} KEYGEN_INFO_LONG_V2;

// structure passed to GenerateLicenseLongW
typedef struct
{
	uint32_t		dwSize;					// size of this structure
	uint32_t		dwFlags;				// flags
	const wchar_t*	lpInfo1;				// license info
	const wchar_t*	lpInfo2;				// ""
	const wchar_t*	lpInfo3;				// ""
	const wchar_t*	lpExtInfo;				// ""
	const wchar_t*	lpSystemId;				// system ID string
	const FILETIME*	lpExpDate;				// expiration date
	void*			lpBuffer;				// output buffer
	const wchar_t*	lpProjectFile;			// project filename
} KEYGEN_INFO_LONGW;

typedef struct
{
	uint32_t		dwSize;					// size of this structure
	uint32_t		dwFlags;				// flags
	const wchar_t*	lpInfo1;				// license info
	const wchar_t*	lpInfo2;				// ""
	const wchar_t*	lpInfo3;				// ""
	const wchar_t*	lpExtInfo;				// ""
	const wchar_t*	lpSystemId;				// system ID string
	const wchar_t*	lpUsbId;				// USB ID string or drive letter
	const FILETIME*	lpExpDate;				// expiration date
	void*			lpBuffer;				// output buffer
	const wchar_t*	lpProjectFile;			// project filename
} KEYGEN_INFO_LONGW_V2;

// structure passed to VerifyLicenseLong
typedef struct
{
	uint32_t		dwSize;					// size of this structure
	uint32_t		dwFlags;				// flags
	char*			lpInfo1;				// license info
	char*			lpInfo2;				// ""
	char*			lpInfo3;				// ""
	char*			lpExtInfo;				// ""
	char*			lpSystemId;				// system ID string
	FILETIME*		lpExpDate;				// expiration date
	const void*		lpBuffer;				// input buffer
	const char*		lpProjectFile;			// project filename
} KEYVER_INFO_LONG;

typedef struct
{
	uint32_t		dwSize;					// size of this structure
	uint32_t		dwFlags;				// flags
	char*			lpInfo1;				// license info
	char*			lpInfo2;				// ""
	char*			lpInfo3;				// ""
	char*			lpExtInfo;				// ""
	char*			lpSystemId;				// system ID string
	char*			lpUsbId;				// USB ID string
	FILETIME*		lpExpDate;				// expiration date
	const void*		lpBuffer;				// input buffer
	const char*		lpProjectFile;			// project filename
} KEYVER_INFO_LONG_V2;

// structure passed to VerifyLicenseLongW
typedef struct
{
	uint32_t		dwSize;					// size of this structure
	uint32_t		dwFlags;				// flags
	wchar_t*		lpInfo1;				// license info
	wchar_t*		lpInfo2;				// ""
	wchar_t*		lpInfo3;				// ""
	wchar_t*		lpExtInfo;				// ""
	wchar_t*		lpSystemId;				// system ID string
	FILETIME*		lpExpDate;				// expiration date
	const void*		lpBuffer;				// input buffer
	const wchar_t*	lpProjectFile;			// project filename
} KEYVER_INFO_LONGW;

typedef struct
{
	uint32_t		dwSize;					// size of this structure
	uint32_t		dwFlags;				// flags
	wchar_t*		lpInfo1;				// license info
	wchar_t*		lpInfo2;				// ""
	wchar_t*		lpInfo3;				// ""
	wchar_t*		lpExtInfo;				// ""
	wchar_t*		lpSystemId;				// system ID string
	wchar_t*		lpUsbId;				// USB ID string
	FILETIME*		lpExpDate;				// expiration date
	const void*		lpBuffer;				// input buffer
	const wchar_t*	lpProjectFile;			// project filename
} KEYVER_INFO_LONGW_V2;

// flags used in KEYGEN_INFO_SHORT and KEYVER_INFO_SHORT
#define SHORTKEY_FLAG_ADVANCED		1		// generate advanced short license key
#define SHORTKEY_FLAG_EXPIRE		2		// license key expires and lpExpDate is valid, SHORTKEY_FLAG_ADVANCED must be set
#define SHORTKEY_FLAG_LEGACY_SYSID	4		// use old system ID format (Obsidium < 1.4.2)
#define SHORTKEY_FLAG_PAD			8		// pad license keys to next separator character boundary

// structure passed to GenerateLicenseShort
typedef struct
{
	uint32_t		dwSize;					// size of this structure
	uint32_t		dwFlags;				// flags
	const char*		lpInfo;					// license info string
	const char*		lpSystemId;				// system ID string
	const FILETIME*	lpExpDate;				// expiration date
	char*			lpKey;					// output buffer
	const char*		lpProjectFile;			// project file name
	uint16_t		dwCustom;				// custom value
} KEYGEN_INFO_SHORT;

// structure passed to GenerateLicenseShortW
typedef struct
{
	uint32_t		dwSize;					// size of this structure
	uint32_t		dwFlags;				// flags
	const wchar_t*	lpInfo;					// license info string
	const wchar_t*	lpSystemId;				// system ID string
	const FILETIME*	lpExpDate;				// expiration date
	wchar_t*		lpKey;					// output buffer
	const wchar_t*	lpProjectFile;			// project file name
	uint16_t		dwCustom;				// custom value
} KEYGEN_INFO_SHORTW;

// structure passed to VerifyLicenseShort
typedef struct
{
	uint32_t		dwSize;					// size of this structure
	uint32_t		dwFlags;				// flags
	const char*		lpInfo;					// license info string
	const char*		lpSystemId;				// system ID string
	FILETIME*		lpExpDate;				// expiration date
	const char*		lpKey;					// license key
	const char*		lpProjectFile;			// project file name
	uint16_t		dwCustom;				// custom value
} KEYVER_INFO_SHORT;

// structure passed to VerifyLicenseShortW
typedef struct
{
	uint32_t		dwSize;					// size of this structure
	uint32_t		dwFlags;				// flags
	const wchar_t*	lpInfo;					// license info string
	const wchar_t*	lpSystemId;				// system ID string
	FILETIME*		lpExpDate;				// expiration date
	const wchar_t*	lpKey;					// license key
	const wchar_t*	lpProjectFile;			// project file name
	uint16_t		dwCustom;				// custom value
} KEYVER_INFO_SHORTW;

#define KEYGEN_API __declspec(dllimport) _stdcall

extern "C" int KEYGEN_API GenerateLicenseLong(const KEYGEN_INFO_LONG* lpInfo);
extern "C" int KEYGEN_API GenerateLicenseLongW(const KEYGEN_INFO_LONGW* lpInfo);
extern "C" int KEYGEN_API VerifyLicenseLong(const KEYVER_INFO_LONG* lpInfo);
extern "C" int KEYGEN_API VerifyLicenseLongW(const KEYVER_INFO_LONGW* lpInfo);
extern "C" int KEYGEN_API GenerateLicenseShort(const KEYGEN_INFO_SHORT* lpInfo);
extern "C" int KEYGEN_API GenerateLicenseShortW(const KEYGEN_INFO_SHORTW* lpInfo);
extern "C" int KEYGEN_API VerifyLicenseShort(KEYVER_INFO_SHORT* lpInfo);
extern "C" int KEYGEN_API VerifyLicenseShortW(KEYVER_INFO_SHORTW* lpInfo);
extern "C" int KEYGEN_API ConvertLicenseLongToStr(const void* lpLic, uint32_t dwLen, char* lpBuffer);
extern "C" int KEYGEN_API ConvertLicenseLongToBin(const char* lpLic, void* lpBuffer);
extern "C" bool KEYGEN_API GetLicenseHash(const void* lpLicense, uint32_t dwType, void* lpHash);
extern "C" bool KEYGEN_API VerifySignature(const char* lpszProjectFile, 
										   const void* lpData, uint32_t dwLen, const char* lpszSig);
extern "C" bool KEYGEN_API VerifySignatureW(const wchar_t* lpszProjectFile, 
											const void* lpData, uint32_t dwLen, const wchar_t* lpszSig);
extern "C" bool KEYGEN_API VerifySignatureFromFile(const char* lpszProjectFile, 
												   const char *lpszFilename, const char* lpszSig);
extern "C" bool KEYGEN_API VerifySignatureFromFileW(const wchar_t* lpszProjectFile, 
													const wchar_t *lpszFilename, const wchar_t* lpszSig);
extern "C" bool KEYGEN_API GenerateSignature(const char* lpszProjectFile, 
											 const void* lpData, uint32_t dwLen, char* lpszSig);
extern "C" bool KEYGEN_API GenerateSignatureW(const wchar_t* lpszProjectFile, 
											 const void* lpData, uint32_t dwLen, wchar_t* lpszSig);
extern "C" bool KEYGEN_API GenerateSignatureFromFile(const char* lpszProjectFile, 
													 const char *lpszFilename, char* lpszSig);
extern "C" bool KEYGEN_API GenerateSignatureFromFileW(const wchar_t* lpszProjectFile, 
													  const wchar_t *lpszFilename, wchar_t* lpszSig);
extern "C" int KEYGEN_API CompareSystemIds(const char *lpszProjectFile, const char *lpszSystemId1,
										   const char *lpszSystemId2);
extern "C" int KEYGEN_API CompareSystemIdsW(const wchar_t *lpszProjectFile, const wchar_t *lpszSystemId1,
										    const wchar_t *lpszSystemId2);


#pragma pack(pop)

#ifdef __cplusplus
#ifdef OBSIDIUM_USE_NAMESPACE
}
#endif
#endif

#endif

