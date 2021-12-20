//---------------------------------------------------------------------------

#ifndef UnitPlasticH
#define UnitPlasticH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <System.Win.ScktComp.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.WinXPanels.hpp>
#include <System.ImageList.hpp>
#include <Vcl.BaseImageCollection.hpp>
#include <Vcl.ImageCollection.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.VirtualImageList.hpp>
//---------------------------------------------------------------------------
class TFormPlastic : public TForm
{
__published:	// IDE-managed Components
	TServerSocket *ServerSocket1;
	TPanel *Panel1;
	TLabel *LabelAmount;
	TPanel *Panel2;
	TCardPanel *CardPanel1;
	TCard *Card1;
	TImage *Image1;
	TLabel *LabelAddress;
	TLabel *LabelPort;
	TLabel *LabelUser;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall ServerSocket1ClientConnect(TObject *Sender, TCustomWinSocket *Socket);
	void __fastcall ServerSocket1ClientDisconnect(TObject *Sender, TCustomWinSocket *Socket);
	void __fastcall ServerSocket1ClientRead(TObject *Sender, TCustomWinSocket *Socket);
	void __fastcall FormShow(TObject *Sender);




private:	// User declarations
public:		// User declarations
	__fastcall TFormPlastic(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormPlastic *FormPlastic;
//---------------------------------------------------------------------------
#endif
