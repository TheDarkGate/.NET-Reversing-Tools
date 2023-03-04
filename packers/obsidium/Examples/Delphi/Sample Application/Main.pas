unit Main;

interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, Obsidium;

type
  TfrmMain = class(TForm)
    gbRegInfo: TGroupBox;
    lblInfo: TLabel;
    btnSetKey: TButton;
    Label1: TLabel;
    edtLicInfo: TEdit;
    Label2: TLabel;
    edtLicKey: TEdit;
    procedure FormCreate(Sender: TObject);
    procedure btnSetKeyClick(Sender: TObject);
  private
  public
  end;

var
  frmMain: TfrmMain;

implementation

{$R *.dfm}

procedure TfrmMain.FormCreate(Sender: TObject);
var
    regInfo: array[0..127] of AnsiChar;
begin
    if obsIsLicensed() then begin
        // The following code can only be executed if a valid advanced license key is present
        // Otherwise, trying to execute this code will result in an error
        {$I OBSIDIUM_LIC_START.pas}
        gbRegInfo.Enabled := false;
        obsGetLicenseInfo(0, @regInfo);
        lblInfo.Caption := 'This application is registered to ' + regInfo;
        {$I OBSIDIUM_LIC_END.pas}
    end
    else begin
        {$I OBSIDIUM_ENC_START.pas}
        lblInfo.Caption := 'Unregistered, please enter your registration information below.';
        ShowMessage('This application is currently unregistered!');
        {$I OBSIDIUM_ENC_END.pas}
    end;
end;

{$IFNDEF UNICODE}

procedure TfrmMain.btnSetKeyClick(Sender: TObject);
begin
    {$I OBSIDIUM_VM_START.pas}
    if (edtLicInfo.GetTextLen > 0) and (edtLicKey.GetTextLen > 0) then begin
        if obsSetLicenseShort(PChar(edtLicInfo.Text), PChar(edtLicKey.Text), nil) then
            ShowMessage(obsSecureString('Please restart the application'))
        else
            ShowMessage(obsSecureString('Invalid registration information!'));
    end;
    {$I OBSIDIUM_VM_END.pas}
end;

{$ELSE}

procedure TfrmMain.btnSetKeyClick(Sender: TObject);
begin
    {$I OBSIDIUM_VM_START.pas}
    if (edtLicInfo.GetTextLen > 0) and (edtLicKey.GetTextLen > 0) then begin
        if obsSetLicenseShortW(PWideChar(edtLicInfo.Text), PWideChar(edtLicKey.Text), nil) then
            ShowMessage(obsSecureStringW('Please restart the application'))
        else
            ShowMessage(obsSecureStringW('Invalid registration information!'));
    end;
    {$I OBSIDIUM_VM_END.pas}
end;

{$ENDIF}

end.
