unit obsidium;

interface

type
{$IFNDEF UNICODE}
  PAnsiChar = type PChar;
  AnsiChar = type Char;
{$ENDIF}
  TFNNetLicCallback = Pointer;
  TFNUsbLicCallback = Pointer;
  TFNUsbEnumCallback = Pointer;


procedure obsCallMark(dwMagic: LongWord); stdcall;
function obsGetLicenseInfo(dwInfoNr: LongWord; lpBuffer: PAnsiChar): Boolean; stdcall;
function obsGetSystemId(lpBuffer: PAnsiChar): Boolean; stdcall;
function obsIsLicensed: Boolean; stdcall;
function obsSetExternalKey(lpKey: Pointer; dwSize: LongWord): Boolean; stdcall;
function obsGetTrialRuns(): Integer; stdcall;
function obsGetTrialDays(): Integer; stdcall;
function obsGetInitialTrialRuns(): Integer; stdcall;
function obsGetInitialTrialDays(): Integer; stdcall;
function obsGetLicenseExpiration(lpExpDate: Pointer): Boolean; stdcall;
function obsStoreLicense(lpStr: PAnsiChar): Boolean; stdcall;
function obsStoreLicenseW(lpStr: PWideChar): Boolean; stdcall;
function obsStoreLicenseShort(lpInfo: PAnsiChar; lpKey: PAnsiChar; lpSystemId: PAnsiChar): Boolean; stdcall;
function obsStoreLicenseShortW(lpInfo: PWideChar; lpKey: PWideChar; lpSystemId: PWideChar): Boolean; stdcall;
function obsGetCustomValue(): Word; stdcall;
function obsGetLicenseHash(lpHash: Pointer): Boolean; stdcall;
function obsGetLicenseStatus(): Integer; stdcall;
function obsSetLicense(lpStr: PAnsiChar): Boolean; stdcall;
function obsSetLicenseW(lpStr: PWideChar): Boolean; stdcall;
function obsSetLicenseShort(lpInfo: PAnsiChar; lpKey: PAnsiChar; lpSystemId: PAnsiChar): Boolean; stdcall;
function obsSetLicenseShortW(lpInfo: PWideChar; lpKey: PWideChar; lpSystemId: PWideChar): Boolean; stdcall;
procedure obsDeleteTrialData(); stdcall;
procedure obsGetExpirationDate(lpExpDate: Pointer); stdcall;
function obsDeleteLicenseData(): Boolean; stdcall;
procedure obsDisableLicense(); stdcall;
function obsIsProtected(): Boolean; stdcall;
function obsSecureString(lpStr: PAnsiChar): PAnsiChar; stdcall;
function obsSecureStringW(lpStr: PWideChar): PWideChar; stdcall;
function obsGetLicenseInfoW(dwInfoNr: LongWord; lpBuffer: PWideChar): Boolean; stdcall;
function obsGetInstanceCount(): Integer; stdcall;
procedure obsNetLicRegisterCallback(callbackFunction: TFNNetLicCallback; param: Pointer); stdcall;
function obsNetLicConnect(host: PAnsiChar; port: Word): Boolean; stdcall;
procedure obsNetLicDisconnect(); stdcall;
function obsIsVm(): Boolean; stdcall;
function obsGetTrialCounter(dwCtrIdx: LongWord): Integer; stdcall;
function obsGetInitialTrialCounter(dwCtrIdx: LongWord): Integer; stdcall;
function obsDecTrialCounter(dwCtrIdx: LongWord; wCount: SmallInt): Boolean; stdcall;
procedure obsGetProtectionDate(lpDate: Pointer); stdcall;
function obsUsbGetDeviceId(lpszVolume: PAnsiChar; lpszDeviceId: PAnsiChar; lpszManufacturer: PWideChar;
  dwManufacturerSize: LongWord; lpszProduct: PWideChar; dwProductSize: LongWord;
  lpszSerialNumber: PWideChar; dwSerialNumberSize: LongWord): Boolean; stdcall;
