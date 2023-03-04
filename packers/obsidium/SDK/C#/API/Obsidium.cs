using System;
using System.Text;
using System.Runtime.InteropServices;

public class Obsidium
{
    [DllImport("obsidium.dll", EntryPoint = "obsIsLicensed", CallingConvention = CallingConvention.StdCall)]
    [return: MarshalAs(UnmanagedType.U1)]
    public static extern bool isLicensed();
    [DllImport("obsidium.dll", EntryPoint = "obsGetCustomValue", CallingConvention = CallingConvention.StdCall)]
	public static extern ushort getCustomValue();
    [DllImport("obsidium.dll", EntryPoint = "obsGetLicenseExpiration", CallingConvention = CallingConvention.StdCall)]
    [return: MarshalAs(UnmanagedType.U1)]
    public static extern bool getLicenseExpiration(ref System.Runtime.InteropServices.ComTypes.FILETIME lpExpDate);
    [DllImport("obsidium.dll", EntryPoint = "obsGetLicenseHash", CallingConvention = CallingConvention.StdCall)]
    [return: MarshalAs(UnmanagedType.U1)]
    public static extern bool getLicenseHash(byte[] lpHash);
    [DllImport("obsidium.dll", EntryPoint = "obsGetLicenseStatus", CallingConvention = CallingConvention.StdCall)]
    public static extern Int32 getLicenseStatus();
    [DllImport("obsidium.dll", EntryPoint = "obsGetLicenseInfoW", CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Unicode)]
    [return: MarshalAs(UnmanagedType.U1)]
    public static extern bool getLicenseInfoW(UInt32 dwInfoNr, StringBuilder lpBuffer);
    [DllImport("obsidium.dll", EntryPoint = "obsGetSystemId", CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Ansi)]
    [return: MarshalAs(UnmanagedType.U1)]
    public static extern bool getSystemId(StringBuilder lpBuffer);
    [DllImport("obsidium.dll", EntryPoint = "obsGetTrialDays", CallingConvention = CallingConvention.StdCall)]
    public static extern Int32 getTrialDays();
    [DllImport("obsidium.dll", EntryPoint = "obsGetTrialRuns", CallingConvention = CallingConvention.StdCall)]
    public static extern Int32 getTrialRuns();
    [DllImport("obsidium.dll", EntryPoint = "obsGetInitialTrialDays", CallingConvention = CallingConvention.StdCall)]
    public static extern Int32 getInitialTrialDays();
    [DllImport("obsidium.dll", EntryPoint = "obsGetInitialTrialRuns", CallingConvention = CallingConvention.StdCall)]
    public static extern Int32 getInitialTrialRuns();
    [DllImport("obsidium.dll", EntryPoint = "obsSetLicense", CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Ansi)]
    [return: MarshalAs(UnmanagedType.U1)]
    public static extern bool setLicense(string lpStr);
	[DllImport("obsidium.dll", EntryPoint = "obsSetLicenseW", CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Unicode)]
    [return: MarshalAs(UnmanagedType.U1)]
    public static extern bool setLicenseW(string lpStr);
    [DllImport("obsidium.dll", EntryPoint = "obsSetLicenseShort", CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Ansi)]
    [return: MarshalAs(UnmanagedType.U1)]
	public static extern bool setLicenseShort(string lpInfo, string lpKey, string lpSystemId);
    [DllImport("obsidium.dll", EntryPoint = "obsSetLicenseShortW", CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Unicode)]
    [return: MarshalAs(UnmanagedType.U1)]
	public static extern bool setLicenseShortW(string lpInfo, string lpKey, string lpSystemId);
    [DllImport("obsidium.dll", EntryPoint = "obsStoreLicense", CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Ansi)]
    [return: MarshalAs(UnmanagedType.U1)]
	public static extern bool storeLicense(string lpStr);
    [DllImport("obsidium.dll", EntryPoint = "obsStoreLicenseW", CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Unicode)]
    [return: MarshalAs(UnmanagedType.U1)]
	public static extern bool storeLicenseW(string lpStr);
    [DllImport("obsidium.dll", EntryPoint = "obsStoreLicenseShort", CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Ansi)]
    [return: MarshalAs(UnmanagedType.U1)]
	public static extern bool storeLicenseShort(string lpInfo, string lpKey, string lpSystemId);
    [DllImport("obsidium.dll", EntryPoint = "obsStoreLicenseShortW", CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Unicode)]
    [return: MarshalAs(UnmanagedType.U1)]
	public static extern bool storeLicenseShortW(string lpInfo, string lpKey, string lpSystemId);
    [DllImport("obsidium.dll", EntryPoint = "obsGetExpirationDate", CallingConvention = CallingConvention.StdCall)]
	public static extern void getExpirationDate(ref System.Runtime.InteropServices.ComTypes.FILETIME lpExpDate);
    [DllImport("obsidium.dll", EntryPoint = "obsDeleteTrialData", CallingConvention = CallingConvention.StdCall)]
	public static extern void deleteTrialData();
    [DllImport("obsidium.dll", EntryPoint = "obsDeleteLicenseData", CallingConvention = CallingConvention.StdCall)]
    [return: MarshalAs(UnmanagedType.U1)]
	public static extern bool deleteLicenseData();
    [DllImport("obsidium.dll", EntryPoint = "obsDisableLicense", CallingConvention = CallingConvention.StdCall)]
	public static extern void disableLicense();
    [DllImport("obsidium.dll", EntryPoint = "obsIsProtected", CallingConvention = CallingConvention.StdCall)]
    [return: MarshalAs(UnmanagedType.U1)]
	public static extern bool isProtected();
    [DllImport("obsidium.dll", EntryPoint = "obsGetLicenseInfo", CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Ansi)]
    [return: MarshalAs(UnmanagedType.U1)]
    public static extern bool getLicenseInfo(UInt32 dwInfoNr, StringBuilder lpBuffer);
    [DllImport("obsidium.dll", EntryPoint = "obsGetInstanceCount", CallingConvention = CallingConvention.StdCall)]
	public static extern Int32 getInstanceCount();
    [DllImport("obsidium.dll", EntryPoint = "obsIsVm", CallingConvention = CallingConvention.StdCall)]
    [return: MarshalAs(UnmanagedType.U1)]
    public static extern bool isVm();
    [DllImport("obsidium.dll", EntryPoint = "obsGetTrialCounter", CallingConvention = CallingConvention.StdCall)]
    public static extern Int32 getTrialCounter(UInt32 dwCtrIdx);
    [DllImport("obsidium.dll", EntryPoint = "obsGetInitialTrialCounter", CallingConvention = CallingConvention.StdCall)]
    public static extern Int32 getInitialTrialCounter(UInt32 dwCtrIdx);
    [DllImport("obsidium.dll", EntryPoint = "obsDecTrialCounter", CallingConvention = CallingConvention.StdCall)]
    [return: MarshalAs(UnmanagedType.U1)]
    public static extern bool decTrialCounter(UInt32 dwCtrIdx, Int16 wValue);
    [DllImport("obsidium.dll", EntryPoint = "obsGetProtectionDate", CallingConvention = CallingConvention.StdCall)]
	public static extern void getProtectionDate(ref System.Runtime.InteropServices.ComTypes.FILETIME lpDate);
    [DllImport("obsidium.dll", EntryPoint = "obsVerifySignatureData", CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Ansi)]
    [return: MarshalAs(UnmanagedType.U1)]
	public static extern bool verifySignatureData(IntPtr lpData, UInt32 dwSize, string lpszSignature);
    [DllImport("obsidium.dll", EntryPoint = "obsVerifySignatureFile", CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Ansi)]
    [return: MarshalAs(UnmanagedType.U1)]
	public static extern bool verifySignatureFile(string lpszFilename, string lpszSignature);
    [DllImport("obsidium.dll", EntryPoint = "obsVerifySignatureFileW", CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Unicode)]
    [return: MarshalAs(UnmanagedType.U1)]
	public static extern bool verifySignatureFileW(string lpszFilename, string lpszSignature);
    // USB licensing
    [DllImport("obsidium.dll", EntryPoint = "obsUsbGetLicenseDeviceId", CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Ansi)]
    [return: MarshalAs(UnmanagedType.U1)]
    public static extern bool usbGetLicenseDeviceId(StringBuilder lpszDeviceId);
    [DllImport("obsidium.dll", EntryPoint = "obsUsbGetDeviceId", CallingConvention = CallingConvention.StdCall)]
    [return: MarshalAs(UnmanagedType.U1)]
    public static extern bool usbGetDeviceId([MarshalAs(UnmanagedType.LPStr)]string lpszVolume, [MarshalAs(UnmanagedType.LPStr)]StringBuilder lpszDeviceId,
        [MarshalAs(UnmanagedType.LPWStr)]StringBuilder lpszManufacturer, UInt32 dwManufacturerSize,
        [MarshalAs(UnmanagedType.LPWStr)]StringBuilder lpszProduct, UInt32 dwProductSize,
        [MarshalAs(UnmanagedType.LPWStr)]StringBuilder lpszSerialNumber, UInt32 dwSerialNumberSize);
    public delegate bool ObsUsbEnumCallback([MarshalAs(UnmanagedType.LPStr)]string lpszDeviceId,
        [MarshalAs(UnmanagedType.LPWStr)]string lpszManufacturer,
        [MarshalAs(UnmanagedType.LPWStr)]string lpszProduct, 
        [MarshalAs(UnmanagedType.LPWStr)]string lpszSerialNumber,
        IntPtr param);
    [DllImport("obsidium.dll", EntryPoint = "obsUsbEnumDevices", CallingConvention = CallingConvention.StdCall)]
    [return: MarshalAs(UnmanagedType.U1)]
	public static extern bool usbEnumDevices(ObsUsbEnumCallback callback, IntPtr param);
    public delegate void ObsUsbCallback(UInt32 eventType, UInt32 eventInfo, IntPtr param);
    [DllImport("obsidium.dll", EntryPoint = "obsUsbRegisterCallback", CallingConvention = CallingConvention.StdCall)]
    public static extern void usbRegisterCallback(ObsUsbCallback callback, IntPtr param);
    // Network licensing
    [DllImport("obsidium.dll", EntryPoint = "obsNetLicConnect", CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Ansi)]
    [return: MarshalAs(UnmanagedType.U1)]
    public static extern bool netLicConnect(string host, UInt16 port);
    [DllImport("obsidium.dll", EntryPoint = "obsNetLicDisconnect", CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Ansi)]
    public static extern void netLicDisconnect();
    public delegate void ObsNetLicCallback(UInt32 eventType, UInt32 eventInfo, IntPtr param);
    [DllImport("obsidium.dll", EntryPoint = "obsNetLicRegisterCallback", CallingConvention = CallingConvention.StdCall)]
    public static extern void netLicRegisterCallback(ObsNetLicCallback callback, IntPtr param);

