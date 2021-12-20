//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitTerminal.h"
#include "UnitInfinityCard.h"
#include "UnitParents.h"
#include "UnitPlastic.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormTerminal *FormTerminal;
//---------------------------------------------------------------------------
__fastcall TFormTerminal::TFormTerminal(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormTerminal::ButtonConnectClick(TObject *Sender)
{
	ClientSocket1->Address=EditIP->Text;
	ClientSocket1->Port=EditAddress->Text.Trim().ToInt();
	//ClientSocket1->Port=MaskEditAddress->Text.Trim().ToInt();
	ClientSocket1->Active=true;
	//LabelAddress->Caption = MaskEditAddress->Text.Trim().ToInt();

}
//---------------------------------------------------------------------------

void __fastcall TFormTerminal::BitBtn1Click(TObject *Sender)
{
  if( LabeledEditMoney->Text=="0"  )
  {
   LabeledEditMoney->Text="1";
  }
  else
  {
   LabeledEditMoney->Text=LabeledEditMoney->Text+"1";
  }

}
//---------------------------------------------------------------------------

void __fastcall TFormTerminal::BitBtn2Click(TObject *Sender)
{
  if( LabeledEditMoney->Text=="0"  )
  {
   LabeledEditMoney->Text="2";
  }
  else
  {
   LabeledEditMoney->Text=LabeledEditMoney->Text+"2";
  }
}
//---------------------------------------------------------------------------

void __fastcall TFormTerminal::BitBtn3Click(TObject *Sender)
{
  if( LabeledEditMoney->Text=="0"  )
  {
   LabeledEditMoney->Text="3";
  }
  else
  {
   LabeledEditMoney->Text=LabeledEditMoney->Text+"3";
  }
}
//---------------------------------------------------------------------------

void __fastcall TFormTerminal::BitBtn4Click(TObject *Sender)
{
  if( LabeledEditMoney->Text=="0"  )
  {
   LabeledEditMoney->Text="4";
  }
  else
  {
   LabeledEditMoney->Text=LabeledEditMoney->Text+"4";
  }
}
//---------------------------------------------------------------------------

void __fastcall TFormTerminal::BitBtn5Click(TObject *Sender)
{
  if( LabeledEditMoney->Text=="0"  )
  {
   LabeledEditMoney->Text="5";
  }
  else
  {
   LabeledEditMoney->Text=LabeledEditMoney->Text+"5";
  }
}
//---------------------------------------------------------------------------

void __fastcall TFormTerminal::BitBtn6Click(TObject *Sender)
{
  if( LabeledEditMoney->Text=="0"  )
  {
   LabeledEditMoney->Text="6";
  }
  else
  {
   LabeledEditMoney->Text=LabeledEditMoney->Text+"6";
  }
}
//---------------------------------------------------------------------------

void __fastcall TFormTerminal::BitBtn7Click(TObject *Sender)
{
  if( LabeledEditMoney->Text=="0"  )
  {
   LabeledEditMoney->Text="7";
  }
  else
  {
   LabeledEditMoney->Text=LabeledEditMoney->Text+"7";
  }
}
//---------------------------------------------------------------------------

void __fastcall TFormTerminal::BitBtn8Click(TObject *Sender)
{
  if( LabeledEditMoney->Text=="0"  )
  {
   LabeledEditMoney->Text="8";
  }
  else
  {
   LabeledEditMoney->Text=LabeledEditMoney->Text+"8";
  }
}
//---------------------------------------------------------------------------

void __fastcall TFormTerminal::BitBtn9Click(TObject *Sender)
{
  if( LabeledEditMoney->Text=="0"  )
  {
   LabeledEditMoney->Text="9";
  }
  else
  {
   LabeledEditMoney->Text=LabeledEditMoney->Text+"9";
  }
}
//---------------------------------------------------------------------------

void __fastcall TFormTerminal::BitBtn11Click(TObject *Sender)
{
  if( LabeledEditMoney->Text=="0"  )
  {
   LabeledEditMoney->Text="0";
  }
  else
  {
   LabeledEditMoney->Text=LabeledEditMoney->Text+"0";
  }
}
//---------------------------------------------------------------------------

void __fastcall TFormTerminal::BitBtn10Click(TObject *Sender)
{
	LabeledEditMoney->Text="0";
}
//---------------------------------------------------------------------------

void __fastcall TFormTerminal::BitBtn12Click(TObject *Sender)
{
int uzunlik=LabeledEditMoney->Text.Length();
  if(uzunlik==1)
  {
   LabeledEditMoney->Text="0";
  }
  else
  {
   LabeledEditMoney->Text=LabeledEditMoney->Text.Delete(uzunlik,1);
  }

}
//---------------------------------------------------------------------------

void __fastcall TFormTerminal::Button1Click(TObject *Sender)
{
	int a=LabeledEditAmount->Text.ToInt();
	int b=LabeledEditMoney->Text.ToInt();

	float c=a-b;
    FormPlastic->LabelAmount->Caption = "0";
	ClientSocket1->Socket->SendText(c);
    LabeledEditAmount->Text = c /*FormPlastic->LabelAmount->Caption*/;
   // ShowMessage(c);
    BitBtn10->Click();
}
//---------------------------------------------------------------------------

void __fastcall TFormTerminal::ClientSocket1Connect(TObject *Sender, TCustomWinSocket *Socket)

{
	ShowMessage("User found !") ;
	LabeledEditAmount->Text = FormPlastic->LabelAmount->Caption;
	CardPanel1->ActiveCardIndex = 1;
}
//---------------------------------------------------------------------------

void __fastcall TFormTerminal::ClientSocket1Disconnect(TObject *Sender, TCustomWinSocket *Socket)

{
	ShowMessage("User lost !") ;
	CardPanel1->ActiveCardIndex = 0;
}
//---------------------------------------------------------------------------

void __fastcall TFormTerminal::ClientSocket1Error(TObject *Sender, TCustomWinSocket *Socket,
          TErrorEvent ErrorEvent, int &ErrorCode)
{
ShowMessage("User not found ?! Please try again.")  ;
}
//---------------------------------------------------------------------------

void __fastcall TFormTerminal::FormShow(TObject *Sender)
{
    CardPanel1->ActiveCardIndex = 0;
}
//---------------------------------------------------------------------------