function obsUsbGetLicenseDeviceId(lpszDeviceId: PAnsiChar): Boolean; stdcall;
procedure obsUsbRegisterCallback(callback: TFNUsbLicCallback; param: Pointer); stdcall;
function obsUsbEnumDevices(callback: TFNUsbEnumCallback; param: Pointer): Boolean; stdcall;
function obsUsbReadData(dwOffset: LongWord; dwSize: LongWord; dwStorage: LongWord; lpBuffer: Pointer): Boolean; stdcall;
function obsUsbWriteData(dwOffset: LongWord; dwSize: LongWord; lpBuffer: Pointer): Boolean; stdcall;
function obsUsbExecute(wId: Word; dwInBufSize: LongWord; lpInBuf: Pointer; dwOutBufSize: LongWord; lpOutBuf: Pointer; var lpdwBytesWritten: LongWord): LongWord; stdcall;
function obsUsbEncrypt(lpData: Pointer; dwSize: LongWord; dwMode: LongWord; lpIV: Pointer; dwReserved: LongWord): Boolean; stdcall;
function obsUsbDecrypt(lpData: Pointer; dwSize: LongWord; dwMode: LongWord; lpIV: Pointer; dwReserved: LongWord): Boolean; stdcall;
function obsVerifySignatureData(lpData: Pointer; dwSize: LongWord; lpszSignature: PAnsiChar): Boolean; stdcall;
function obsVerifySignatureFile(lpszFilename: PAnsiChar; lpszSignature: PAnsiChar): Boolean; stdcall;
function obsVerifySignatureFileW(lpszFilename: PWideChar; lpszSignature: PWideChar): Boolean; stdcall;
function obsGetLicenseSystemId(lpBuffer: PAnsiChar): Boolean; stdcall;
function obsReloadLicense: Boolean; stdcall;
function obsGetActiveLicensingSystem: LongWord; stdcall;
function obsConvertLicenseToBinary(lpszLicense: PAnsiChar; lpOutput: Pointer; var lpOutputSize: LongWord): Integer; stdcall;
function obsConvertLicenseToString(lpLicense: Pointer; dwSize: LongWord; lpszOutput: PAnsiChar; var lpOutputSize: LongWord): Integer; stdcall;

const

// call marks
  CALLMARK_LIC_START      = $0DEFACED;
  CALLMARK_LIC_END        = $DEADF00D;

// obsGetLicenseStatus return values
  LIC_STATUS_NOTFOUND     = 0;          // no license key found
  LIC_STATUS_VALID        = 1;          // valid license key present
  LIC_STATUS_EXPIRED      = 2;          // license key has expired
  LIC_STATUS_BAD_SYSTEMID = 3;          // system ID does not match
  LIC_STATUS_INVALID      = 4;          // invalid or corrupt key
  LIC_STATUS_BLACKLISTED  = 5;          // license key is blacklisted
  LIC_STATUS_USB_MISSING  = 6;          // required USB device is missing

// obsGetActiveLicensingSystem return values (lower 16 bits)
  LIC_SYSTEM_NONE         = 0;          // no licensing system / external system
  LIC_SYSTEM_SHORT_KEYS   = 1;          // short license keys
  LIC_SYSTEM_LONG_KEYS    = 2;          // long license keys
  LIC_SYSTEM_NETWORK      = 3;          // network licensing
  LIC_SYSTEM_SL_C2        = 4;          // Senselock Clave 2
  LIC_SYSTEM_SL_EL        = 5;          // Senselock EL
// obsGetActiveLicensingSystem flags (upper 16 bits)
  LIC_SYSTEM_FLAG_USB     = 1;          // USB licensing is enabled
  LIC_SYSTEM_FLAG_HW      = 2;          // hardware locking is enabled

// Network licensing callback event
  OBS_NETLIC_EVENT_CONNECT          = 1;
  OBS_NETLIC_EVENT_DISCONNECT       = 2;
  OBS_NETLIC_EVENT_LICENSE_DENIED   = 3;
  OBS_NETLIC_EVENT_LICENSE_GRANTED  = 4;

// Network licensing callback event info (OBS_NETLIC_EVENT_LICENSE_DENIED)
  OBS_NETLIC_EVENT_INFO_NONE        = 0;
  OBS_NETLIC_EVENT_INFO_NO_CERT     = 1;    // server does not have matching app cert
  OBS_NETLIC_EVENT_INFO_NO_LICENSE  = 2;    // all licenses in use
  OBS_NETLIC_EVENT_INFO_EXPIRED     = 3;    // license is expired
  OBS_NETLIC_EVENT_INFO_ALREADY_CONNECTED   = 4;    // client is already connected, multiple connections not allowed
  OBS_NETLIC_EVENT_INFO_BAD_SERVER_ID   = 5;    // client is locked to a different server ID
  OBS_NETLIC_EVENT_INFO_NOT_VALID_YET   = 6;    // app cert is not valid yet