    [DllImport("obsidium.dll", EntryPoint = "obsGetLicenseSystemId", CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Ansi)]
    [return: MarshalAs(UnmanagedType.U1)]
    public static extern bool getLicenseSystemId(StringBuilder lpBuffer);
    [DllImport("obsidium.dll", EntryPoint = "obsReloadLicense", CallingConvention = CallingConvention.StdCall)]
    [return: MarshalAs(UnmanagedType.U1)]
    public static extern bool reloadLicense();
    [DllImport("obsidium.dll", EntryPoint = "obsGetActiveLicensingSystem", CallingConvention = CallingConvention.StdCall)]
    public static extern UInt32 obsGetActiveLicensingSystem();

    // getLicenseStatus return values
    public const int LIC_STATUS_NOTFOUND 	= 0;	// no license key found
    public const int LIC_STATUS_VALID 		= 1;	// valid license key present
    public const int LIC_STATUS_EXPIRED 	= 2;	// license key has expired
    public const int LIC_STATUS_BAD_SYSTEMID = 3;	// system ID does not match
    public const int LIC_STATUS_INVALID 	= 4;	// invalid or corrupt key
    public const int LIC_STATUS_BLACKLISTED = 5;	// license key is blacklisted
    public const int LIC_STATUS_USB_MISSING = 6;	// required USB device is missing

