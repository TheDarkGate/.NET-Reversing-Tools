unit keygen;

interface

{$IFNDEF UNICODE}
type
  PAnsiChar = type PChar;
{$ENDIF}


// structure passed to GenerateLicenseLong
  type
    TKEYGEN_INFO_LONG = packed record
      dwSize:        LongWord;
      dwFlags:       LongWord;
      lpInfo1:       PAnsiChar;
      lpInfo2:       PAnsiChar;
      lpInfo3:       PAnsiChar;
      lpExtInfo:     PAnsiChar;
      lpSytemId:     PAnsiChar;
      lpExpDate:     Pointer;
      lpBuffer:      Pointer;
      lpProjectFile: PAnsiChar;
    end;

  type
    TKEYGEN_INFO_LONG_V2 = packed record
      dwSize:        LongWord;
      dwFlags:       LongWord;
      lpInfo1:       PAnsiChar;
      lpInfo2:       PAnsiChar;
      lpInfo3:       PAnsiChar;
      lpExtInfo:     PAnsiChar;
      lpSytemId:     PAnsiChar;
      lpUsbId:       PAnsiChar;
      lpExpDate:     Pointer;
      lpBuffer:      Pointer;
      lpProjectFile: PAnsiChar;
    end;

{$IFDEF UNICODE}
  type
    TKEYGEN_INFO_LONGW = packed record
      dwSize:        LongWord;
      dwFlags:       LongWord;
      lpInfo1:       PWideChar;
      lpInfo2:       PWideChar;
      lpInfo3:       PWideChar;
      lpExtInfo:     PWideChar;
      lpSytemId:     PWideChar;
      lpExpDate:     Pointer;
      lpBuffer:      Pointer;
      lpProjectFile: PWideChar;
    end;

  type
    TKEYGEN_INFO_LONGW_V2 = packed record
      dwSize:        LongWord;
      dwFlags:       LongWord;
      lpInfo1:       PWideChar;
      lpInfo2:       PWideChar;
      lpInfo3:       PWideChar;
      lpExtInfo:     PWideChar;
      lpSytemId:     PWideChar;
      lpUsbId:       PWideChar;
      lpExpDate:     Pointer;
      lpBuffer:      Pointer;
      lpProjectFile: PWideChar;
    end;
{$ENDIF}


// structure passed to VerifyLicenseLong
  type
    TKEYVER_INFO_LONG = packed record
      dwSize:        LongWord;
      dwFlags:       LongWord;
      lpInfo1:       PAnsiChar;
      lpInfo2:       PAnsiChar;
      lpInfo3:       PAnsiChar;
      lpExtInfo:     PAnsiChar;
      lpSytemId:     PAnsiChar;
      lpExpDate:     Pointer;
      lpBuffer:      Pointer;
      lpProjectFile: PAnsiChar;
    end;

{$IFDEF UNICODE}
  type
    TKEYVER_INFO_LONGW = packed record
      dwSize:        LongWord;
      dwFlags:       LongWord;
      lpInfo1:       PWideChar;
      lpInfo2:       PWideChar;
      lpInfo3:       PWideChar;
      lpExtInfo:     PWideChar;
      lpSytemId:     PWideChar;
      lpExpDate:     Pointer;
      lpBuffer:      Pointer;
      lpProjectFile: PWideChar;
    end;
{$ENDIF}

// structure passed to GenerateLicenseShort
  type
    TKEYGEN_INFO_SHORT = packed record
      dwSize:        LongWord;
      dwFlags:       LongWord;
      lpInfo:        PAnsiChar;
      lpSytemId:     PAnsiChar;
      lpExpDate:     Pointer;
      lpKey:         PAnsiChar;
      lpProjectFile: PAnsiChar;
      dwCustom:      Word;
    end;

