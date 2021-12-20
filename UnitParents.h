//---------------------------------------------------------------------------

#ifndef UnitParentsH
#define UnitParentsH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <System.Win.ScktComp.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <Vcl.WinXPanels.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Buttons.hpp>
#include <System.ImageList.hpp>
#include <Vcl.BaseImageCollection.hpp>
#include <Vcl.ImageCollection.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.VirtualImageList.hpp>
#include <Vcl.Mask.hpp>
//---------------------------------------------------------------------------
class TFormParents : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TImage *Image1;
	TButton *ButtonConnect;
	TClientSocket *ClientSocket1;
	TCardPanel *CardPanel1;
	TCard *Card1;
	TLabel *Label1;
	TLabel *Label2;
	TCard *Card2;
	TLabel *Label3;
	TEdit *EditIP;
	TPanel *Panel2;
	TImage *Image2;
	TLabel *LabelAddress;
	TLabel *LabelUser;
	TLabel *LabelWhere;
	TGroupBox *GroupBox1;
	TEdit *EditAmount;
	TButton *ButtonSend;
	TVirtualImageList *VirtualImageList1;
	TImageCollection *ImageCollection1;
	TPanel *Panel3;
	TButton *Button1;
	TButton *Button2;
	TCard *Card3;
	TPanel *Panel4;
	TListBox *ListBox1;
	TButton *Button3;
	TButton *Button4;
	TButton *Button5;
	TMaskEdit *MaskEditAddress;
	TEdit *EditAddress;
	void __fastcall FormShow(TObject *Sender);
	void __fastcall ButtonConnectClick(TObject *Sender);
	void __fastcall ClientSocket1Connect(TObject *Sender, TCustomWinSocket *Socket);
	void __fastcall ClientSocket1Error(TObject *Sender, TCustomWinSocket *Socket, TErrorEvent ErrorEvent,
          int &ErrorCode);
	void __fastcall ButtonSendClick(TObject *Sender);
	void __fastcall BitBtn1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall ClientSocket1Disconnect(TObject *Sender, TCustomWinSocket *Socket);
	void __fastcall ClientSocket1Read(TObject *Sender, TCustomWinSocket *Socket);
	void __fastcall Button3Click(TObject *Sender);


private:	// User declarations
public:		// User declarations
	__fastcall TFormParents(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormParents *FormParents;
//---------------------------------------------------------------------------
#endif
