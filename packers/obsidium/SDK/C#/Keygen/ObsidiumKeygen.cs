using System;
using System.Text;
using System.Runtime.InteropServices;

public class ObsidiumKeygen
{
    // flags passed to GetLicenseHash
    public static UInt32 LICENSE_BIN = 0;		// binary key
    public static UInt32 LICENSE_TEXT = 1;		// text key
    public static UInt32 LICENSE_SHORT = 2;		// short key

    // flags used in KEYGEN_INFO_LONG and KEYVER_INFO_LONG
    public static UInt32 LONGKEY_FLAG_TEXT = 1;         // generate or verify text key instead of binary key
    public static UInt32 LONGKEY_FLAG_LEGACY_SYSID = 2;	// use old system ID format (Obsidium < 1.4.2)

    // flags used in KEYGEN_INFO_SHORT and KEYVER_INFO_SHORT
    public static UInt32 SHORTKEY_FLAG_ADVANCED = 1;		// generate advanced short license key
    public static UInt32 SHORTKEY_FLAG_EXPIRE = 2;		// license key expires and lpExpDate is valid, SHORTKEY_FLAG_ADVANCED must be set
    public static UInt32 SHORTKEY_FLAG_LEGACY_SYSID = 4;		// use old system ID format (Obsidium < 1.4.2)

    // error codes returned by GenerateLicenseLong and GenerateLicenseShort
    public static Int32 KEYGEN_ERROR = 0;		        // internal error
    public static Int32 KEYGEN_INVALID_PARAMETER = -1;	// invalid parameter passed to function
    public static Int32 KEYGEN_OPF_OPEN_ERROR = -2;		// error opening project file
    public static Int32 KEYGEN_OPF_INVALID = -3;		// invalid project file
    public static Int32 KEYGEN_OPF_ERROR = -4;		    // no keys found in project file or read error
    public static Int32 KEYGEN_FAIL_ALLOC = -5;		    // memory allocation error
    public static Int32 KEYGEN_FAIL_BUSY = -6;

    // error codes returned by VerifyLicenseLong and VerifyLicenseShort
    public static Int32 KEYVER_OK = 1;		            // keyfile verification successful
    public static Int32 KEYVER_FAIL = 0;		        // keyfile is invalid
    public static Int32 KEYVER_INVALID_PARAMETER = -1;	// invalid parameter passed to function
    public static Int32 KEYVER_OPF_OPEN_ERROR = -2;		// error opening project file
    public static Int32 KEYVER_OPF_INVALID = -3;		// invalid project file
    public static Int32 KEYVER_FAIL_ALLOC = -4;		    // memory allocation error
    public static Int32 KEYVER_FAIL_BUSY = -5;		    // the library is busy

    // structure passed to GenerateLicenseLong
    [StructLayout(LayoutKind.Sequential, Pack = 4, CharSet = CharSet.Ansi)]
    public struct KEYGEN_INFO_LONG
    {
        public UInt32 dwSize;					// size of this structure
        public UInt32 dwFlags;				    // flags
        [MarshalAs(UnmanagedType.LPStr)]
        public string lpInfo1;				    // license info
        [MarshalAs(UnmanagedType.LPStr)]
        public string lpInfo2;				    // license info
        [MarshalAs(UnmanagedType.LPStr)]
        public string lpInfo3;				    // license info
        [MarshalAs(UnmanagedType.LPStr)]
        public string lpExtInfo;			    // license info
        [MarshalAs(UnmanagedType.LPStr)]
        public string lpSystemId;				// system ID string
        public IntPtr lpExpDate;
        public IntPtr lpBuffer;				    // output buffer
        [MarshalAs(UnmanagedType.LPStr)]
        public string lpProjectFile;			// project filename
    }

