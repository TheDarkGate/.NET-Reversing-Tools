unit Unit1;

interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, keygen;

type
  TfrmMain = class(TForm)
    btnKeyfile: TButton;
    GroupBox1: TGroupBox;
    edtInfo1: TEdit;
    edtInfo2: TEdit;
    edtInfo3: TEdit;
    GroupBox2: TGroupBox;
    edtProjectFile: TEdit;
    btnProjectFile: TButton;
    OpenDialog: TOpenDialog;
    procedure btnKeyfileClick(Sender: TObject);
    procedure btnProjectFileClick(Sender: TObject);
  private
  public
  end;

var
  frmMain: TfrmMain;

implementation

{$R *.dfm}

procedure TfrmMain.btnKeyfileClick(Sender: TObject);
var
    ki: TKEYGEN_INFO_LONG;
    buffer: array[0..1023] of byte;
    text: array[0..2047] of AnsiChar;
    kSize: Integer;
begin
    ki.dwSize := SizeOf(ki);
    ki.dwFlags := 0;
    if (edtInfo1.Text <> '') then
        ki.lpInfo1 := PAnsiChar(AnsiString(edtInfo1.Text))
    else
        ki.lpInfo1 := nil;
    if (edtInfo2.Text <> '') then
        ki.lpInfo2 := PAnsiChar(AnsiString(edtInfo2.Text))
    else
        ki.lpInfo2 := nil;
    if (edtInfo3.Text <> '') then
        ki.lpInfo3 := PAnsiChar(AnsiString(edtInfo3.Text))
    else
        ki.lpInfo3 := nil;
    ki.lpExtInfo := nil;
    ki.lpSytemId := nil;
    ki.lpExpDate := nil;
    ki.lpBuffer := @buffer;
    ki.lpProjectFile := PAnsiChar(AnsiString(edtProjectFile.Text));
    kSize := GenerateLicenseLong(ki);
    if kSize > 0 then
    begin
        ConvertLicenseLongToStr(@buffer, kSize, text);
        ShowMessage(Text);
    end
    else
        ShowMessage('Error generating license key.');
end;

procedure TfrmMain.btnProjectFileClick(Sender: TObject);
begin
    if OpenDialog.Execute() then
    begin
        edtProjectFile.Text := OpenDialog.FileName;
        btnKeyfile.Enabled := true;
    end;
end;

end.
