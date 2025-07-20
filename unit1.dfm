object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 760
  ClientWidth = 1175
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Label1: TLabel
    Left = 263
    Top = 464
    Width = 85
    Height = 15
    Caption = '5% de Desconto'
  end
  object RadioGroup1: TRadioGroup
    Left = 40
    Top = 32
    Width = 257
    Height = 321
    Caption = 'Lugar'
    Items.Strings = (
      'Nova york'
      'Los Angeles'
      'Chicago'
      'Miami')
    TabOrder = 0
    OnClick = RadioGroup1Click
  end
  object RadioGroup2: TRadioGroup
    Left = 384
    Top = 32
    Width = 257
    Height = 313
    Caption = 'Feriado'
    Items.Strings = (
      'Natal'
      'ThanksGiving'
      'Ano Novo'
      'P'#224'scoa')
    TabOrder = 1
    OnClick = RadioGroup2Click
  end
  object RadioGroup3: TRadioGroup
    Left = 728
    Top = 40
    Width = 257
    Height = 305
    Caption = 'Classe'
    Items.Strings = (
      'Econ'#244'mica'
      'Executiva'
      'Primeira Classe')
    TabOrder = 2
    OnClick = RadioGroup3Click
  end
  object RadioGroup4: TRadioGroup
    Left = 233
    Top = 392
    Width = 273
    Height = 305
    Caption = 'Pagamento'
    Items.Strings = (
      'Pix'
      'Cr'#233'dito'
      'D'#233'bito')
    TabOrder = 3
    OnClick = RadioGroup4Click
  end
  object RadioGroup5: TRadioGroup
    Left = 600
    Top = 392
    Width = 369
    Height = 305
    Caption = 'Finalizar'
    TabOrder = 4
  end
  object StaticText1: TStaticText
    Left = 680
    Top = 552
    Width = 194
    Height = 19
    Caption = 'Obrigado Por Comprar Na METFLYS'
    TabOrder = 5
  end
  object StaticText2: TStaticText
    Left = 704
    Top = 585
    Width = 137
    Height = 19
    Caption = 'At'#233' sua pr'#243'xima compra!'
    TabOrder = 6
  end
  object StaticText4: TStaticText
    Left = 752
    Top = 416
    Width = 39
    Height = 19
    Caption = 'TOTAL'
    TabOrder = 7
  end
  object StaticText5: TStaticText
    Left = 392
    Top = 416
    Width = 39
    Height = 19
    Caption = 'TOTAL'
    TabOrder = 8
  end
  object Edit1: TEdit
    Left = 352
    Top = 441
    Width = 121
    Height = 23
    Alignment = taCenter
    ReadOnly = True
    TabOrder = 9
    Text = 'Edit1'
  end
  object Edit2: TEdit
    Left = 688
    Top = 441
    Width = 161
    Height = 23
    Alignment = taCenter
    TabOrder = 10
  end
  object Button1: TButton
    Left = 208
    Top = 312
    Width = 75
    Height = 25
    Caption = 'Avan'#231'ar'
    TabOrder = 11
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 552
    Top = 312
    Width = 75
    Height = 25
    Caption = 'Avan'#231'ar'
    TabOrder = 12
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 463
    Top = 312
    Width = 75
    Height = 25
    Caption = 'Voltar'
    TabOrder = 13
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 894
    Top = 312
    Width = 75
    Height = 25
    Caption = 'Avan'#231'ar'
    TabOrder = 14
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 799
    Top = 312
    Width = 75
    Height = 25
    Caption = 'Voltar'
    TabOrder = 15
    OnClick = Button5Click
  end
  object Button6: TButton
    Left = 352
    Top = 480
    Width = 121
    Height = 25
    Caption = 'Finalizar Compra'
    TabOrder = 16
    OnClick = Button6Click
  end
  object Button7: TButton
    Left = 416
    Top = 664
    Width = 75
    Height = 25
    Caption = 'Voltar'
    TabOrder = 17
    OnClick = Button7Click
  end
end
