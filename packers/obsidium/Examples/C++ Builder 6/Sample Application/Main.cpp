/*
How to compile:

- Use the IMPLIB tool (included with C++ Builder) to create the library files:
  implib dummy.lib dummy.dll
  and copy the resulting .lib files to the application directory
- The library and header files have already been added to the example projects
*/

//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "Main.h"
#include "..\..\..\sdk\c\api\obsidium.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmMain *frmMain;
//---------------------------------------------------------------------------
__fastcall TfrmMain::TfrmMain(TComponent* Owner)
    : TForm(Owner)
{
    if (obsIsLicensed())
    {
        // the following code can only be executed if a valid advanced
        // key is present
        OBSIDIUM_LIC_START;
        char licInfo[128];
        obsGetLicenseInfo(0, licInfo);
        lblInfo->Caption = "Registered to " + AnsiString(licInfo);
        gbRegistration->Enabled = false;
        OBSIDIUM_LIC_END;
    }
    else
    {
        // the following code will be decrypted when executed
        OBSIDIUM_ENC_START;
        lblInfo->Caption = obsSecureString("Unlicensed, please enter your licensing " \
            "information below");
        OBSIDIUM_ENC_END;
    }
}
//---------------------------------------------------------------------------
void __fastcall TfrmMain::btnOKClick(TObject *Sender)
{
    if (edtLicInfo->Text.Length() == 0 || edtLicKey->Text.Length() == 0)
        return;
   	OBSIDIUM_VM_START;
    if (obsSetLicenseShort(edtLicInfo->Text.c_str(), edtLicKey->Text.c_str(), NULL))
        ShowMessage("Please restart the application");
    else
        ShowMessage("Invalid registration information!");
   	OBSIDIUM_VM_END;
}
//---------------------------------------------------------------------------