    // structure passed to GenerateLicenseLongW
    [StructLayout(LayoutKind.Sequential, Pack = 4, CharSet = CharSet.Unicode)]
    public struct KEYGEN_INFO_LONGW
    {
        public UInt32 dwSize;					// size of this structure
        public UInt32 dwFlags;				    // flags
        [MarshalAs(UnmanagedType.LPWStr)]
        public string lpInfo1;				    // license info
        [MarshalAs(UnmanagedType.LPWStr)]
        public string lpInfo2;				    // license info
        [MarshalAs(UnmanagedType.LPWStr)]
        public string lpInfo3;				    // license info
        [MarshalAs(UnmanagedType.LPWStr)]
        public string lpExtInfo;			    // license info
        [MarshalAs(UnmanagedType.LPWStr)]
        public string lpSystemId;				// system ID string
        public System.Runtime.InteropServices.ComTypes.FILETIME[] lpExpDate;
        public IntPtr lpBuffer;				    // output buffer
        [MarshalAs(UnmanagedType.LPWStr)]
        public string lpProjectFile;			// project filename
    }

    // structure passed to VerifyLicenseLong
    [StructLayout(LayoutKind.Sequential, Pack = 4, CharSet = CharSet.Ansi)]
    public struct KEYVER_INFO_LONG
    {
        public UInt32 dwSize;					// size of this structure
        public UInt32 dwFlags;				    // flags
        public IntPtr lpInfo1;			        // license info
        public IntPtr lpInfo2;			        // ""
        public IntPtr lpInfo3;			        // ""
        public IntPtr lpExtInfo;			    // ""
        public IntPtr lpSystemId;		        // system ID string
        public IntPtr lpExpDate;				// expiration date
        public IntPtr lpBuffer;				    // input buffer
        [MarshalAs(UnmanagedType.LPStr)]
        public string lpProjectFile;		    // project filename
    }

    // structure passed to VerifyLicenseLongW
    [StructLayout(LayoutKind.Sequential, Pack = 4, CharSet = CharSet.Unicode)]
    public struct KEYVER_INFO_LONGW
    {
        public UInt32 dwSize;					// size of this structure
        public UInt32 dwFlags;				    // flags
        public IntPtr lpInfo1;			        // license info
        public IntPtr lpInfo2;			        // ""
        public IntPtr lpInfo3;			        // ""
        public IntPtr lpExtInfo;			    // ""
        public IntPtr lpSystemId;		        // system ID string
        public IntPtr lpExpDate;				// expiration date
        public IntPtr lpBuffer;				    // input buffer
        [MarshalAs(UnmanagedType.LPWStr)]
        public string lpProjectFile;		    // project filename
    }

    // structure passed to GenerateLicenseShort
    [StructLayout(LayoutKind.Sequential, Pack = 2, CharSet = CharSet.Ansi)]
    public struct KEYGEN_INFO_SHORT
    {
        public UInt32 dwSize;					// size of this structure
        public UInt32 dwFlags;				    // flags
        [MarshalAs(UnmanagedType.LPStr)]
        public string lpInfo;					// license info string
        [MarshalAs(UnmanagedType.LPStr)]
        public string lpSystemId;				// system ID string
        public IntPtr lpExpDate;				// expiration date
        public IntPtr lpKey;					// output buffer
        [MarshalAs(UnmanagedType.LPStr)]
        public string lpProjectFile;			// project file name
        public UInt16 dwCustom;				    // custom value
    }

    // structure passed to GenerateLicenseShortW
    [StructLayout(LayoutKind.Sequential, Pack = 2, CharSet = CharSet.Unicode)]
    public struct KEYGEN_INFO_SHORTW
    {
        public UInt32 dwSize;					// size of this structure
        public UInt32 dwFlags;				    // flags
        [MarshalAs(UnmanagedType.LPWStr)]
        public string lpInfo;					// license info string
        [MarshalAs(UnmanagedType.LPWStr)]
        public string lpSystemId;				// system ID string
        public IntPtr lpExpDate;				// expiration date
        public IntPtr lpKey;					// output buffer
        [MarshalAs(UnmanagedType.LPWStr)]
        public string lpProjectFile;			// project file name
        public UInt16 dwCustom;				    // custom value
    }