{$IFDEF UNICODE}
  type
    TKEYGEN_INFO_SHORTW = packed record
      dwSize:        LongWord;
      dwFlags:       LongWord;
      lpInfo:        PWideChar;
      lpSytemId:     PWideChar;
      lpExpDate:     Pointer;
      lpKey:         PWideChar;
      lpProjectFile: PWideChar;
      dwCustom:      Word;
    end;
{$ENDIF}


// structure passed to VerifyLicenseShort
  type
    TKEYVER_INFO_SHORT = packed record
      dwSize:        LongWord;
      dwFlags:       LongWord;
      lpInfo:        PAnsiChar;
      lpSytemId:     PAnsiChar;
      lpExpDate:     Pointer;
      lpKey:         PAnsiChar;
      lpProjectFile: PAnsiChar;
      dwCustom:      Word;
    end;

{$IFDEF UNICODE}
  type
    TKEYVER_INFO_SHORTW = packed record
      dwSize:        LongWord;
      dwFlags:       LongWord;
      lpInfo:        PWideChar;
      lpSytemId:     PWideChar;
      lpExpDate:     Pointer;
      lpKey:         PWideChar;
      lpProjectFile: PWideChar;
      dwCustom:      Word;
    end;
{$ENDIF}


function GenerateLicenseLong(var lpInfo: TKEYGEN_INFO_LONG): Integer; stdcall;
function VerifyLicenseLong(var lpInfo: TKEYVER_INFO_LONG): Integer; stdcall;
function GenerateLicenseShort(var lpInfo: TKEYGEN_INFO_SHORT): Integer; stdcall;
function VerifyLicenseShort(var lpInfo: TKEYVER_INFO_SHORT): Integer; stdcall;
function ConvertLicenseLongToStr(lpLic: Pointer; dwSize: LongWord; lpBuffer: PAnsiChar): Integer; stdcall;
function ConvertLicenseLongToBin(lpString: PAnsiChar; lpBuffer: Pointer): Integer; stdcall;
function GetLicenseHash(lpLicense: Pointer; dwType: LongWord; lpHash: Pointer): Boolean; stdcall;
function VerifySignature(lpszProjectFile: PAnsiChar; lpData: Pointer; dwLen: LongWord; lpszSig: PAnsiChar): Boolean; stdcall;
function VerifySignatureFromFile(lpszProjectFile: PAnsiChar; lpszFilename: PAnsiChar; lpszSig: PAnsiChar): Boolean; stdcall;
function GenerateSignature(lpszProjectFile: PAnsiChar; lpData: Pointer; dwLen: LongWord; lpszSig: PAnsiChar): Boolean; stdcall;
function GenerateSignatureFromFile(lpszProjectFile: PAnsiChar; lpszFilename: PAnsiChar; lpszSig: PAnsiChar): Boolean; stdcall;
function CompareSystemIds(lpszProjectFile: PAnsiChar; lpszSystemId1: PAnsiChar; lpszSystemId2: PAnsiChar): Integer; stdcall;
{$IFDEF UNICODE}
function GenerateLicenseLongW(var lpInfo: TKEYGEN_INFO_LONGW): Integer; stdcall;
function VerifyLicenseLongW(var lpInfo: TKEYVER_INFO_LONGW): Integer; stdcall;
function GenerateLicenseShortW(var lpInfo: TKEYGEN_INFO_SHORTW): Integer; stdcall;
function VerifyLicenseShortW(var lpInfo: TKEYVER_INFO_SHORTW): Integer; stdcall;
function VerifySignatureW(lpszProjectFile: PWideChar; lpData: Pointer; dwLen: LongWord; lpszSig: PWideChar): Boolean; stdcall;
function VerifySignatureFromFileW(lpszProjectFile: PWideChar; lpszFilename: PWideChar; lpszSig: PWideChar): Boolean; stdcall;
function GenerateSignatureW(lpszProjectFile: PWideChar; lpData: Pointer; dwLen: LongWord; lpszSig: PWideChar): Boolean; stdcall;
function GenerateSignatureFromFileW(lpszProjectFile: PWideChar; lpszFilename: PWideChar; lpszSig: PWideChar): Boolean; stdcall;
function CompareSystemIdsW(lpszProjectFile: PWideChar; lpszSystemId1: PWideChar; lpszSystemId2: PWideChar): Integer; stdcall;
{$ENDIF}

