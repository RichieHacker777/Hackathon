//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("UnitParents.cpp", FormParents);
USEFORM("..\Talim\Talim\UnitPlastic.cpp", FormPlastic);
USEFORM("..\Talim\Talim\UnitTerminal.cpp", FormTerminal);
USEFORM("D:\Infinity Card\UnitInfinityCard.cpp", FormInfinityCard);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TFormInfinityCard), &FormInfinityCard);
		Application->CreateForm(__classid(TFormPlastic), &FormPlastic);
		Application->CreateForm(__classid(TFormParents), &FormParents);
		Application->CreateForm(__classid(TFormTerminal), &FormTerminal);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
