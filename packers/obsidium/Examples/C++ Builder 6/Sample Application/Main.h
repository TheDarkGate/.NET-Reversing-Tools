//---------------------------------------------------------------------------

#ifndef MainH
#define MainH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TfrmMain : public TForm
{
__published:
    TGroupBox *gbRegistration;
    TEdit *edtLicInfo;
    TLabel *Label1;
    TLabel *Label2;
    TEdit *edtLicKey;
    TButton *btnOK;
    TLabel *lblInfo;
    void __fastcall btnOKClick(TObject *Sender);
private:
public:
    __fastcall TfrmMain(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmMain *frmMain;
//---------------------------------------------------------------------------
#endif
