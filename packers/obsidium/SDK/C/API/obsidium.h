/*
	Obsidium protection API
	Version 1.5
*/
#ifndef OBSIDIUM_H
#define OBSIDIUM_H
#include <wtypes.h>		// needed for FILETIME, DWORD, alternatively use windows.h
//#include "obsidium_compat.h"

// comment out the next line if you intend on dynamically linking to obsidium.dll
#pragma comment(lib, "obsidium.lib")

// #define OBSIDIUM_USE_NAMESPACE in your project to wrap the Obsidium API 
// into a namespace
// Any API calls etc. will need to be prefixed with obsidium::,
// e.g. obsidium::obsGetTrialDays() instead of just obsGetTrialDays()
#ifdef __cplusplus
#ifdef OBSIDIUM_USE_NAMESPACE
namespace obsidium {
#endif
#endif

#define CALLMARK_LIC_START      0x00DEFACED
#define CALLMARK_LIC_END        0x0DEADF00D

#if defined(__BORLANDC__)

	#define OBSIDIUM_LIC_START		__emit__ (0xEB,0x08,0x0F,0x04,0x0F,0x05,0x0F,0x07,0xCC,0xCC);
	#define OBSIDIUM_LIC_END		__emit__ (0xEB,0x08,0x0F,0x05,0x0F,0x04,0xCC,0x0F,0x07,0xCC);
	#define OBSIDIUM_ENC_START		__emit__ (0xEB,0x09,0xDE,0xAD,0xBE,0xEF,0x0F,0x07,0xCC,0xCC,0xCC);
	#define OBSIDIUM_ENC_END		__emit__ (0xEB,0x09,0xDE,0xAD,0xBE,0xEF,0x0F,0x05,0xCC,0xCC,0xCC);
	#define OBSIDIUM_VM_START		__emit__ (0xEB,0x04,0x0F,0x0B,0x0F,0x0B);
	#define OBSIDIUM_VM_END			__emit__ (0xEB,0x04,0x0F,0x0B,0x0F,0x06);
	#define OBSIDIUM_VM_HW_START	__emit__ (0xEB,0x04,0x0F,0x06,0x0F,0x06);
	#define OBSIDIUM_VM_HW_END		__emit__ (0xEB,0x04,0x0F,0x06,0x0F,0x0B);

#elif defined(__MINGW32__)

	#define OBSIDIUM_LIC_START		__asm__ (".byte 0xEB,0x08,0x0F,0x04,0x0F,0x05,0x0F,0x07,0xCC,0xCC");
	#define OBSIDIUM_LIC_END		__asm__ (".byte 0xEB,0x08,0x0F,0x05,0x0F,0x04,0xCC,0x0F,0x07,0xCC");
	#define OBSIDIUM_ENC_START		__asm__ (".byte 0xEB,0x09,0xDE,0xAD,0xBE,0xEF,0x0F,0x07,0xCC,0xCC,0xCC");
	#define OBSIDIUM_ENC_END		__asm__ (".byte 0xEB,0x09,0xDE,0xAD,0xBE,0xEF,0x0F,0x05,0xCC,0xCC,0xCC");
	#define OBSIDIUM_VM_START		__asm__ (".byte 0xEB,0x04,0x0F,0x0B,0x0F,0x0B");
	#define OBSIDIUM_VM_END			__asm__ (".byte 0xEB,0x04,0x0F,0x0B,0x0F,0x06");
	#define OBSIDIUM_VM_HW_START	__asm__ (".byte 0xEB,0x04,0x0F,0x06,0x0F,0x06");
	#define OBSIDIUM_VM_HW_END		__asm__ (".byte 0xEB,0x04,0x0F,0x06,0x0F,0x0B");

#else