	// obsGetActiveLicensingSystem return values (lower 16 bits)
    public const int LIC_SYSTEM_NONE         = 0;	// no licensing system / external system
    public const int LIC_SYSTEM_SHORT_KEYS   = 1;	// short license keys
    public const int LIC_SYSTEM_LONG_KEYS    = 2;	// long license keys
    public const int LIC_SYSTEM_NETWORK      = 3;	// network licensing
    public const int LIC_SYSTEM_SL_C2        = 4;	// Senselock Clave 2
    public const int LIC_SYSTEM_SL_EL        = 5;	// Senselock EL
	// obsGetActiveLicensingSystem flags (upper 16 bits)
    public const int LIC_SYSTEM_FLAG_USB     = 1;	// USB licensing is enabled
    public const int LIC_SYSTEM_FLAG_HW      = 2;	// hardware locking is enabled

    // Network licensing callback events
    public const int OBS_NETLIC_EVENT_CONNECT           = 0x0001;
    public const int OBS_NETLIC_EVENT_DISCONNECT	    = 0x0002;
    public const int OBS_NETLIC_EVENT_LICENSE_DENIED	= 0x0003;
    public const int OBS_NETLIC_EVENT_LICENSE_GRANTED   = 0x0004;

    // Network licensing callback event info (OBS_NETLIC_EVENT_LICENSE_DENIED)
    public const int OBS_NETLIC_EVENT_INFO_NONE			        = 0x0000;
    public const int OBS_NETLIC_EVENT_INFO_NO_CERT			    = 0x0001;	// server does not have matching app cert
    public const int OBS_NETLIC_EVENT_INFO_NO_LICENSE		    = 0x0002;	// all licenses in use
    public const int OBS_NETLIC_EVENT_INFO_EXPIRED			    = 0x0003;	// license is expired
    public const int OBS_NETLIC_EVENT_INFO_ALREADY_CONNECTED    = 0x0004;	// client is already connected, multiple connections not allowed
    public const int OBS_NETLIC_EVENT_INFO_BAD_SERVER_ID	    = 0x0005;	// client is locked to a different server ID
    public const int OBS_NETLIC_EVENT_INFO_NOT_VALID_YET        = 0x0006;	// app cert is not valid yet

    // USB licensing callback events
    public const int OBS_USB_EVENT_UNLICENSED		    = 0x0001;
    public const int OBS_USB_EVENT_LICENSED				= 0x0002;

    // USB licensing callback event info
    public const int OBS_USB_EVENT_INFO_NONE			= 0x0000;

	// Senselock storage areas
	public const int OBS_USB_STORAGE_READ_ONLY			= 0;
	public const int OBS_USB_STORAGE_READ_WRITE			= 1;

	// Senselock encryption modes
	public const int OBS_USB_ENCDEC_MODE_ECB			= 0;
	public const int OBS_USB_ENCDEC_MODE_CBC			= 1;

	// Senselock EL encryption keys
	public const int OBS_USB_ENCDEC_USER_KEY_1			= 12;
	public const int OBS_USB_ENCDEC_USER_KEY_2			= 13;
	public const int OBS_USB_ENCDEC_USER_KEY_3			= 14;
	public const int OBS_USB_ENCDEC_USER_KEY_4			= 15;
}
