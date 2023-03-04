VERSION 5.00
Begin VB.Form Form1 
   BorderStyle     =   1  'Fixed Single
   Caption         =   "Visual Basic Sample App"
   ClientHeight    =   750
   ClientLeft      =   45
   ClientTop       =   330
   ClientWidth     =   3375
   LinkTopic       =   "Form1"
   MaxButton       =   0   'False
   MinButton       =   0   'False
   ScaleHeight     =   750
   ScaleWidth      =   3375
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton btnSysID 
      Caption         =   "Show system ID"
      Height          =   495
      Left            =   1680
      TabIndex        =   1
      Top             =   120
      Width           =   1575
   End
   Begin VB.CommandButton btnShowInfo 
      Caption         =   "Show license info"
      Height          =   495
      Left            =   120
      TabIndex        =   0
      Top             =   120
      Width           =   1455
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit

Private Type FILETIME
    dwLowDateTime As Long
    dwHighDateTime As Long
End Type

Private Declare Sub obsCallMark Lib "obsidium.dll" (ByVal dwMagic As Long)
Private Declare Sub obsDeleteLicenseData Lib "obsidium.dll" ()
Private Declare Sub obsDeleteTrialData Lib "obsidium.dll" ()
Private Declare Sub obsDisableLicense Lib "obsidium.dll" ()
Private Declare Function obsGetCustomValue Lib "obsidium.dll" () As Integer
Private Declare Function obsGetExpirationDate Lib "obsidium.dll" (ByRef lpExpDate As FILETIME) As Byte
Private Declare Function obsGetInitialTrialDays Lib "obsidium.dll" () As Long
Private Declare Function obsGetInitialTrialRuns Lib "obsidium.dll" () As Long
Private Declare Function obsGetLicenseExpiration Lib "obsidium.dll" (ByRef lpExpDate As FILETIME) As Byte
Private Declare Function obsGetLicenseHash Lib "obsidium.dll" (ByRef lpBuffer As Byte) As Byte
Private Declare Function obsGetLicenseStatus Lib "obsidium.dll" () As Long
Private Declare Function obsGetLicenseInfo Lib "obsidium.dll" (ByVal dwInfoNr As Long, ByRef lpInfo As Byte) As Byte
Private Declare Function obsGetSystemId Lib "obsidium.dll" (ByRef lpBuffer As Byte) As Byte
Private Declare Function obsGetTrialDays Lib "obsidium.dll" () As Long
Private Declare Function obsGetTrialRuns Lib "obsidium.dll" () As Long
Private Declare Function obsIsProtected Lib "obsidium.dll" () As Byte
Private Declare Function obsIsLicensed Lib "obsidium.dll" () As Byte
Private Declare Sub obsSetExternalKey Lib "obsidium.dll" (ByRef lpKey As Byte, ByVal dwSize As Long)
Private Declare Function obsSetLicense Lib "obsidium.dll" (ByRef lpInfo As Byte) As Byte
Private Declare Function obsSetLicenseShort Lib "obsidium.dll" (ByRef lpInfo As Byte, ByRef lpKey As Byte) As Byte
Private Declare Function obsStoreLicense Lib "obsidium.dll" (ByRef lpInfo As Byte) As Byte
Private Declare Function obsStoreLicenseShort Lib "obsidium.dll" (ByRef lpInfo As Byte, ByRef lpKey As Byte) As Byte

Private Const CALLMARK_LIC_START As Long = &HDEFACED
Private Const CALLMARK_LIC_END As Long = &HDEADF00D
Private Const LIC_STATUS_NOTFOUND As Long = 0
Private Const LIC_STATUS_VALID As Long = 1
Private Const LIC_STATUS_EXPIRED As Long = 2
Private Const LIC_STATUS_BAD_SYSTEMID As Long = 3
Private Const LIC_STATUS_INVALID As Long = 4
Private Const LIC_STATUS_BLACKLISTED As Long = 5

Private Sub btnShowInfo_Click()

  If obsIsProtected <> 0 Then
    MsgBox "protected"
  Else
    MsgBox "not protected"
  End If

  If obsIsLicensed <> 0 Then
    Call obsCallMark(CALLMARK_LIC_START)
    
    Dim licInfo(0 To 32) As Byte
    Dim strLicInfo As String
    
    Call obsGetLicenseInfo(0, licInfo(0))
    strRegInfo = StrConv(licInfo, vbUnicode)
    MsgBox strLicInfo

    Call obsCallMark(CALLMARK_LIC_END)
  Else
    MsgBox "Unlicensed"
  End If

End Sub

Private Sub btnSysID_Click()

  Dim sysid(0 To 32) As Byte

  If obsGetSystemId(sysid(0)) <> 0 Then

    Dim strSystemID As String

    strSystemID = StrConv(sysid, vbUnicode)
    MsgBox strSystemID
  Else
    MsgBox "Cannot retrieve system ID"
  End If

End Sub
