//---------------------------------------------------------------------------
#include <vcl.h>
#include <Clipbrd.hpp>
#pragma hdrstop
#include "obsidium.h"
#include "mainfrm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmMain *frmMain;
//---------------------------------------------------------------------------
__fastcall TfrmMain::TfrmMain(TComponent* Owner)
	: TForm(Owner)
{
	char buffer[64] = {0};
	if (obsGetSystemId(buffer))
		edtSysId->Text = buffer;
	else
		edtSysId->Text = "Cannot retrieve system ID";
}
//---------------------------------------------------------------------------
void __fastcall TfrmMain::btnExitClick(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::btnCopyClick(TObject *Sender)
{
	TClipboard *myClipboard = Clipboard();
	myClipboard->Open();
	myClipboard->SetTextBuf(edtSysId->Text.c_str());
	myClipboard->Close();
}
//---------------------------------------------------------------------------
void __fastcall TfrmMain::FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)
{
	if (Key == 'C' && Shift.Contains(ssCtrl))
		btnCopyClick(Sender);
	else if (Key == VK_ESCAPE)
		btnExitClick(Sender);
}
//---------------------------------------------------------------------------
