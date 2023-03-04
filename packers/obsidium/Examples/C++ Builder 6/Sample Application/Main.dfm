object frmMain: TfrmMain
  Left = 461
  Top = 385
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'Sample Application'
  ClientHeight = 180
  ClientWidth = 339
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object lblInfo: TLabel
    Left = 8
    Top = 8
    Width = 321
    Height = 33
    Alignment = taCenter
    AutoSize = False
    Caption = 'lblInfo'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    WordWrap = True
  end
  object gbRegistration: TGroupBox
    Left = 8
    Top = 48
    Width = 321
    Height = 129
    Caption = 'Registration'
    TabOrder = 0
    object Label1: TLabel
      Left = 8
      Top = 16
      Width = 91
      Height = 13
      Caption = 'License information'
    end
    object Label2: TLabel
      Left = 8
      Top = 56
      Width = 60
      Height = 13
      Caption = 'License key:'
    end
    object edtLicInfo: TEdit
      Left = 8
      Top = 32
      Width = 305
      Height = 21
      MaxLength = 127
      TabOrder = 0
    end
    object edtLicKey: TEdit
      Left = 8
      Top = 72
      Width = 305
      Height = 21
      CharCase = ecUpperCase
      MaxLength = 80
      TabOrder = 1
    end
    object btnOK: TButton
      Left = 123
      Top = 96
      Width = 75
      Height = 25
      Caption = 'OK'
      TabOrder = 2
      OnClick = btnOKClick
    end
  end
end