    // structure passed to VerifyLicenseShort
    [StructLayout(LayoutKind.Sequential, Pack = 2, CharSet = CharSet.Ansi)]
    public struct KEYVER_INFO_SHORT
    {
        public UInt32 dwSize;					// size of this structure
        public UInt32 dwFlags;				    // flags
        [MarshalAs(UnmanagedType.LPStr)]
        public string lpInfo;					// license info string
        [MarshalAs(UnmanagedType.LPStr)]
        public string lpSystemId;				// system ID string
        public IntPtr lpExpDate;				// expiration date
        [MarshalAs(UnmanagedType.LPStr)]
        public string lpKey;					// license key
        [MarshalAs(UnmanagedType.LPStr)]
        public string lpProjectFile;			// project file name
        public UInt16 dwCustom;				    // custom value
    }

    // structure passed to VerifyLicenseShortW
    [StructLayout(LayoutKind.Sequential, Pack = 2, CharSet = CharSet.Unicode)]
    public struct KEYVER_INFO_SHORTW
    {
        public UInt32 dwSize;					// size of this structure
        public UInt32 dwFlags;				    // flags
        [MarshalAs(UnmanagedType.LPWStr)]
        public string lpInfo;					// license info string
        [MarshalAs(UnmanagedType.LPWStr)]
        public string lpSystemId;				// system ID string
        public IntPtr lpExpDate;				// expiration date
        [MarshalAs(UnmanagedType.LPWStr)]
        public string lpKey;					// license key
        [MarshalAs(UnmanagedType.LPWStr)]
        public string lpProjectFile;			// project file name
        public UInt16 dwCustom;				    // custom value
    }

