//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "conversaoCores.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	Form1->Color = clWhite;
	ComboBox1->Items->Add("RGB para CMY");
	ComboBox1->Items->Add("CMY para RGB");
	ComboBox1->Items->Add("RGB para HSI");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton1Click(TObject *Sender)
{
	Image1->Picture->LoadFromFile("bears.bmp"); // Carregando imagem
	Image1->Stretch = true; //redimensiona
	Image1->Refresh(); //atualiza
}
//---------------------------------------------------------------------------


void __fastcall TForm1::ComboBox1Change(TObject *Sender)
{
	AnsiString conversao;
	conversao = ComboBox1->Text;
	int i, j, r, g, b;
	int c, m, y;
	float **matriz;

	if(conversao == "RGB para CMY"){
		for(i = 0; i < Image1->Width; i++){
			for(j = 0; j < Image1->Height; j++){
				cor = Image1->Canvas->Pixels[i][j];
				r = GetRValue(cor);
				g = GetGValue(cor);
				b = GetBValue(cor);
				ShowMessage(r);
				c = (255 - r);
				m = (255 - g);
				y = (255 - b);
				ShowMessage(c);
				//ShowMessage(m);
				//ShowMessage(y);
				cor = TColor(c,m,y);
				Image1->Canvas->Pixels[i][j] = cor;
			}
		}
	}
	else{
		if(conversao == "CMY para RGB"){
			for(i = 0; i < Image1->Width; i++){
				for(j = 0; j < Image1->Height; j++){
					cor = Image1->Canvas->Pixels[i][j];
					r = GetRValue(cor);
					g = GetGValue(cor);
					b = GetBValue(cor);

					c = 255 - r;
					m = 255 - g;
					y = 255 - b;
					ShowMessage(c);
					r = 255 - c;
					g = 255 - m;
					b = 255 - y;

					ShowMessage(r);
					//ShowMessage(g);
					//ShowMessage(b);

					Image1->Canvas->Pixels[i][j] = RGB(r,g,b);
				}
			}
		}
		else{
			if(conversao == "RGB para HSI"){

            }

		}
    }

}
//---------------------------------------------------------------------------

