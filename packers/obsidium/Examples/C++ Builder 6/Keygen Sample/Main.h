//---------------------------------------------------------------------------

#ifndef MainH
#define MainH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <Dialogs.hpp>
#include "..\..\..\sdk\c\keygen\keygen.h"
//---------------------------------------------------------------------------
class TfrmMain : public TForm
{
__published:
        TGroupBox *gbInfo;
        TEdit *edtInfo1;
        TEdit *edtInfo2;
        TEdit *edtInfo3;
        TGroupBox *gbProject;
        TEdit *edtProject;
        TSpeedButton *btnProject;
        TSaveDialog *SaveDialog;
        TOpenDialog *OpenDialog;
        TSpeedButton *btnGenerate;
        TSpeedButton *btnVerify;
        void __fastcall btnProjectClick(TObject *Sender);
        void __fastcall btnGenerateClick(TObject *Sender);
        void __fastcall btnVerifyClick(TObject *Sender);
private:
public:
        __fastcall TfrmMain(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmMain *frmMain;
//---------------------------------------------------------------------------
#endif
