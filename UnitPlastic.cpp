//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitPlastic.h"
#include "UnitInfinityCard.h"
#include "UnitParents.h"
#include "UnitTerminal.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormPlastic *FormPlastic;
//---------------------------------------------------------------------------
__fastcall TFormPlastic::TFormPlastic(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormPlastic::Button1Click(TObject *Sender)
{
    CardPanel1->ActiveCardIndex = 1;
}
//---------------------------------------------------------------------------

void __fastcall TFormPlastic::ServerSocket1ClientConnect(TObject *Sender, TCustomWinSocket *Socket)

{
    ShowMessage("Parents connected.");
}
//---------------------------------------------------------------------------

void __fastcall TFormPlastic::ServerSocket1ClientDisconnect(TObject *Sender, TCustomWinSocket *Socket)

{
ShowMessage("Parents disconnected.");
}
//---------------------------------------------------------------------------

void __fastcall TFormPlastic::ServerSocket1ClientRead(TObject *Sender, TCustomWinSocket *Socket)

{
	LabelAmount->Caption = LabelAmount->Caption.ToInt() + Socket->ReceiveText();
    Socket->SendText("The transfer is complete.");
}
//---------------------------------------------------------------------------

void __fastcall TFormPlastic::FormShow(TObject *Sender)
{
//ServerSocket1->Port=LabelPort->Caption.Trim().ToInt();
//	ServerSocket1->Active=true;
}
//---------------------------------------------------------------------------