    [DllImport("keygen.dll", EntryPoint = "GenerateLicenseLong", CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Ansi)]
    public static extern Int32 GenerateLicenseLong(ref KEYGEN_INFO_LONG ki);
    [DllImport("keygen.dll", EntryPoint = "GenerateLicenseLongW", CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Unicode)]
    public static extern Int32 GenerateLicenseLongW(ref KEYGEN_INFO_LONGW ki);
    [DllImport("keygen.dll", EntryPoint = "VerifyLicenseLong", CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Ansi)]
    public static extern Int32 VerifyLicenseLong(ref KEYVER_INFO_LONG ki);
    [DllImport("keygen.dll", EntryPoint = "VerifyLicenseLongW", CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Unicode)]
    public static extern Int32 VerifyLicenseLongW(ref KEYVER_INFO_LONGW ki);
    [DllImport("keygen.dll", EntryPoint = "GetLicenseHash", CallingConvention = CallingConvention.StdCall)]
    public static extern bool GetLicenseHash(byte[] lpLic, UInt32 dwType, byte[] lpHash);
    [DllImport("keygen.dll", EntryPoint = "GenerateLicenseShort", CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Ansi)]
    public static extern Int32 GenerateLicenseShort(ref KEYGEN_INFO_SHORT ki);
    [DllImport("keygen.dll", EntryPoint = "GenerateLicenseShortW", CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Unicode)]
    public static extern Int32 GenerateLicenseShortW(ref KEYGEN_INFO_SHORTW ki);
    [DllImport("keygen.dll", EntryPoint = "VerifyLicenseShort", CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Ansi)]
    public static extern Int32 VerifyLicenseShort(ref KEYVER_INFO_SHORT ki);
    [DllImport("keygen.dll", EntryPoint = "VerifyLicenseShortW", CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Unicode)]
    public static extern Int32 VerifyLicenseShortW(ref KEYVER_INFO_SHORTW ki);
    [DllImport("keygen.dll", EntryPoint = "ConvertLicenseLongToStr", CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Ansi)]
    public static extern Int32 ConvertLicenseLongToStr(byte[] lpLic, UInt32 dwLen, StringBuilder lpBuffer);
    [DllImport("keygen.dll", EntryPoint = "ConvertLicenseLongToBin", CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Ansi)]
    public static extern Int32 ConvertLicenseLongToBin([MarshalAs(UnmanagedType.LPStr)] string lpLic, byte[] lpBuffer);
    [DllImport("keygen.dll", EntryPoint = "VerifySignature", CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Ansi)]
    public static extern bool VerifySignature(string lpszProjectFile, IntPtr lpData, UInt32 dwLen, string lpszSig);
    [DllImport("keygen.dll", EntryPoint = "VerifySignatureW", CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Unicode)]
    public static extern bool VerifySignatureW(string lpszProjectFile, IntPtr lpData, UInt32 dwLen, string lpszSig);
    [DllImport("keygen.dll", EntryPoint = "VerifySignatureFromFile", CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Ansi)]
    public static extern bool VerifySignatureFromFile(string lpszProjectFile, string lpszFilename, string lpszSig);
    [DllImport("keygen.dll", EntryPoint = "VerifySignatureFromFileW", CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Unicode)]
    public static extern bool VerifySignatureFromFileW(string lpszProjectFile, string lpszFilename, string lpszSig);
    [DllImport("keygen.dll", EntryPoint = "GenerateSignature", CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Ansi)]
    public static extern bool GenerateSignature(string lpszProjectFile, IntPtr lpData, UInt32 dwLen, StringBuilder lpszSig);
    [DllImport("keygen.dll", EntryPoint = "GenerateSignatureW", CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Unicode)]
    public static extern bool GenerateSignatureW(string lpszProjectFile, IntPtr lpData, UInt32 dwLen, StringBuilder lpszSig);
    [DllImport("keygen.dll", EntryPoint = "GenerateSignatureFromFile", CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Ansi)]
    public static extern bool GenerateSignatureFromFile(string lpszProjectFile, string lpszFilename, StringBuilder lpszSig);
    [DllImport("keygen.dll", EntryPoint = "GenerateSignatureFromFileW", CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Unicode)]
    public static extern bool GenerateSignatureFromFileW(string lpszProjectFile, string lpszFilename, StringBuilder lpszSig);


    public static bool verifyLicenseShort(string projectFile, string licenseInfo, string licenseKey, string systemId,
        out UInt16 customValue, out System.DateTime expDate)
    {
        KEYVER_INFO_SHORT kis = new KEYVER_INFO_SHORT();
        kis.dwSize = (UInt32)System.Runtime.InteropServices.Marshal.SizeOf(kis);
        kis.dwFlags = 0;
        kis.lpInfo = licenseInfo;
        kis.lpKey = licenseKey;
        kis.lpProjectFile = projectFile;
        kis.lpSystemId = systemId;
        kis.dwCustom = 0;
        System.Runtime.InteropServices.ComTypes.FILETIME ft = new System.Runtime.InteropServices.ComTypes.FILETIME();
        ft.dwHighDateTime = 0;
        ft.dwLowDateTime = 0;
        kis.lpExpDate = Marshal.AllocHGlobal(System.Runtime.InteropServices.Marshal.SizeOf(ft));
        Marshal.StructureToPtr(ft, kis.lpExpDate, false);
        Int32 result = VerifyLicenseShort(ref kis);
        ft = (System.Runtime.InteropServices.ComTypes.FILETIME)Marshal.PtrToStructure(kis.lpExpDate, typeof(System.Runtime.InteropServices.ComTypes.FILETIME));
        Marshal.FreeHGlobal(kis.lpExpDate);
        customValue = kis.dwCustom;
        expDate = System.DateTime.FromFileTime((long)ft.dwLowDateTime + ((long)ft.dwHighDateTime << 32));
        return result == KEYVER_OK;
    }

