object FormTerminal: TFormTerminal
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Terminal'
  ClientHeight = 525
  ClientWidth = 362
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -24
  Font.Name = 'Times New Roman'
  Font.Style = []
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 27
  object CardPanel1: TCardPanel
    Left = 0
    Top = 0
    Width = 362
    Height = 525
    Align = alClient
    ActiveCard = Card2
    Caption = 'CardPanel1'
    TabOrder = 0
    object Card1: TCard
      Left = 1
      Top = 1
      Width = 360
      Height = 523
      Caption = 'Card1'
      CardIndex = 0
      TabOrder = 0
      object Label1: TLabel
        Left = 128
        Top = 72
        Width = 104
        Height = 27
        Caption = 'Welcome !'
      end
      object Label2: TLabel
        Left = 72
        Top = 144
        Width = 208
        Height = 27
        Caption = 'Write Plastic Number'
      end
      object Label3: TLabel
        Left = 59
        Top = 288
        Width = 233
        Height = 27
        Caption = 'Write Plastic Ip Address'
      end
      object EditAddress: TEdit
        Left = 27
        Top = 177
        Width = 300
        Height = 35
        TabOrder = 0
        TextHint = 'Address'
      end
      object MaskEditAddress: TMaskEdit
        Left = 27
        Top = 231
        Width = 302
        Height = 35
        EditMask = '86\0\0 0000 0000 0000;1;_'
        MaxLength = 19
        TabOrder = 1
        Text = '8600               '
      end
      object EditIP: TEdit
        Left = 27
        Top = 336
        Width = 302
        Height = 35
        TabOrder = 2
        TextHint = 'Ip Address'
      end
      object ButtonConnect: TButton
        Left = 112
        Top = 412
        Width = 137
        Height = 49
        Caption = 'Connect'
        ImageIndex = 3
        ImageName = 'icons8_usb_connector_50px'
        TabOrder = 3
        OnClick = ButtonConnectClick
      end
    end
    object Card2: TCard
      Left = 1
      Top = 1
      Width = 360
      Height = 523
      Caption = 'Card2'
      CardIndex = 1
      TabOrder = 1
      object Panel1: TPanel
        Left = 0
        Top = 0
        Width = 360
        Height = 145
        Align = alTop
        TabOrder = 0
        object LabeledEditAmount: TLabeledEdit
          Left = 32
          Top = 30
          Width = 297
          Height = 35
          Alignment = taCenter
          EditLabel.Width = 170
          EditLabel.Height = 27
          EditLabel.Caption = 'Amount in plastic'
          NumbersOnly = True
          ReadOnly = True
          TabOrder = 0
          Text = '0'
        end
        object LabeledEditMoney: TLabeledEdit
          Left = 32
          Top = 102
          Width = 297
          Height = 35
          Alignment = taCenter
          EditLabel.Width = 188
          EditLabel.Height = 27
          EditLabel.Caption = 'Amount for receive'
          NumbersOnly = True
          TabOrder = 1
          Text = '0'
        end
      end
      object Panel2: TPanel
        Left = 0
        Top = 145
        Width = 360
        Height = 378
        Align = alClient
        TabOrder = 1
        object Button1: TButton
          Left = 32
          Top = 283
          Width = 297
          Height = 50
          Caption = 'Withdraw Money'
          TabOrder = 0
          OnClick = Button1Click
        end
        object BitBtn1: TBitBtn
          Left = 32
          Top = 24
          Width = 89
          Height = 57
          Caption = '1'
          TabOrder = 1
          OnClick = BitBtn1Click
        end
        object BitBtn2: TBitBtn
          Left = 136
          Top = 24
          Width = 89
          Height = 57
          Caption = '2'
          TabOrder = 2
          OnClick = BitBtn2Click
        end
        object BitBtn3: TBitBtn
          Left = 240
          Top = 24
          Width = 89
          Height = 57
          Caption = '3'
          TabOrder = 3
          OnClick = BitBtn3Click
        end
        object BitBtn10: TBitBtn
          Left = 32
          Top = 220
          Width = 89
          Height = 57
          Caption = 'C'
          TabOrder = 4
          OnClick = BitBtn10Click
        end
        object BitBtn11: TBitBtn
          Left = 136
          Top = 220
          Width = 89
          Height = 57
          Caption = '0'
          TabOrder = 5
          OnClick = BitBtn11Click
        end
        object BitBtn12: TBitBtn
          Left = 240
          Top = 220
          Width = 89
          Height = 57
          Caption = '<'
          TabOrder = 6
          OnClick = BitBtn12Click
        end
        object BitBtn4: TBitBtn
          Left = 32
          Top = 90
          Width = 89
          Height = 57
          Caption = '4'
          TabOrder = 7
          OnClick = BitBtn4Click
        end
        object BitBtn5: TBitBtn
          Left = 136
          Top = 89
          Width = 89
          Height = 57
          Caption = '5'
          TabOrder = 8
          OnClick = BitBtn5Click
        end
        object BitBtn6: TBitBtn
          Left = 240
          Top = 89
          Width = 89
          Height = 57
          Caption = '6'
          TabOrder = 9
          OnClick = BitBtn6Click
        end
        object BitBtn7: TBitBtn
          Left = 32
          Top = 155
          Width = 89
          Height = 57
          Caption = '7'
          TabOrder = 10
          OnClick = BitBtn7Click
        end
        object BitBtn8: TBitBtn
          Left = 136
          Top = 155
          Width = 89
          Height = 57
          Caption = '8'
          TabOrder = 11
          OnClick = BitBtn8Click
        end
        object BitBtn9: TBitBtn
          Left = 240
          Top = 155
          Width = 89
          Height = 57
          Caption = '9'
          TabOrder = 12
          OnClick = BitBtn9Click
        end
      end
    end
  end
  object ClientSocket1: TClientSocket
    Active = False
    ClientType = ctNonBlocking
    Port = 0
    OnConnect = ClientSocket1Connect
    OnDisconnect = ClientSocket1Disconnect
    OnError = ClientSocket1Error
    Left = 304
    Top = 16
  end
end
