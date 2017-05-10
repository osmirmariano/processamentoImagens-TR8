//---------------------------------------------------------------------------

#ifndef conversaoCoresH
#define conversaoCoresH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TImage *Image1;
	TLabel *Label1;
	TComboBox *ComboBox1;
	TSpeedButton *SpeedButton1;
	void __fastcall SpeedButton1Click(TObject *Sender);
	void __fastcall ComboBox1Change(TObject *Sender);
private:	// User declarations
    TColor cor;
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