    public static bool generateLicenseShort(string projectFile, string licenseInfo, out string licenseKey, string systemId,
        bool advanced, UInt16 customValue, System.DateTime? expDate)
    {
        KEYGEN_INFO_SHORT kis = new KEYGEN_INFO_SHORT();
        kis.dwSize = (UInt32)System.Runtime.InteropServices.Marshal.SizeOf(kis);
        kis.dwFlags = 0;
        if (advanced)
            kis.dwFlags |= SHORTKEY_FLAG_ADVANCED;
        if (expDate != null)
        {
            kis.dwFlags |= SHORTKEY_FLAG_EXPIRE;
            long lExp = expDate.Value.ToFileTime();
            System.Runtime.InteropServices.ComTypes.FILETIME ft = new System.Runtime.InteropServices.ComTypes.FILETIME();
            ft.dwHighDateTime = (int)(lExp >> 32);
            ft.dwLowDateTime = (int)(lExp & 0xFFFFFFFF);
            kis.lpExpDate = Marshal.AllocHGlobal(System.Runtime.InteropServices.Marshal.SizeOf(ft));
            Marshal.StructureToPtr(ft, kis.lpExpDate, false);
        }
        else
            kis.lpExpDate = IntPtr.Zero;
        kis.lpProjectFile = projectFile;
        kis.lpInfo = licenseInfo;
        kis.lpSystemId = systemId;
        kis.dwCustom = customValue;
        kis.lpKey = Marshal.AllocHGlobal(256);
        Int32 result = ObsidiumKeygen.GenerateLicenseShort(ref kis);
        if (result > 0)
        {
            byte[] byteBuffer = new byte[256];
            Marshal.Copy(kis.lpKey, byteBuffer, 0, 256);
            string licShort = System.Text.Encoding.ASCII.GetString(byteBuffer);
            licenseKey = licShort.Remove(licShort.IndexOf('\0'));
        }
        else
            licenseKey = "";
        if (kis.lpExpDate != IntPtr.Zero)
            Marshal.FreeHGlobal(kis.lpExpDate);
        Marshal.FreeHGlobal(kis.lpKey);
        return result > 0;
    }