	#define OBSIDIUM_LIC_START __asm { \
		__asm _emit 0xEB __asm _emit 0x08 \
		__asm _emit 0x0F __asm _emit 0x04 \
		__asm _emit 0x0F __asm _emit 0x05 \
		__asm _emit 0x0F __asm _emit 0x07 \
		__asm _emit 0xCC __asm _emit 0xCC }

	#define OBSIDIUM_LIC_END __asm { \
		__asm _emit 0xEB __asm _emit 0x08 \
		__asm _emit 0x0F __asm _emit 0x05 \
		__asm _emit 0x0F __asm _emit 0x04 \
		__asm _emit 0xCC __asm _emit 0x0F \
		__asm _emit 0x07 __asm _emit 0xCC }

	#define OBSIDIUM_ENC_START __asm { \
		__asm _emit 0xEB __asm _emit 0x09 \
		__asm _emit 0xDE __asm _emit 0xAD \
		__asm _emit 0xBE __asm _emit 0xEF \
		__asm _emit 0x0F __asm _emit 0x07 \
		__asm _emit 0xCC __asm _emit 0xCC \
		__asm _emit 0xCC }

	#define OBSIDIUM_ENC_END __asm { \
		__asm _emit 0xEB __asm _emit 0x09 \
		__asm _emit 0xDE __asm _emit 0xAD \
		__asm _emit 0xBE __asm _emit 0xEF \
		__asm _emit 0x0F __asm _emit 0x05 \
		__asm _emit 0xCC __asm _emit 0xCC \
		__asm _emit 0xCC }

	#define OBSIDIUM_VM_START __asm { \
		__asm _emit 0xEB __asm _emit 0x04 \
		__asm _emit 0x0F __asm _emit 0x0B \
		__asm _emit 0x0F __asm _emit 0x0B }

	#define OBSIDIUM_VM_END __asm { \
		__asm _emit 0xEB __asm _emit 0x04 \
		__asm _emit 0x0F __asm _emit 0x0B \
		__asm _emit 0x0F __asm _emit 0x06 }

	#define OBSIDIUM_VM_HW_START __asm { \
		__asm _emit 0xEB __asm _emit 0x04 \
		__asm _emit 0x0F __asm _emit 0x06 \
		__asm _emit 0x0F __asm _emit 0x06 }

	#define OBSIDIUM_VM_HW_END __asm { \
		__asm _emit 0xEB __asm _emit 0x04 \
		__asm _emit 0x0F __asm _emit 0x06 \
		__asm _emit 0x0F __asm _emit 0x0B }

#endif

