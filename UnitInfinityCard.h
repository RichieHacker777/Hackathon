//---------------------------------------------------------------------------

#ifndef UnitInfinityCardH
#define UnitInfinityCardH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TFormInfinityCard : public TForm
{
__published:	// IDE-managed Components
	TButton *ButtonPlastic;
	TButton *ButtonParents;
	TButton *ButtonTerminal;
	void __fastcall ButtonPlasticClick(TObject *Sender);
	void __fastcall ButtonParentsClick(TObject *Sender);
	void __fastcall ButtonTerminalClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormInfinityCard(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormInfinityCard *FormInfinityCard;
//---------------------------------------------------------------------------
#endif
