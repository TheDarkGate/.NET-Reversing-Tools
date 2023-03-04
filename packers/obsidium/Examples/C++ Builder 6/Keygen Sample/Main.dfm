object frmMain: TfrmMain
  Left = 385
  Top = 221
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'License Generator'
  ClientHeight = 195
  ClientWidth = 202
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
    Top = 168
    Width = 89
    Height = 22
    Caption = 'Generate license'
    Flat = True
    OnClick = btnGenerateClick
  end
  object btnVerify: TSpeedButton
    Left = 104
    Top = 168
    Width = 89
    Height = 22
    Caption = 'Verify license'
    Flat = True
    OnClick = btnVerifyClick
  end
  object gbInfo: TGroupBox
    Left = 8
    Top = 8
    Width = 185
    Height = 97
    Caption = 'License information'
    TabOrder = 0
    object edtInfo1: TEdit
      Left = 8
      Top = 16
      Width = 169
      Height = 21
      MaxLength = 32
      TabOrder = 0
    end
    object edtInfo2: TEdit
      Left = 8
      Top = 40
      Width = 169
      Height = 21
      MaxLength = 32
      TabOrder = 1
    end
    object edtInfo3: TEdit
      Left = 8
      Top = 64
      Width = 169
      Height = 21
      MaxLength = 32
      TabOrder = 2
    end
  end
  object gbProject: TGroupBox
    Left = 8
    Top = 112
    Width = 185
    Height = 49
    Caption = 'Project file'
    TabOrder = 1
    object btnProject: TSpeedButton
      Left = 152
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
      Width = 137
      Height = 21
      ReadOnly = True
      TabOrder = 0
    end
  end
  object SaveDialog: TSaveDialog
    DefaultExt = 'key'
    Filter = 'License files|*.key'
    Options = [ofOverwritePrompt, ofHideReadOnly, ofPathMustExist, ofEnableSizing]
    Top = 88
  end
  object OpenDialog: TOpenDialog
    Filter = 'Project files|*.opf'
    Options = [ofHideReadOnly, ofPathMustExist, ofFileMustExist, ofEnableSizing]
    Left = 24
    Top = 88
  end
end