#ifdef __cplusplus

	extern "C" void __declspec(dllimport) _stdcall obsCallMark(DWORD dwMagic);
	extern "C" unsigned short __declspec(dllimport) _stdcall obsGetCustomValue();
	extern "C" bool __declspec(dllimport) _stdcall obsGetLicenseExpiration(FILETIME* lpExpDate);
	extern "C" bool __declspec(dllimport) _stdcall obsGetLicenseHash(unsigned char* lpHash);
	extern "C" int __declspec(dllimport) _stdcall obsGetLicenseStatus();
	extern "C" bool __declspec(dllimport) _stdcall obsGetLicenseInfo(DWORD dwInfoNr, char *lpBuffer);
	extern "C" bool __declspec(dllimport) _stdcall obsGetSystemId(char *lpBuffer);
	extern "C" int __declspec(dllimport) _stdcall obsGetTrialDays();
	extern "C" int __declspec(dllimport) _stdcall obsGetTrialRuns();
	extern "C" int __declspec(dllimport) _stdcall obsGetInitialTrialDays();
	extern "C" int __declspec(dllimport) _stdcall obsGetInitialTrialRuns();
	extern "C" bool __declspec(dllimport) _stdcall obsIsLicensed();
	extern "C" bool __declspec(dllimport) _stdcall obsSetExternalKey(const unsigned char *lpKey, DWORD dwSize);
	extern "C" bool __declspec(dllimport) _stdcall obsSetLicense(const char *lpStr);
	extern "C" bool __declspec(dllimport) _stdcall obsSetLicenseW(const wchar_t *lpStr);
	extern "C" bool __declspec(dllimport) _stdcall obsSetLicenseShort(const char *lpInfo, const char *lpKey, const char *lpSystemId);
	extern "C" bool __declspec(dllimport) _stdcall obsStoreLicense(const char *lpStr);
	extern "C" bool __declspec(dllimport) _stdcall obsStoreLicenseW(const wchar_t *lpStr);
	extern "C" bool __declspec(dllimport) _stdcall obsStoreLicenseShort(const char *lpInfo, const char *lpKey, const char *lpSystemId);
	extern "C" void __declspec(dllimport) _stdcall obsDeleteTrialData();
	extern "C" void __declspec(dllimport) _stdcall obsGetExpirationDate(FILETIME* lpExpDate);
	extern "C" bool __declspec(dllimport) _stdcall obsDeleteLicenseData();
	extern "C" void __declspec(dllimport) _stdcall obsDisableLicense();
	extern "C" bool __declspec(dllimport) _stdcall obsIsProtected();
	extern "C" __declspec(dllimport) const char* _stdcall obsSecureString(const char* lpStr);
	extern "C" __declspec(dllimport) const wchar_t* _stdcall obsSecureStringW(const wchar_t* lpStr);
	extern "C" bool __declspec(dllimport) _stdcall obsGetLicenseInfoW(DWORD dwInfoNr, wchar_t *lpBuffer);
	extern "C" int __declspec(dllimport) _stdcall obsGetInstanceCount();
	extern "C" bool __declspec(dllimport) _stdcall obsNetLicConnect(const char *host, unsigned int port);
	extern "C" void __declspec(dllimport) _stdcall obsNetLicDisconnect(void);
	typedef void (_stdcall *obsNetLicCallback)(unsigned long event, unsigned long eventInfo, void *param);
	extern "C" void __declspec(dllimport) _stdcall obsNetLicRegisterCallback(obsNetLicCallback function, void *param);
	extern "C" bool __declspec(dllimport) _stdcall obsIsVm(void);
	extern "C" int __declspec(dllimport) _stdcall obsGetTrialCounter(DWORD dwCtrIdx);
	extern "C" int __declspec(dllimport) _stdcall obsGetInitialTrialCounter(DWORD dwCtrIdx);
	extern "C" bool __declspec(dllimport) _stdcall obsDecTrialCounter(DWORD dwCtrIdx, short wCount);
	extern "C" void __declspec(dllimport) _stdcall obsGetProtectionDate(FILETIME *date);
	extern "C" bool __declspec(dllimport) _stdcall obsUsbGetDeviceId(const char *lpszVolume, char *lpszDeviceId,
		wchar_t *lpszManufacturer, DWORD dwManufacturerSize, wchar_t *lpszProduct, DWORD dwProductSize,
		wchar_t *lpszSerialNumber, DWORD dwSerialNumberSize);
	extern "C" bool __declspec(dllimport) _stdcall obsUsbGetLicenseDeviceId(char *lpszDeviceId);
	typedef void (_stdcall *obsUsbCallback)(unsigned long event, unsigned long eventInfo, void *param);
	extern "C" void __declspec(dllimport) _stdcall obsUsbRegisterCallback(obsUsbCallback callback, void *param);
	typedef bool (_stdcall *obsUsbEnumCallback)(const char *lpszDeviceId, const wchar_t *lpszManufacturer,
		const wchar_t *lpszProduct, const wchar_t *lpszSerialNumber, void *param);
	extern "C" bool __declspec(dllimport) _stdcall obsUsbEnumDevices(obsUsbEnumCallback callback, void *param);
	extern "C" bool __declspec(dllimport) _stdcall obsVerifySignatureData(const void* lpData, unsigned long dwSize, const char* lpszSignature);
	extern "C" bool __declspec(dllimport) _stdcall obsVerifySignatureFile(const char* lpszFilename, const char* lpszSignature);
	extern "C" bool __declspec(dllimport) _stdcall obsVerifySignatureFileW(const wchar_t* lpszFilename, const wchar_t* lpszSignature);
	extern "C" bool __declspec(dllimport) _stdcall obsUsbReadData(unsigned long dwOffset, unsigned long dwSize, 
		unsigned long dwStorage, void *lpBuffer);
	extern "C" bool __declspec(dllimport) _stdcall obsUsbWriteData(unsigned long dwOffset, unsigned long dwSize, 
		const void *lpBuffer);
	extern "C" unsigned long __declspec(dllimport) _stdcall obsUsbExecute(unsigned short wId, unsigned long dwInBufSize, 
			const void *lpInBuf, unsigned long dwOutBufSize, void *lpOutBuf, unsigned long *lpdwBytesWritten);
	extern "C" bool __declspec(dllimport) _stdcall obsUsbEncrypt(void *lpData, unsigned long dwSize, unsigned long dwMode, 
		const void *lpIV, unsigned long dwReserved);
	extern "C" bool __declspec(dllimport) _stdcall obsUsbDecrypt(void *lpData, unsigned long dwSize, unsigned long dwMode, 
		const void *lpIV, unsigned long dwReserved);
	extern "C" bool __declspec(dllimport) _stdcall obsGetLicenseSystemId(char *lpBuffer);
	extern "C" bool __declspec(dllimport) _stdcall obsReloadLicense(void);
	extern "C" bool __declspec(dllimport) _stdcall obsSetLicenseShortW(const wchar_t *lpInfo, const wchar_t *lpKey, const wchar_t *lpSystemId);
	extern "C" bool __declspec(dllimport) _stdcall obsStoreLicenseShortW(const wchar_t *lpInfo, const wchar_t *lpKey, const wchar_t *lpSystemId);
	extern "C" unsigned long __declspec(dllimport) _stdcall obsGetActiveLicensingSystem(void);
	extern "C" int __declspec(dllimport) _stdcall obsConvertLicenseToBinary(const char *lpszLicense, void *lpOutput, unsigned long *lpOutputSize);
	extern "C" int __declspec(dllimport) _stdcall obsConvertLicenseToString(const void *lpLicense, unsigned long dwSize, char *lpszOutput, unsigned long *lpOutputSize);

