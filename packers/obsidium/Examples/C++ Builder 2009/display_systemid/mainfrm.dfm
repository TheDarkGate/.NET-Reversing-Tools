object frmMain: TfrmMain
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'System ID'
  ClientHeight = 114
  ClientWidth = 234
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  KeyPreview = True
  Padding.Left = 4
  Padding.Top = 4
  Padding.Right = 4
  Padding.Bottom = 4
  OldCreateOrder = False
  Position = poDesktopCenter
  OnKeyDown = FormKeyDown
  PixelsPerInch = 96
  TextHeight = 13
  object GroupBox1: TGroupBox
    Left = 4
    Top = 4
    Width = 226
    Height = 69
    Margins.Bottom = 4
    Align = alTop
    TabOrder = 0
    object edtSysId: TEdit
      Left = 8
      Top = 8
      Width = 209
      Height = 21
      ReadOnly = True
      TabOrder = 0
    end
    object btnCopy: TButton
      Left = 8
      Top = 35
      Width = 209
      Height = 25
      Caption = 'Copy to clipboard'
      TabOrder = 1
      OnClick = btnCopyClick
    end
  end
  object btnExit: TButton
    Left = 80
    Top = 80
    Width = 75
    Height = 25
    Caption = 'Exit'
    TabOrder = 1
    OnClick = btnExitClick
  end
end