// USB licensing callback events
  OBS_USB_EVENT_UNLICENSED          = 1;
  OBS_USB_EVENT_LICENSED            = 2;

// USB licensing callback event info
  OBS_USB_EVENT_INFO_NONE           = 0;

// Senselock storage areas
  OBS_USB_STORAGE_READ_ONLY         = 0;
  OBS_USB_STORAGE_READ_WRITE        = 1;

// Senselock encryption modes
  OBS_USB_ENCDEC_MODE_ECB           = 0;
  OBS_USB_ENCDEC_MODE_CBC           = 1;

// Senselock EL encryption keys
  OBS_USB_ENCDEC_USER_KEY_1         = 12;
  OBS_USB_ENCDEC_USER_KEY_2         = 13;
  OBS_USB_ENCDEC_USER_KEY_3         = 14;
  OBS_USB_ENCDEC_USER_KEY_4         = 15;

implementation

function obsGetLicenseInfo; external 'obsidium.dll';
function obsGetSystemId; external 'obsidium.dll';
function obsIsLicensed; external 'obsidium.dll';
function obsSetExternalKey; external 'obsidium.dll';
procedure obsCallMark; external 'obsidium.dll';
function obsGetTrialRuns; external 'obsidium.dll';
function obsGetTrialDays; external 'obsidium.dll';
function obsGetInitialTrialRuns; external 'obsidium.dll';
function obsGetInitialTrialDays; external 'obsidium.dll';
function obsGetLicenseExpiration; external 'obsidium.dll';
function obsStoreLicense; external 'obsidium.dll';
function obsStoreLicenseW; external 'obsidium.dll';
function obsStoreLicenseShort; external 'obsidium.dll';
function obsStoreLicenseShortW; external 'obsidium.dll';
function obsGetCustomValue; external 'obsidium.dll';
function obsGetLicenseHash; external 'obsidium.dll';
function obsGetLicenseStatus; external 'obsidium.dll';
function obsSetLicense; external 'obsidium.dll';
function obsSetLicenseW; external 'obsidium.dll';
function obsSetLicenseShort; external 'obsidium.dll';
function obsSetLicenseShortW; external 'obsidium.dll';
procedure obsDeleteTrialData; external 'obsidium.dll';
procedure obsGetExpirationDate; external 'obsidium.dll';
function obsDeleteLicenseData; external 'obsidium.dll';
procedure obsDisableLicense; external 'obsidium.dll';
function obsIsProtected; external 'obsidium.dll';
function obsSecureString; external 'obsidium.dll';
function obsSecureStringW; external 'obsidium.dll';
function obsGetLicenseInfoW; external 'obsidium.dll';
function obsGetInstanceCount; external 'obsidium.dll';
procedure obsNetLicRegisterCallback; external 'obsidium.dll';
function obsNetLicConnect; external 'obsidium.dll';
procedure obsNetLicDisconnect; external 'obsidium.dll';
function obsIsVm; external 'obsidium.dll';
function obsGetTrialCounter; external 'obsidium.dll';
function obsGetInitialTrialCounter; external 'obsidium.dll';
function obsDecTrialCounter; external 'obsidium.dll';
procedure obsGetProtectionDate; external 'obsidium.dll';
function obsUsbGetDeviceId; external 'obsidium.dll';
function obsUsbGetLicenseDeviceId; external 'obsidium.dll';
procedure obsUsbRegisterCallback; external 'obsidium.dll';
function obsUsbEnumDevices; external 'obsidium.dll';
function obsUsbReadData; external 'obsidium.dll';
function obsUsbWriteData; external 'obsidium.dll';
function obsUsbExecute; external 'obsidium.dll';
function obsUsbEncrypt; external 'obsidium.dll';
function obsUsbDecrypt; external 'obsidium.dll';
function obsVerifySignatureData; external 'obsidium.dll';
function obsVerifySignatureFile; external 'obsidium.dll';
function obsVerifySignatureFileW; external 'obsidium.dll';
function obsGetLicenseSystemId; external 'obsidium.dll';
function obsReloadLicense; external 'obsidium.dll';
function obsGetActiveLicensingSystem; external 'obsidium.dll';
function obsConvertLicenseToBinary; external 'obsidium.dll';
function obsConvertLicenseToString; external 'obsidium.dll';

end.