#else

	void __declspec(dllimport) _stdcall obsCallMark(DWORD dwMagic);
	unsigned short int __declspec(dllimport) _stdcall obsGetCustomValue();
	int __declspec(dllimport) _stdcall obsGetLicenseHash(unsigned char* lpHash);
	int __declspec(dllimport) _stdcall obsGetLicenseStatus();
	int __declspec(dllimport) _stdcall obsGetLicenseInfo(DWORD dwInfoNr, char* lpBuffer);
	int __declspec(dllimport) _stdcall obsGetSystemId(char* lpBuffer);
	int __declspec(dllimport) _stdcall obsGetTrialDays();
	int __declspec(dllimport) _stdcall obsGetTrialRuns();
	int __declspec(dllimport) _stdcall obsGetInitialTrialDays();
	int __declspec(dllimport) _stdcall obsGetInitialTrialRuns();
	int __declspec(dllimport) _stdcall obsIsLicensed();
	int __declspec(dllimport) _stdcall obsSetExternalKey(const unsigned char* lpKey, DWORD dwSize);
	int __declspec(dllimport) _stdcall obsGetLicenseExpiration(FILETIME* lpExpDate);
	int __declspec(dllimport) _stdcall obsSetLicense(const char* lpStr);
	int __declspec(dllimport) _stdcall obsSetLicenseW(const short* lpStr);
	int __declspec(dllimport) _stdcall obsSetLicenseShort(const char *lpInfo, const char *lpKey, const char* lpSystemId);
	int __declspec(dllimport) _stdcall obsStoreLicense(const char* lpStr);
	int __declspec(dllimport) _stdcall obsStoreLicenseW(const short* lpStr);
	int __declspec(dllimport) _stdcall obsStoreLicenseShort(const char *lpInfo, const char *lpKey, const char* lpSystemId);
	void __declspec(dllimport) _stdcall obsDeleteTrialData();
	void __declspec(dllimport) _stdcall obsGetExpirationDate(FILETIME* lpExpDate);
	int __declspec(dllimport) _stdcall obsDeleteLicenseData();
	void __declspec(dllimport) _stdcall obsDisableLicense();
	int __declspec(dllimport) _stdcall obsIsProtected();
	const char __declspec(dllimport) * _stdcall obsSecureString(const char* lpStr);
	const unsigned short __declspec(dllimport) * _stdcall obsSecureStringW(const unsigned short* lpStr);
	int __declspec(dllimport) _stdcall obsGetLicenseInfoW(DWORD dwInfoNr, unsigned short* lpBuffer);
	int __declspec(dllimport) _stdcall obsGetInstanceCount();
	int __declspec(dllimport) _stdcall obsIsVm();
	int __declspec(dllimport) _stdcall obsGetTrialCounter(DWORD dwCtrIdx);
	int __declspec(dllimport) _stdcall obsGetInitialTrialCounter(DWORD dwCtrIdx);
	int __declspec(dllimport) _stdcall obsDecTrialCounter(DWORD dwCtrIdx, short wCount);
	void __declspec(dllimport) _stdcall obsGetProtectionDate(FILETIME *date);
	int __declspec(dllimport) _stdcall obsUsbGetDeviceId(const char *lpszVolume, char *lpszDeviceId);
	int __declspec(dllimport) _stdcall obsUsbGetLicenseDeviceId(char *lpszDeviceId);
	int __declspec(dllimport) _stdcall obsVerifySignatureData(const void* lpData, unsigned long dwSize, const char* lpszSignature);
	int __declspec(dllimport) _stdcall obsVerifySignatureFile(const char* lpszFilename, const char* lpszSignature);
	int __declspec(dllimport) _stdcall obsVerifySignatureFileW(const unsigned short* lpszFilename, const unsigned short* lpszSignature);
	int __declspec(dllimport) _stdcall obsUsbReadData(unsigned long dwOffset, unsigned long dwSize, 
		unsigned long dwStorage, void *lpBuffer);
	int __declspec(dllimport) _stdcall obsUsbWriteData(unsigned long dwOffset, unsigned long dwSize, 
		const void *lpBuffer);
	unsigned long __declspec(dllimport) _stdcall obsUsbExecute(unsigned short wId, unsigned long dwInBufSize, 
			const void *lpInBuf, unsigned long dwOutBufSize, void *lpOutBuf, unsigned long *lpdwBytesWritten);
	int __declspec(dllimport) _stdcall obsUsbEncrypt(void *lpData, unsigned long dwSize, unsigned long dwMode, 
		const void *lpIV, unsigned long dwReserved);
	int __declspec(dllimport) _stdcall obsUsbDecrypt(void *lpData, unsigned long dwSize, unsigned long dwMode, 
		const void *lpIV, unsigned long dwReserved);
	int __declspec(dllimport) _stdcall obsGetLicenseSystemId(char *lpBuffer);
	int __declspec(dllimport) _stdcall obsReloadLicense(void);
	int __declspec(dllimport) _stdcall obsSetLicenseShortW(const short *lpInfo, const short *lpKey, const short *lpSystemId);
	int __declspec(dllimport) _stdcall obsStoreLicenseShortW(const short *lpInfo, const short *lpKey, const short *lpSystemId);
	unsigned long __declspec(dllimport) _stdcall obsGetActiveLicensingSystem(void);
	int __declspec(dllimport) _stdcall obsConvertLicenseToBinary(const char *lpszLicense, void *lpOutput, unsigned long *lpOutputSize);
	int __declspec(dllimport) _stdcall obsConvertLicenseToString(const void *lpLicense, unsigned long dwSize, char *lpszOutput, unsigned long *lpOutputSize);

