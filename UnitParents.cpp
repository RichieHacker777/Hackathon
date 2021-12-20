//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitParents.h"
#include "UnitInfinityCard.h"
#include "UnitPlastic.h"
#include "UnitTerminal.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormParents *FormParents;
//---------------------------------------------------------------------------
__fastcall TFormParents::TFormParents(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TFormParents::FormShow(TObject *Sender)
{
    CardPanel1->ActiveCardIndex = 0;
}
//---------------------------------------------------------------------------

void __fastcall TFormParents::ButtonConnectClick(TObject *Sender)
{
	ClientSocket1->Address=EditIP->Text;
	ClientSocket1->Port=EditAddress->Text.Trim().ToInt();
	//ClientSocket1->Port=MaskEditAddress->Text.Trim().ToInt();
	ClientSocket1->Active=true;
	LabelAddress->Caption = FormPlastic->LabelPort->Caption.Trim();
	LabelUser->Caption = FormPlastic->LabelUser->Caption;
	LabelWhere->Caption = FormPlastic->LabelAddress->Caption;
	//LabelAddress->Caption = MaskEditAddress->Text.Trim().ToInt();
}
//---------------------------------------------------------------------------

void __fastcall TFormParents::ClientSocket1Connect(TObject *Sender, TCustomWinSocket *Socket)

{
	ShowMessage("User found !") ;
    CardPanel1->ActiveCardIndex = 1;
}
//---------------------------------------------------------------------------

void __fastcall TFormParents::ClientSocket1Error(TObject *Sender, TCustomWinSocket *Socket,
          TErrorEvent ErrorEvent, int &ErrorCode)
{
    ShowMessage("User not found ?! Please try again.")  ;
}
//---------------------------------------------------------------------------

void __fastcall TFormParents::ButtonSendClick(TObject *Sender)
{
		ClientSocket1->Socket->SendText(EditAmount->Text.ToInt());
	 //	Memo1->Lines->Add(LabelUser->Caption+" -> "+EditMessage->Text);
		EditAmount->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TFormParents::BitBtn1Click(TObject *Sender)
{
    CardPanel1->ActiveCardIndex = 0;
}
//---------------------------------------------------------------------------

void __fastcall TFormParents::Button2Click(TObject *Sender)
{
    CardPanel1->ActiveCardIndex = 2;
}
//---------------------------------------------------------------------------

void __fastcall TFormParents::Button4Click(TObject *Sender)
{
	ListBox1->Items->Delete(ListBox1->ItemIndex);
    ShowMessage("Message deleted.");
}
//---------------------------------------------------------------------------

void __fastcall TFormParents::Button5Click(TObject *Sender)
{
	switch (MessageDlg("Are you sure delete all messages ?",mtInformation,mbYesNo,1)) {
		case mrYes: ListBox1->Items->Clear();  break;
		case mrNo: break;
	}
}
//---------------------------------------------------------------------------

void __fastcall TFormParents::ClientSocket1Disconnect(TObject *Sender, TCustomWinSocket *Socket)

{
	ShowMessage("User lost !") ;
	CardPanel1->ActiveCardIndex = 0;
}
//---------------------------------------------------------------------------

void __fastcall TFormParents::ClientSocket1Read(TObject *Sender, TCustomWinSocket *Socket)

{
	ListBox1->Items->Add(Socket->ReceiveText());
}
//---------------------------------------------------------------------------


void __fastcall TFormParents::Button3Click(TObject *Sender)
{
    CardPanel1->ActiveCardIndex = 1;
}
//---------------------------------------------------------------------------

