object FormInfinityCard: TFormInfinityCard
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = '                                  Infinity Card'
  ClientHeight = 311
  ClientWidth = 324
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -24
  Font.Name = 'Times New Roman'
  Font.Style = []
  Position = poDesktopCenter
  PixelsPerInch = 96
  TextHeight = 27
  object ButtonPlastic: TButton
    Left = 24
    Top = 24
    Width = 273
    Height = 65
    Caption = 'Plastic'
    TabOrder = 0
    OnClick = ButtonPlasticClick
  end
  object ButtonParents: TButton
    Left = 24
    Top = 120
    Width = 273
    Height = 65
    Caption = 'Parents'
    TabOrder = 1
    OnClick = ButtonParentsClick
  end
  object ButtonTerminal: TButton
    Left = 24
    Top = 216
    Width = 273
    Height = 65
    Caption = 'Terminal'
    TabOrder = 2
    OnClick = ButtonTerminalClick
  end
end
