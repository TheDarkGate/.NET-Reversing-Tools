object frmMain: TfrmMain
  Left = 464
  Top = 344
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'License Generator'
  ClientHeight = 208
  ClientWidth = 289
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object btnGenerate: TSpeedButton
    Left = 8
    Top = 120
    Width = 89
    Height = 24
    Caption = 'Generate license'
    Flat = True
    OnClick = btnGenerateClick
  end
  object btnVerify: TSpeedButton
    Left = 192
    Top = 120
    Width = 89
    Height = 24
    Caption = 'Verify license'
    Flat = True
    OnClick = btnVerifyClick
  end
  object gbInfo: TGroupBox
    Left = 8
    Top = 64
    Width = 273
    Height = 49
    Caption = 'License information'
    TabOrder = 0
    object edtInfo: TEdit
      Left = 8
      Top = 16
      Width = 257
      Height = 21
      MaxLength = 128
      TabOrder = 0
    end
  end
  object gbProject: TGroupBox
    Left = 8
    Top = 8
    Width = 273
    Height = 49
    Caption = 'Project file'
    TabOrder = 1
    object btnProject: TSpeedButton
      Left = 240
      Top = 16
      Width = 23
      Height = 22
      Flat = True
      Glyph.Data = {
        76010000424D7601000000000000760000002800000020000000100000000100
        04000000000000010000130B0000130B00001000000000000000000000000000
        800000800000008080008000000080008000808000007F7F7F00BFBFBF000000
        FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF0033333333B333
        333B33FF33337F3333F73BB3777BB7777BB3377FFFF77FFFF77333B000000000
        0B3333777777777777333330FFFFFFFF07333337F33333337F333330FFFFFFFF
        07333337F3FF3FFF7F333330F00F000F07333337F77377737F333330FFFFFFFF
        07333FF7F3FFFF3F7FFFBBB0F0000F0F0BB37777F7777373777F3BB0FFFFFFFF
        0BBB3777F3FF3FFF77773330F00F000003333337F773777773333330FFFF0FF0
        33333337F3FF7F37F3333330F08F0F0B33333337F7737F77FF333330FFFF003B
        B3333337FFFF77377FF333B000000333BB33337777777F3377FF3BB3333BB333
        3BB33773333773333773B333333B3333333B7333333733333337}
      NumGlyphs = 2
      OnClick = btnProjectClick
    end
    object edtProject: TEdit
      Left = 8
      Top = 16
      Width = 225
      Height = 21
      ReadOnly = True
      TabOrder = 0
    end
  end
  object GroupBox1: TGroupBox
    Left = 8
    Top = 152
    Width = 273
    Height = 49
    Caption = 'License key'
    TabOrder = 2
    object edtKey: TEdit
      Left = 8
      Top = 16
      Width = 257
      Height = 21
      CharCase = ecUpperCase
      MaxLength = 80
      TabOrder = 0
    end
  end
  object OpenDialog: TOpenDialog
    Filter = 'Project files|*.opf'
    Options = [ofHideReadOnly, ofPathMustExist, ofFileMustExist, ofEnableSizing]
    Left = 144
    Top = 120
  end
end
