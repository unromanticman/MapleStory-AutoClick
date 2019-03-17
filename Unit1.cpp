//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
//===
String frameName;
HWND hwnd;
DWORD PID;
//=====function====

void check (String c)
{

if(c ==1)
{

	  PostMessage(hwnd,WM_KEYDOWN,49,131073);

}
else if(c==2)
{
	  PostMessage(hwnd,WM_KEYDOWN,50,196609);

}
else if(c==3)
{
	  PostMessage(hwnd,WM_KEYDOWN,51,262145);

}
else if(c==4)
{
	  PostMessage(hwnd,WM_KEYDOWN,52,327681);

}
else if(c==5)
{
	  PostMessage(hwnd,WM_KEYDOWN,53,393217);

}
else if(c==6)
{
	  PostMessage(hwnd,WM_KEYDOWN,54,458753);

}
else if(c==7)
{
	  PostMessage(hwnd,WM_KEYDOWN,55,524289);

}
else if(c==8)
{
	  PostMessage(hwnd,WM_KEYDOWN,56,589825);

}
else if(c==9)
{
	  PostMessage(hwnd,WM_KEYDOWN,57,655361);

}
else if(c==0)
{
	  PostMessage(hwnd,WM_KEYDOWN,0,720897);
}
else if(c=="A")
{
	  PostMessage(hwnd,WM_KEYDOWN,'A',1966081);
}
else if(c=="B")
{
	  PostMessage(hwnd,WM_KEYDOWN,'B',3145729);
}
else if(c=="C")
{
	  PostMessage(hwnd,WM_KEYDOWN,'C',3014657);
}
else if(c=="D")
{
	  PostMessage(hwnd,WM_KEYDOWN,'D',2097153);
}
else if(c=="E")
{
	  PostMessage(hwnd,WM_KEYDOWN,'E',1179649);
}
else if(c=="F")
{
	  PostMessage(hwnd,WM_KEYDOWN,'F',2162689);
}
else if(c=="G")
{
	  PostMessage(hwnd,WM_KEYDOWN,'G',2228225);
}
else if(c=="H")
{
	  PostMessage(hwnd,WM_KEYDOWN,'H',2293761);
}
else if(c=="I")
{
	  PostMessage(hwnd,WM_KEYDOWN,'I',1507329);
}
else if(c=="J")
{
	  PostMessage(hwnd,WM_KEYDOWN,'J',2359297);
}
else if(c=="K")
{
	  PostMessage(hwnd,WM_KEYDOWN,'K',2424833);
}
else if(c=="L")
{
	  PostMessage(hwnd,WM_KEYDOWN,'L',2490369);
}
else if(c=="M")
{
	  PostMessage(hwnd,WM_KEYDOWN,'M',3276801);
}
else if(c=="N")
{
	  PostMessage(hwnd,WM_KEYDOWN,'N',3211265);
}
else if(c=="O")
{
	  PostMessage(hwnd,WM_KEYDOWN,'O',1572865);
}
else if(c=="P")
{
	  PostMessage(hwnd,WM_KEYDOWN,'P',1638401);
}
else if(c=="Q")
{
	  PostMessage(hwnd,WM_KEYDOWN,'Q',1048577);
}
else if(c=="R")
{
	  PostMessage(hwnd,WM_KEYDOWN,'R',1245185);
}
else if(c=="S")
{
	  PostMessage(hwnd,WM_KEYDOWN,'S',2031617);
}
else if(c=="T")
{
	  PostMessage(hwnd,WM_KEYDOWN,'T',1310721);
}
else if(c=="U")
{
	  PostMessage(hwnd,WM_KEYDOWN,'U',1441793);
}
else if(c=="V")
{
	  PostMessage(hwnd,WM_KEYDOWN,'V',3080193);
}
else if(c=="W")
{
	  PostMessage(hwnd,WM_KEYDOWN,'W',1114113);
}
else if(c=="X")
{
	  PostMessage(hwnd,WM_KEYDOWN,'X',2949121);
}
else if(c=="Y")
{
	  PostMessage(hwnd,WM_KEYDOWN,'Y',1376257);
}
else if(c=="Z")
{
	  PostMessage(hwnd,WM_KEYDOWN,'Z',2883585);
}

}



//============

//============

void __fastcall TForm1::Button1Click(TObject *Sender)
{

	frameName = Edit1->Text;
	hwnd = FindWindow(0,frameName.c_str());
   //	Application->MessageBox("鎖定視窗", "提示", 0);
	//DWORD PID;
	GetWindowThreadProcessId(hwnd, &PID);
	Label4->Caption = PID;
	//關閉
	Button2->Caption = "關閉鎖定的窗口";
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
SetWindowPos(hwnd, HWND_TOPMOST, 0, 0, 0, 0, SWP_NOMOVE || SWP_NOSIZE);
	//HWND nowForm;
	//nowForm = FindWindowEx(hwnd, 0, "Edit", 0);
  //	PostMessage(hwnd,WM_CHAR,65,0);
	//SendMessage(nowForm, WM_CHAR, 65, 0);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
try{

ShowWindow(hwnd,SW_SHOW);
}
catch (Exception &exception)
{

}
}


