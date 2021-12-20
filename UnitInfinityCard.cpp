//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitInfinityCard.h"
#include "UnitParents.h"
#include "UnitPlastic.h"
#include "UnitTerminal.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormInfinityCard *FormInfinityCard;
//---------------------------------------------------------------------------
__fastcall TFormInfinityCard::TFormInfinityCard(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormInfinityCard::ButtonPlasticClick(TObject *Sender)
{
    FormPlastic->Show();
}
//---------------------------------------------------------------------------

void __fastcall TFormInfinityCard::ButtonParentsClick(TObject *Sender)
{
    FormParents->Show();
}
//---------------------------------------------------------------------------

void __fastcall TFormInfinityCard::ButtonTerminalClick(TObject *Sender)
{
    FormTerminal->Show();
}
//---------------------------------------------------------------------------