    public static bool verifyLicenseLong(string projectFile, string licenseKey, out string licenseInfo1,
        out string licenseInfo2, out string licenseInfo3, out string licenseInfo4, out string systemId,
        out System.DateTime expDate)
    {
        KEYVER_INFO_LONG kvi = new KEYVER_INFO_LONG();
        kvi.dwSize = (UInt32)System.Runtime.InteropServices.Marshal.SizeOf(kvi);
        kvi.dwFlags = LONGKEY_FLAG_TEXT;
        kvi.lpInfo1 = Marshal.AllocHGlobal(32);
        kvi.lpInfo2 = Marshal.AllocHGlobal(32);
        kvi.lpInfo3 = Marshal.AllocHGlobal(32);
        kvi.lpExtInfo = Marshal.AllocHGlobal(128);
        kvi.lpSystemId = Marshal.AllocHGlobal(32);
        kvi.lpProjectFile = projectFile;
        kvi.lpBuffer = Marshal.StringToHGlobalAnsi(licenseKey);
        System.Runtime.InteropServices.ComTypes.FILETIME ft = new System.Runtime.InteropServices.ComTypes.FILETIME();
        ft.dwHighDateTime = 0;
        ft.dwLowDateTime = 0;
        kvi.lpExpDate = Marshal.AllocHGlobal(System.Runtime.InteropServices.Marshal.SizeOf(ft));
        Int32 ret = VerifyLicenseLong(ref kvi);
        // return license information strings
        byte[] byteBuffer = new byte[128];
        Marshal.Copy(kvi.lpInfo1, byteBuffer, 0, 32);
        string tmp = System.Text.Encoding.ASCII.GetString(byteBuffer);
        licenseInfo1 = tmp.Remove(tmp.IndexOf('\0'));
        Marshal.Copy(kvi.lpInfo2, byteBuffer, 0, 32);
        tmp = System.Text.Encoding.ASCII.GetString(byteBuffer);
        licenseInfo2 = tmp.Remove(tmp.IndexOf('\0'));
        Marshal.Copy(kvi.lpInfo3, byteBuffer, 0, 32);
        tmp = System.Text.Encoding.ASCII.GetString(byteBuffer);
        licenseInfo3 = tmp.Remove(tmp.IndexOf('\0'));
        Marshal.Copy(kvi.lpExtInfo, byteBuffer, 0, 128);
        tmp = System.Text.Encoding.ASCII.GetString(byteBuffer);
        licenseInfo4 = tmp.Remove(tmp.IndexOf('\0'));
        // return system ID
        Marshal.Copy(kvi.lpSystemId, byteBuffer, 0, 24);
        tmp = System.Text.Encoding.ASCII.GetString(byteBuffer);
        systemId = tmp.Remove(tmp.IndexOf('\0'));
        // return expiration date
        ft = (System.Runtime.InteropServices.ComTypes.FILETIME)Marshal.PtrToStructure(kvi.lpExpDate, typeof(System.Runtime.InteropServices.ComTypes.FILETIME));
        expDate = System.DateTime.FromFileTime((long)ft.dwLowDateTime + ((long)ft.dwHighDateTime << 32));
        // clean up
        Marshal.FreeHGlobal(kvi.lpInfo1);
        Marshal.FreeHGlobal(kvi.lpInfo2);
        Marshal.FreeHGlobal(kvi.lpInfo3);
        Marshal.FreeHGlobal(kvi.lpExpDate);
        Marshal.FreeHGlobal(kvi.lpSystemId);
        return ret == KEYVER_OK;
    }

        
    public static bool generateLicenseLong(string projectFile, string licenseInfo1, string licenseInfo2, string licenseInfo3, string licenseInfo4,
         System.DateTime? expDate, string systemId, out string licenseKey)
    {
        KEYGEN_INFO_LONG ki = new KEYGEN_INFO_LONG();
        ki.dwSize = (UInt32)System.Runtime.InteropServices.Marshal.SizeOf(ki);
        ki.dwFlags = LONGKEY_FLAG_TEXT;
        ki.lpInfo1 = licenseInfo1;
        ki.lpInfo2 = licenseInfo2;
        ki.lpInfo3 = licenseInfo3;
        ki.lpExtInfo = licenseInfo4;
        if (expDate != null)
        {
            long lExp = expDate.Value.ToFileTime();
            System.Runtime.InteropServices.ComTypes.FILETIME ft = new System.Runtime.InteropServices.ComTypes.FILETIME();
            ft.dwHighDateTime = (int)(lExp >> 32);
            ft.dwLowDateTime = (int)(lExp & 0xFFFFFFFF);
            ki.lpExpDate = Marshal.AllocHGlobal(System.Runtime.InteropServices.Marshal.SizeOf(ft));
            Marshal.StructureToPtr(ft, ki.lpExpDate, false);
        }
        else
            ki.lpExpDate = IntPtr.Zero;
        ki.lpSystemId = systemId;
        ki.lpProjectFile = projectFile;
        ki.lpBuffer = Marshal.AllocHGlobal(2048);
        Int32 result = ObsidiumKeygen.GenerateLicenseLong(ref ki);
        if (result > 0)
        {
            byte[] byteBuffer = new byte[result];
            Marshal.Copy(ki.lpBuffer, byteBuffer, 0, byteBuffer.Length);
            licenseKey = System.Text.Encoding.ASCII.GetString(byteBuffer, 0, byteBuffer.Length);
        }
        else
            licenseKey = "";
        if (ki.lpExpDate != IntPtr.Zero)
            Marshal.FreeHGlobal(ki.lpExpDate);
        Marshal.FreeHGlobal(ki.lpBuffer);
        return result > 0;
    }
}
