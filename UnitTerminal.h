//---------------------------------------------------------------------------

#ifndef UnitTerminalH
#define UnitTerminalH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.WinXPanels.hpp>
#include <Vcl.Mask.hpp>
#include <System.Win.ScktComp.hpp>
#include <Vcl.Buttons.hpp>
//---------------------------------------------------------------------------
class TFormTerminal : public TForm
{
__published:	// IDE-managed Components
	TCardPanel *CardPanel1;
	TCard *Card1;
	TCard *Card2;
	TLabel *Label1;
	TLabel *Label2;
	TEdit *EditAddress;
	TMaskEdit *MaskEditAddress;
	TLabel *Label3;
	TEdit *EditIP;
	TButton *ButtonConnect;
	TClientSocket *ClientSocket1;
	TLabeledEdit *LabeledEditAmount;
	TLabeledEdit *LabeledEditMoney;
	TButton *Button1;
	TPanel *Panel1;
	TPanel *Panel2;
	TBitBtn *BitBtn1;
	TBitBtn *BitBtn2;
	TBitBtn *BitBtn3;
	TBitBtn *BitBtn4;
	TBitBtn *BitBtn5;
	TBitBtn *BitBtn6;
	TBitBtn *BitBtn7;
	TBitBtn *BitBtn8;
	TBitBtn *BitBtn9;
	TBitBtn *BitBtn10;
	TBitBtn *BitBtn11;
	TBitBtn *BitBtn12;
	void __fastcall ButtonConnectClick(TObject *Sender);
	void __fastcall BitBtn1Click(TObject *Sender);
	void __fastcall BitBtn2Click(TObject *Sender);
	void __fastcall BitBtn3Click(TObject *Sender);
	void __fastcall BitBtn4Click(TObject *Sender);
	void __fastcall BitBtn5Click(TObject *Sender);
	void __fastcall BitBtn6Click(TObject *Sender);
	void __fastcall BitBtn7Click(TObject *Sender);
	void __fastcall BitBtn8Click(TObject *Sender);
	void __fastcall BitBtn9Click(TObject *Sender);
	void __fastcall BitBtn11Click(TObject *Sender);
	void __fastcall BitBtn10Click(TObject *Sender);
	void __fastcall BitBtn12Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall ClientSocket1Connect(TObject *Sender, TCustomWinSocket *Socket);
	void __fastcall ClientSocket1Disconnect(TObject *Sender, TCustomWinSocket *Socket);
	void __fastcall ClientSocket1Error(TObject *Sender, TCustomWinSocket *Socket, TErrorEvent ErrorEvent,
          int &ErrorCode);
	void __fastcall FormShow(TObject *Sender);


private:	// User declarations
public:		// User declarations
	__fastcall TFormTerminal(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormTerminal *FormTerminal;
//---------------------------------------------------------------------------
#endif
