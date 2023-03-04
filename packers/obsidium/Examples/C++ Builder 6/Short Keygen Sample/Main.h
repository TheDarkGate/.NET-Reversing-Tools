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
//---------------------------------------------------------------------------
class TfrmMain : public TForm
{
__published:
        TGroupBox *gbInfo;
        TEdit *edtInfo;
        TGroupBox *gbProject;
        TEdit *edtProject;
        TSpeedButton *btnProject;
        TOpenDialog *OpenDialog;
        TSpeedButton *btnGenerate;
        TSpeedButton *btnVerify;
        TGroupBox *GroupBox1;
        TEdit *edtKey;
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