#endif

// getLicenseStatus return values
#define LIC_STATUS_NOTFOUND     0       // no license key found
#define LIC_STATUS_VALID        1       // valid license key present
#define LIC_STATUS_EXPIRED      2       // license key has expired
#define LIC_STATUS_BAD_SYSTEMID 3       // system ID does not match
#define LIC_STATUS_INVALID      4       // invalid or corrupt key
#define LIC_STATUS_BLACKLISTED  5       // license key is blacklisted
#define LIC_STATUS_USB_MISSING  6       // required USB device is missing

// obsGetActiveLicensingSystem return values (lower 16 bits)
#define LIC_SYSTEM_NONE         0		// no licensing system / external system
#define LIC_SYSTEM_SHORT_KEYS   1		// short license keys
#define LIC_SYSTEM_LONG_KEYS    2		// long license keys
#define LIC_SYSTEM_NETWORK      3		// network licensing
#define LIC_SYSTEM_SL_C2        4		// Senselock Clave 2
#define LIC_SYSTEM_SL_EL        5		// Senselock EL
// obsGetActiveLicensingSystem flags (upper 16 bits)
#define LIC_SYSTEM_FLAG_USB     1		// USB licensing is enabled
#define LIC_SYSTEM_FLAG_HW      2		// hardware locking is enabled