const
// error codes returned by GenerateLicenseLong and GenerateLicenseShort
  KEYGEN_ERROR                    = 0;          // internal error
  KEYGEN_INVALID_PARAMETER        = -1;         // invalid parameter passed to function
  KEYGEN_OPF_OPEN_ERROR           = -2;         // error opening project file
  KEYGEN_OPF_INVALID              = -3;         // invalid project file
  KEYGEN_OPF_ERROR                = -4;         // no keys found in project file or read error
  KEYGEN_FAIL_ALLOC               = -5;         // memory allocation error
  KEYGEN_FAIL_USB                 = -7;

// error codes returned by VerifyLicenseLong and VerifyLicenseShort
  KEYVER_OK                  = 1;          // keyfile verification successful
  KEYVER_FAIL                = 0;          // keyfile is invalid
  KEYVER_INVALID_PARAMETER   = -1;         // invalid parameter passed to function
  KEYVER_OPF_OPEN_ERROR      = -2;         // error opening project file
  KEYVER_OPF_INVALID         = -3;         // invalid project file
  KEYVER_FAIL_ALLOC          = -4;         // memory allocation error

// flags used in KEYGEN_INFO_SHORT and KEYVER_INFO_SHORT
  SHORTKEY_FLAG_ADVANCED          = 1;          // create advanced short license key
  SHORTKEY_FLAG_EXPIRE            = 2;          // license key expires and lpExpDate is valid, SHORTKEY_FLAG_ADVANCED must be set
  SHORTKEY_FLAG_LEGACY_SYSID      = 4;          // use old system ID format (Obsidium < 1.4.2)
  SHORTKEY_FLAG_PAD               = 8;          // pad license keys to next separator character boundary

// flags used in KEYGEN_INFO_LONG and KEYVER_INFO_LONG
  LONGKEY_FLAG_TEXT               = 1;          // generate or verify text key instead of binary key
  LONGKEY_FLAG_LEGACY_SYSID       = 2;          // use old system ID format (Obsidium < 1.4.2)
  LONGKEY_FLAG_USBID_DRIVE        = 4;          // get USB device ID from drive string in lpUsbId

// flags passed to GetLicenseHash
  LICENSE_BIN                     = 0;          // binary key
  LICENSE_TEXT                    = 1;          // text key
  LICENSE_SHORT                   = 2;          // short key


implementation

function GenerateLicenseLong; external 'keygen.dll';
function GenerateLicenseShort; external 'keygen.dll';
function VerifyLicenseLong; external 'keygen.dll';
function VerifyLicenseShort; external 'keygen.dll';
function ConvertLicenseLongToStr; external 'keygen.dll';
function ConvertLicenseLongToBin; external 'keygen.dll';
function GetLicenseHash; external 'keygen.dll';
function VerifySignature; external 'keygen.dll';
function VerifySignatureFromFile; external 'keygen.dll';
function GenerateSignature; external 'keygen.dll';
function GenerateSignatureFromFile; external 'keygen.dll';
function CompareSystemIds; external 'keygen.dll';
{$IFDEF UNICODE}
function GenerateLicenseLongW; external 'keygen.dll';
function GenerateLicenseShortW; external 'keygen.dll';
function VerifyLicenseLongW; external 'keygen.dll';
function VerifyLicenseShortW; external 'keygen.dll';
function VerifySignatureW; external 'keygen.dll';
function VerifySignatureFromFileW; external 'keygen.dll';
function GenerateSignatureW; external 'keygen.dll';
function GenerateSignatureFromFileW; external 'keygen.dll';
function CompareSystemIdsW; external 'keygen.dll';
{$ENDIF}

end.
