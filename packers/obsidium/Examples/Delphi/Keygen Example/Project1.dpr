program Project1;



uses
  Forms,
  Unit1 in 'Unit1.pas' {frmMain},
  keygen in 'keygen.pas';

{$R *.res}

begin
  Application.Initialize;
  Application.Title := 'Obsidium Keygen Example';
  Application.CreateForm(TfrmMain, frmMain);
  Application.Run;
end.