// Network licensing callback events
#define OBS_NETLIC_EVENT_CONNECT			0x0001
#define OBS_NETLIC_EVENT_DISCONNECT			0x0002
#define OBS_NETLIC_EVENT_LICENSE_DENIED		0x0003
#define OBS_NETLIC_EVENT_LICENSE_GRANTED	0x0004

// Network licensing callback event info (OBS_NETLIC_EVENT_LICENSE_DENIED)
#define OBS_NETLIC_EVENT_INFO_NONE				0x0000
#define OBS_NETLIC_EVENT_INFO_NO_CERT			0x0001	// server does not have matching app cert
#define OBS_NETLIC_EVENT_INFO_NO_LICENSE		0x0002	// all licenses in use
#define OBS_NETLIC_EVENT_INFO_EXPIRED			0x0003	// license is expired
#define OBS_NETLIC_EVENT_INFO_ALREADY_CONNECTED	0x0004	// client is already connected, multiple connections not allowed
#define OBS_NETLIC_EVENT_INFO_BAD_SERVER_ID		0x0005	// client is locked to a different server ID
#define OBS_NETLIC_EVENT_INFO_NOT_VALID_YET     0x0006	// app cert is not valid yet

// USB licensing callback events
#define OBS_USB_EVENT_UNLICENSED				0x0001
#define OBS_USB_EVENT_LICENSED					0x0002

// USB licensing callback event info
#define OBS_USB_EVENT_INFO_NONE					0x0000

// Senselock storage areas
#define OBS_USB_STORAGE_READ_ONLY				0
#define OBS_USB_STORAGE_READ_WRITE				1

// Senselock encryption modes
#define OBS_USB_ENCDEC_MODE_ECB					0
#define OBS_USB_ENCDEC_MODE_CBC					1

// Senselock EL encryption keys
#define OBS_USB_ENCDEC_USER_KEY_1				12
#define OBS_USB_ENCDEC_USER_KEY_2				13
#define OBS_USB_ENCDEC_USER_KEY_3				14
#define OBS_USB_ENCDEC_USER_KEY_4				15

// GUI command line return values
#define OBSIDIUM_CMDLINE_SUCCESS        0
#define OBSIDIUM_CMDLINE_FAIL_PROJECT   1
#define OBSIDIUM_CMDLINE_FAIL_INFILE    2
#define OBSIDIUM_CMDLINE_FAIL_OUTFILE   3
#define OBSIDIUM_CMDLINE_FAIL_PROTECT   4

// constants used with custom nag screens
#define IDC_BTN_CONTINUE        100
#define IDC_BTN_EXIT            101
#define IDC_BTN_ACTION1         102
#define IDC_BTN_ACTION2         103
#define IDC_BTN_ACTION3         104
#define IDC_BTN_ACTION4         105
#define IDC_BTN_ACTION5         106
#define IDS_ACTIONSTRING1       102
#define IDS_ACTIONSTRING2       103
#define IDS_ACTIONSTRING3       104
#define IDS_ACTIONSTRING4       105
#define IDS_ACTIONSTRING5       106

#ifdef __cplusplus
#ifdef OBSIDIUM_USE_NAMESPACE
}
#endif
#endif

#endif
