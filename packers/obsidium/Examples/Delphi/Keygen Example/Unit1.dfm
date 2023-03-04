object frmMain: TfrmMain
  Left = 475
  Top = 305
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'frmMain'
  ClientHeight = 199
  ClientWidth = 194
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  PixelsPerInch = 96
  TextHeight = 13
  object GroupBox1: TGroupBox
    Left = 8
    Top = 8
    Width = 177
    Height = 97
    Caption = 'License data'
    TabOrder = 1
    object edtInfo1: TEdit
      Left = 8
      Top = 16
      Width = 161
      Height = 21
      TabOrder = 0
    end
    object edtInfo2: TEdit
      Left = 8
      Top = 40
      Width = 161
      Height = 21
      TabOrder = 1
    end
    object edtInfo3: TEdit
      Left = 8
      Top = 64
      Width = 161
      Height = 21
      TabOrder = 2
    end
  end
  object btnKeyfile: TButton
    Left = 56
    Top = 168
    Width = 75
    Height = 25
    Caption = 'Create keyfile'
    Enabled = False
    TabOrder = 0
    OnClick = btnKeyfileClick
  end
  object GroupBox2: TGroupBox
    Left = 8
    Top = 112
    Width = 177
    Height = 49
    Caption = 'Project file'
    TabOrder = 2
    object edtProjectFile: TEdit
      Left = 8
      Top = 16
      Width = 137
      Height = 21
      ReadOnly = True
      TabOrder = 0
    end
    object btnProjectFile: TButton
      Left = 144
      Top = 16
      Width = 25
      Height = 21
      Caption = '...'
      TabOrder = 1
      OnClick = btnProjectFileClick
    end
  end
  object OpenDialog: TOpenDialog
    Filter = 'Obsidium Project Files|*.opf'
    Options = [ofHideReadOnly, ofPathMustExist, ofFileMustExist, ofEnableSizing]
    Left = 8
    Top = 168
  end
end