//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox1Click(TObject *Sender)
{
Timer1->Interval = StrToInt(H1->Text);
		Timer1->Enabled = true;

	if(CheckBox1->Checked ==false)
	{
		Timer1->Enabled = false;
	}
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
String c = ComboBox1->Text;
check(c);

}


//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox2Click(TObject *Sender)
{

Timer2->Interval = StrToInt(H2->Text);
		Timer2->Enabled = true;

	if(CheckBox2->Checked ==false)
	{
		Timer2->Enabled = false;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox3Click(TObject *Sender)
{
Timer3->Interval = StrToInt(H3->Text);
		Timer3->Enabled = true;

	if(CheckBox3->Checked ==false)
	{
		Timer3->Enabled = false;
	}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox4Click(TObject *Sender)
{
Timer4->Interval = StrToInt(H4->Text);
		Timer4->Enabled = true;

	if(CheckBox4->Checked ==false)
	{
		Timer4->Enabled = false;
	}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox5Click(TObject *Sender)
{
Timer5->Interval = StrToInt(H5->Text);
		Timer5->Enabled = true;

	if(CheckBox5->Checked ==false)
	{
		Timer5->Enabled = false;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox6Click(TObject *Sender)
{
Timer6->Interval = StrToInt(H6->Text);
		Timer6->Enabled = true;

	if(CheckBox6->Checked ==false)
	{
		Timer6->Enabled = false;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox7Click(TObject *Sender)
{
Timer7->Interval = StrToInt(H7->Text);
		Timer7->Enabled = true;

	if(CheckBox7->Checked ==false)
	{
		Timer7->Enabled = false;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox8Click(TObject *Sender)
{
Timer8->Interval = StrToInt(H8->Text);
		Timer8->Enabled = true;

	if(CheckBox8->Checked ==false)
	{
		Timer8->Enabled = false;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox9Click(TObject *Sender)
{
Timer9->Interval = StrToInt(H9->Text);
		Timer9->Enabled = true;

	if(CheckBox9->Checked ==false)
	{
		Timer9->Enabled = false;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox10Click(TObject *Sender)
{
Timer10->Interval = StrToInt(H10->Text);
		Timer10->Enabled = true;

	if(CheckBox10->Checked ==false)
	{
		Timer10->Enabled = false;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox11Click(TObject *Sender)
{
Timer11->Interval = StrToInt(H11->Text);
		Timer11->Enabled = true;

	if(CheckBox11->Checked ==false)
	{
		Timer11->Enabled = false;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox12Click(TObject *Sender)
{
Timer12->Interval = StrToInt(H12->Text);
		Timer12->Enabled = true;

	if(CheckBox12->Checked ==false)
	{
		Timer12->Enabled = false;
	}
}
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

void __fastcall TForm1::Timer2Timer(TObject *Sender)
{
	String c = ComboBox2->Text;
check(c);

}
//---------------------------------------------------------------------------















void __fastcall TForm1::Timer3Timer(TObject *Sender)
{

	String c = ComboBox3->Text;
check(c);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer4Timer(TObject *Sender)
{

	String c = ComboBox4->Text;
check(c);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Timer5Timer(TObject *Sender)
{

	String c = ComboBox5->Text;
check(c);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer6Timer(TObject *Sender)
{

	String c = ComboBox6->Text;
check(c);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer7Timer(TObject *Sender)
{

	String c = ComboBox7->Text;
check(c);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer8Timer(TObject *Sender)
{

	String c = ComboBox8->Text;
check(c);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer9Timer(TObject *Sender)
{

	String c = ComboBox9->Text;
check(c);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer10Timer(TObject *Sender)
{

	String c = ComboBox10->Text;
check(c);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer11Timer(TObject *Sender)
{

	String c = ComboBox11->Text;
check(c);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer12Timer(TObject *Sender)
{

	String c = ComboBox12->Text;
check(c);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{

	for(int i=1;i<=12;i++)
	{

	 ((TEdit *)FindComponent("H" + IntToStr(i)))->Text = "3000";
	 ((TComboBox *)FindComponent("ComboBox" + IntToStr(i)))->Text = "Click this";

	}
}
//---------------------------------------------------------------------------




void __fastcall TForm1::Label2Click(TObject *Sender)
{
String i="open";
String j="http://unromanticman.pixnet.net/blog/";
ShellExecute(NULL,i.c_str(),j.c_str(), NULL,NULL, SW_SHOW);

}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button2Click(TObject *Sender)
{
try{
//PostMessage(hwnd,WM_CLOSE,0,0);
HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS,false,PID);
TerminateProcess(hProcess,0);

}
catch (Exception &exception)
{

}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
try{

ShowWindow(hwnd,SW_HIDE);
}
catch (Exception &exception)
{

}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{

SetWindowPos(hwnd, HWND_NOTOPMOST, 0, 0, 0, 0, SWP_NOMOVE || SWP_NOSIZE);
}
//---------------------------------------------------------------------------

