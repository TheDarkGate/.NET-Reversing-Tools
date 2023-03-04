Imports System.Runtime.InteropServices
Imports System.Text

Public Class Obsidium
    <DllImport("obsidium.dll", EntryPoint:="obsIsLicensed", CallingConvention:=CallingConvention.StdCall)> _
    Public Shared Function isLicensed() As <MarshalAs(UnmanagedType.U1)> Boolean
    End Function
    <DllImport("obsidium.dll", EntryPoint:="obsIsProtected", CallingConvention:=CallingConvention.StdCall)> _
    Public Shared Function isProtected() As <MarshalAs(UnmanagedType.U1)> Boolean
    End Function
    <DllImport("obsidium.dll", EntryPoint:="obsGetLicenseInfo", CallingConvention:=CallingConvention.StdCall, CharSet:=CharSet.Ansi)> _
    Public Shared Function getLicenseInfo(ByVal dwInfoNr As UInteger, ByVal lpBuffer As StringBuilder) As <MarshalAs(UnmanagedType.U1)> Boolean
    End Function
    <DllImport("obsidium.dll", EntryPoint:="obsGetLicenseInfoW", CallingConvention:=CallingConvention.StdCall, CharSet:=CharSet.Unicode)> _
    Public Shared Function getLicenseInfoW(ByVal dwInfoNr As UInteger, ByVal lpBuffer As StringBuilder) As <MarshalAs(UnmanagedType.U1)> Boolean
    End Function
    <DllImport("obsidium.dll", EntryPoint:="obsGetCustomValue", CallingConvention:=CallingConvention.StdCall)> _
    Public Shared Function getCustomValue() As UShort
    End Function
    <DllImport("obsidium.dll", EntryPoint:="obsGetLicenseStatus", CallingConvention:=CallingConvention.StdCall)> _
    Public Shared Function getLicenseStatus() As Integer
    End Function
    <DllImport("obsidium.dll", EntryPoint:="obsGetTrialDays", CallingConvention:=CallingConvention.StdCall)> _
    Public Shared Function getTrialDays() As Integer
    End Function
    <DllImport("obsidium.dll", EntryPoint:="obsGetTrialRuns", CallingConvention:=CallingConvention.StdCall)> _
    Public Shared Function getTrialRuns() As Integer
    End Function
    <DllImport("obsidium.dll", EntryPoint:="obsGetInitialTrialDays", CallingConvention:=CallingConvention.StdCall)> _
    Public Shared Function getInitialTrialDays() As Integer
    End Function
    <DllImport("obsidium.dll", EntryPoint:="obsGetInitialTrialRuns", CallingConvention:=CallingConvention.StdCall)> _
    Public Shared Function getInitialTrialRuns() As Integer
    End Function
    <DllImport("obsidium.dll", EntryPoint:="obsDeleteTrialData", CallingConvention:=CallingConvention.StdCall)> _
    Public Shared Sub deleteTrialData()
    End Sub
    <DllImport("obsidium.dll", EntryPoint:="obsDeleteLicenseData", CallingConvention:=CallingConvention.StdCall)> _
    Public Shared Sub deleteLicenseData()
    End Sub
    <DllImport("obsidium.dll", EntryPoint:="obsDisableLicense", CallingConvention:=CallingConvention.StdCall)> _
    Public Shared Sub disableLicense()
    End Sub
    <DllImport("obsidium.dll", EntryPoint:="obsGetSystemId", CallingConvention:=CallingConvention.StdCall, CharSet:=CharSet.Ansi)> _
    Public Shared Function getSystemId(ByVal lpBuffer As StringBuilder) As <MarshalAs(UnmanagedType.U1)> Boolean
    End Function
    <DllImport("obsidium.dll", EntryPoint:="obsGetLicenseHash", CallingConvention:=CallingConvention.StdCall)> _
    Public Shared Function getLicenseHash(ByVal lpHash As Byte()) As <MarshalAs(UnmanagedType.U1)> Boolean
    End Function
    <DllImport("obsidium.dll", EntryPoint:="obsGetLicenseExpiration", CallingConvention:=CallingConvention.StdCall)> _
    Public Shared Function getLicenseExpiration(<Out()> ByRef lpExpDat As System.Runtime.InteropServices.ComTypes.FILETIME) As <MarshalAs(UnmanagedType.U1)> Boolean
    End Function
    <DllImport("obsidium.dll", EntryPoint:="obsGetExpirationDate", CallingConvention:=CallingConvention.StdCall)> _
    Public Shared Sub getExpirationDate(<Out()> ByRef lpExpDat As System.Runtime.InteropServices.ComTypes.FILETIME)
    End Sub
    <DllImport("obsidium.dll", EntryPoint:="obsSetLicense", CallingConvention:=CallingConvention.StdCall, CharSet:=CharSet.Ansi)> _
    Public Shared Function setLicense(ByVal lpStr As String) As <MarshalAs(UnmanagedType.U1)> Boolean
    End Function
    <DllImport("obsidium.dll", EntryPoint:="obsSetLicenseW", CallingConvention:=CallingConvention.StdCall, CharSet:=CharSet.Unicode)> _
    Public Shared Function setLicenseW(ByVal lpStr As String) As <MarshalAs(UnmanagedType.U1)> Boolean
    End Function
    <DllImport("obsidium.dll", EntryPoint:="obsSetLicenseShort", CallingConvention:=CallingConvention.StdCall, CharSet:=CharSet.Ansi)> _
    Public Shared Function setLicenseShort(ByVal lpInfo As String, ByVal lpKey As String, ByVal lpSystemId As String) As <MarshalAs(UnmanagedType.U1)> Boolean
    End Function
    <DllImport("obsidium.dll", EntryPoint:="obsSetLicenseShortW", CallingConvention:=CallingConvention.StdCall, CharSet:=CharSet.Unicode)> _
    Public Shared Function setLicenseShortW(ByVal lpInfo As String, ByVal lpKey As String, ByVal lpSystemId As String) As <MarshalAs(UnmanagedType.U1)> Boolean
    End Function
    <DllImport("obsidium.dll", EntryPoint:="obsStoreLicense", CallingConvention:=CallingConvention.StdCall, CharSet:=CharSet.Ansi)> _
    Public Shared Function storeLicense(ByVal lpStr As String) As <MarshalAs(UnmanagedType.U1)> Boolean
    End Function
    <DllImport("obsidium.dll", EntryPoint:="obsStoreLicenseW", CallingConvention:=CallingConvention.StdCall, CharSet:=CharSet.Unicode)> _
    Public Shared Function storeLicenseW(ByVal lpStr As String) As <MarshalAs(UnmanagedType.U1)> Boolean
    End Function
    <DllImport("obsidium.dll", EntryPoint:="obsStoreLicenseShort", CallingConvention:=CallingConvention.StdCall, CharSet:=CharSet.Ansi)> _
    Public Shared Function storeLicenseShort(ByVal lpInfo As String, ByVal lpKey As String, ByVal lpSystemId As String) As <MarshalAs(UnmanagedType.U1)> Boolean
    End Function
    <DllImport("obsidium.dll", EntryPoint:="obsStoreLicenseShortW", CallingConvention:=CallingConvention.StdCall, CharSet:=CharSet.Unicode)> _
    Public Shared Function storeLicenseShortW(ByVal lpInfo As String, ByVal lpKey As String, ByVal lpSystemId As String) As <MarshalAs(UnmanagedType.U1)> Boolean
    End Function
    <DllImport("obsidium.dll", EntryPoint:="obsGetInstanceCount", CallingConvention:=CallingConvention.StdCall)> _
    Public Shared Function getInstanceCount() As Integer
    End Function
    <DllImport("obsidium.dll", EntryPoint:="obsIsVm", CallingConvention:=CallingConvention.StdCall)> _
    Public Shared Function isVm() As <MarshalAs(UnmanagedType.U1)> Boolean
    End Function
    <DllImport("obsidium.dll", EntryPoint:="obsGetTrialCounter", CallingConvention:=CallingConvention.StdCall)> _
    Public Shared Function getTrialCounter(ByVal dwCtrIdx As UInteger) As Integer
    End Function
    <DllImport("obsidium.dll", EntryPoint:="obsGetInitialTrialCounter", CallingConvention:=CallingConvention.StdCall)> _
    Public Shared Function getInitialTrialCounter(ByVal dwCtrIdx As UInteger) As Integer
    End Function
    <DllImport("obsidium.dll", EntryPoint:="obsDecTrialCounter", CallingConvention:=CallingConvention.StdCall)> _
    Public Shared Function decTrialCounter(ByVal dwCtrIdx As UInteger, ByVal wValue As Short) As <MarshalAs(UnmanagedType.U1)> Boolean
    End Function
    <DllImport("obsidium.dll", EntryPoint:="obsGetProtectionDate", CallingConvention:=CallingConvention.StdCall)> _
    Public Shared Sub getProtectionDate(<Out()> ByRef lpDate As System.Runtime.InteropServices.ComTypes.FILETIME)
    End Sub
    <DllImport("obsidium.dll", EntryPoint:="obsVerifySignatureData", CallingConvention:=CallingConvention.StdCall)> _
    Public Shared Function obsVerifySignatureData(ByVal lpData As Byte(), ByVal dwSize As UInteger, ByVal lpszSignature As String) As <MarshalAs(UnmanagedType.U1)> Boolean
    End Function
    <DllImport("obsidium.dll", EntryPoint:="obsVerifySignatureFile", CallingConvention:=CallingConvention.StdCall, CharSet:=CharSet.Ansi)> _
    Public Shared Function obsVerifySignatureFile(ByVal lpszFilename As String, ByVal lpszSignature As String) As <MarshalAs(UnmanagedType.U1)> Boolean
    End Function
    <DllImport("obsidium.dll", EntryPoint:="obsVerifySignatureFileW", CallingConvention:=CallingConvention.StdCall, CharSet:=CharSet.Unicode)> _
    Public Shared Function obsVerifySignatureFileW(ByVal lpszFilename As String, ByVal lpszSignature As String) As <MarshalAs(UnmanagedType.U1)> Boolean
    End Function
    <DllImport("obsidium.dll", EntryPoint:="obsGetLicenseSystemId", CallingConvention:=CallingConvention.StdCall, CharSet:=CharSet.Ansi)> _
    Public Shared Function getLicenseSystemId(ByVal lpBuffer As StringBuilder) As <MarshalAs(UnmanagedType.U1)> Boolean
    End Function
    <DllImport("obsidium.dll", EntryPoint:="obsReloadLicense", CallingConvention:=CallingConvention.StdCall)> _
    Public Shared Function reloadLicense() As <MarshalAs(UnmanagedType.U1)> Boolean
    End Function
    <DllImport("obsidium.dll", EntryPoint:="obsGetActiveLicensingSystem", CallingConvention:=CallingConvention.StdCall)> _
    Public Shared Function obsGetActiveLicensingSystem() As UInteger
    End Function

    ' getLicenseStatus return values
    Public Const LIC_STATUS_NOTFOUND As Integer = 0     ' no license key found
    Public Const LIC_STATUS_VALID As Integer = 1        ' valid license key present
    Public Const LIC_STATUS_EXPIRED As Integer = 2      ' license key has expired
    Public Const LIC_STATUS_BAD_SYSTEMID As Integer = 3 ' system ID does not match
    Public Const LIC_STATUS_INVALID As Integer = 4      ' invalid or corrupt key
    Public Const LIC_STATUS_BLACKLISTED As Integer = 5  ' license key is blacklisted
    Public Const LIC_STATUS_USB_MISSING As Integer = 6  ' required USB device is missing

    ' obsGetActiveLicensingSystem return values (lower 16 bits)
    Public Const LIC_SYSTEM_NONE As Integer = 0         ' no licensing system / external system
    Public Const LIC_SYSTEM_SHORT_KEYS As Integer = 1   ' short license keys
    Public Const LIC_SYSTEM_LONG_KEYS As Integer = 2    ' long license keys
    Public Const LIC_SYSTEM_NETWORK As Integer = 3      ' network licensing
    Public Const LIC_SYSTEM_SL_C2 As Integer = 4        ' Senselock Clave 2
    Public Const LIC_SYSTEM_SL_EL As Integer = 5        ' Senselock EL
    ' obsGetActiveLicensingSystem flags (upper 16 bits)
    Public Const LIC_SYSTEM_FLAG_USB As Integer = 1     ' USB licensing is enabled
    Public Const LIC_SYSTEM_FLAG_HW As Integer = 2      ' hardware locking is enabled


End Class
