object frmMain: TfrmMain
  Left = 428
  Top = 467
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'Obsidium Example'
  ClientHeight = 160
  ClientWidth = 377
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object lblInfo: TLabel
    Left = 8
    Top = 8
    Width = 361
    Height = 13
    Alignment = taCenter
    AutoSize = False
  end
  object gbRegInfo: TGroupBox
    Left = 8
    Top = 24
    Width = 361
    Height = 129
    Caption = 'Registration information'
    TabOrder = 0
    object Label1: TLabel
      Left = 8
      Top = 16
      Width = 94
      Height = 13
      Caption = 'License information:'
    end
    object Label2: TLabel
      Left = 8
      Top = 56
      Width = 60
      Height = 13
      Caption = 'License key:'
    end
    object btnSetKey: TButton
      Left = 143
      Top = 96
      Width = 75
      Height = 25
      Caption = 'OK'
      TabOrder = 0
      OnClick = btnSetKeyClick
    end
    object edtLicInfo: TEdit
      Left = 8
      Top = 32
      Width = 345
      Height = 21
      MaxLength = 128
      TabOrder = 1
    end
    object edtLicKey: TEdit
      Left = 8
      Top = 72
      Width = 345
      Height = 21
      CharCase = ecUpperCase
      MaxLength = 80
      TabOrder = 2
    end
  end
end
