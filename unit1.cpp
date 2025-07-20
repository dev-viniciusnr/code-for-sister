//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"

String cidade = NULL;
String feriado = NULL;
String classe = NULL;
String pagamento = NULL;
float valorfinal = 0;
float descontopix = 0;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
   RadioGroup2->Visible = false;
   RadioGroup3->Visible = false;
   RadioGroup4->Visible = false;
   RadioGroup5->Visible = false;
   Button2->Visible = false;
   Button3->Visible = false;
   Button4->Visible = false;
   Button5->Visible = false;
   Button6->Visible = false;
   Button7->Visible = false;
   Edit1->Visible = false;
   Label1->Visible = false;
   StaticText5->Visible = false;
   RadioGroup5->Visible = false;
   StaticText1->Visible = false;
   StaticText2->Visible = false;
   StaticText4->Visible = false;
   Edit2->Visible = false;
}


void __fastcall TForm1::RadioGroup1Click(TObject *Sender)
{
	int variavelCidade = RadioGroup1->ItemIndex;

	if (variavelCidade != -1) {
		cidade = RadioGroup1->Items->Strings[variavelCidade];
	} else {
		cidade = NULL;
	}
}

void __fastcall TForm1::RadioGroup2Click(TObject *Sender)
{
	int variavelFeriado = RadioGroup2->ItemIndex;

	if (variavelFeriado != -1) {
		feriado = RadioGroup2->Items->Strings[variavelFeriado];
	} else {
		feriado = NULL;
	}
}
void __fastcall TForm1::RadioGroup3Click(TObject *Sender)
{
	int variavelClasse = RadioGroup3->ItemIndex;

	if (variavelClasse != -1) {
		classe = RadioGroup3->Items->Strings[variavelClasse];
	} else {
		classe = NULL;
	}

	if(cidade == "Nova york"){
		if(feriado == "Natal"){
			if(classe == "Econômica"){
				valorfinal = 1200.00;
			}
			if(classe == "Executiva"){
				valorfinal = 1900.00;
			}
			if(classe == "Primeira Classe"){
				valorfinal = 3000.00;
			}
		}
		if(feriado == "ThanksGiving"){
			if(classe == "Econômica"){
				valorfinal = 900.00;
			}
			if(classe == "Executiva"){
				valorfinal = 1200.00;
			}
			if(classe == "Primeira Classe"){
				valorfinal = 2500.00;
			}
		}
		if(feriado == "Ano Novo"){
			if(classe == "Econômica"){
				valorfinal = 1200.00;
			}
			if(classe == "Executiva"){
				valorfinal = 1900.00;
			}
			if(classe == "Primeira Classe"){
				valorfinal = 3000.00;
			}
		}
		if(feriado == "Páscoa"){
			if(classe == "Econômica"){
				valorfinal = 900.00;
			}
			if(classe == "Executiva"){
				valorfinal = 1200.00;
			}
			if(classe == "Primeira Classe"){
				valorfinal = 2500.00;
			}
		}
	}

	if(cidade == "Los Angeles"){
		if(feriado == "Natal"){
			if(classe == "Econômica"){
				valorfinal = 1200.00;
			}
			if(classe == "Executiva"){
				valorfinal = 1900.00;
			}
			if(classe == "Primeira Classe"){
				valorfinal = 3000.00;
			}
		}
		if(feriado == "ThanksGiving"){
			if(classe == "Econômica"){
				valorfinal = 900.00;
			}
			if(classe == "Executiva"){
				valorfinal = 1200.00;
			}
			if(classe == "Primeira Classe"){
				valorfinal = 2500.00;
			}
		}
		if(feriado == "Ano Novo"){
			if(classe == "Econômica"){
				valorfinal = 1200.00;
			}
			if(classe == "Executiva"){
				valorfinal = 1900.00;
			}
			if(classe == "Primeira Classe"){
				valorfinal = 3000.00;
			}
		}
		if(feriado == "Páscoa"){
			if(classe == "Econômica"){
				valorfinal = 900.00;
			}
			if(classe == "Executiva"){
				valorfinal = 1200.00;
			}
			if(classe == "Primeira Classe"){
				valorfinal = 2500.00;
			}
		}
	}

	if(cidade == "Chicago"){
		if(feriado == "Natal"){
			if(classe == "Econômica"){
				valorfinal = 1100.00;
			}
			if(classe == "Executiva"){
				valorfinal = 1850.00;
			}
			if(classe == "Primeira Classe"){
				valorfinal = 2700.00;
			}
		}
		if(feriado == "ThanksGiving"){
			if(classe == "Econômica"){
				valorfinal = 850.00;
			}
			if(classe == "Executiva"){
				valorfinal = 1100.00;
			}
			if(classe == "Primeira Classe"){
				valorfinal = 2000.00;
			}
		}
		if(feriado == "Ano Novo"){
			if(classe == "Econômica"){
				valorfinal = 1100.00;
			}
			if(classe == "Executiva"){
				valorfinal = 1850.00;
			}
			if(classe == "Primeira Classe"){
				valorfinal = 2700.00;
			}
		}
		if(feriado == "Páscoa"){
			if(classe == "Econômica"){
				valorfinal = 850.00;
			}
			if(classe == "Executiva"){
				valorfinal = 1100.00;
			}
			if(classe == "Primeira Classe"){
				valorfinal = 2000.00;
			}
		}
	}

    if(cidade == "Miami"){
		if(feriado == "Natal"){
			if(classe == "Econômica"){
				valorfinal = 1100.00;
			}
			if(classe == "Executiva"){
				valorfinal = 1850.00;
			}
			if(classe == "Primeira Classe"){
				valorfinal = 2700.00;
			}
		}
		if(feriado == "ThanksGiving"){
			if(classe == "Econômica"){
				valorfinal = 850.00;
			}
			if(classe == "Executiva"){
				valorfinal = 1100.00;
			}
			if(classe == "Primeira Classe"){
				valorfinal = 2000.00;
			}
		}
		if(feriado == "Ano Novo"){
			if(classe == "Econômica"){
				valorfinal = 1100.00;
			}
			if(classe == "Executiva"){
				valorfinal = 1850.00;
			}
			if(classe == "Primeira Classe"){
				valorfinal = 2700.00;
			}
		}
		if(feriado == "Páscoa"){
			if(classe == "Econômica"){
				valorfinal = 850.00;
			}
			if(classe == "Executiva"){
				valorfinal = 1100.00;
			}
			if(classe == "Primeira Classe"){
				valorfinal = 2000.00;
			}
		}
	}

	Edit1->Text = "R$" + FormatFloat("0.00", valorfinal);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioGroup4Click(TObject *Sender)
{
	int variavelPagamento = RadioGroup4->ItemIndex;

	if (variavelPagamento != -1) {
		pagamento = RadioGroup4->Items->Strings[variavelPagamento];
		if(pagamento == "Pix"){
			descontopix = (valorfinal*95)/100;
			Edit1->Text = "R$" + FormatFloat("0.00", descontopix);
		}
		if(pagamento == "Crédito" or pagamento == "Débito"){
			Edit1->Text = "R$" + FormatFloat("0.00", valorfinal);
		}
	} else {
		pagamento = NULL;
	}

}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button1Click(TObject *Sender)
{
	if(cidade != NULL){
		RadioGroup1->Visible = false;
		Button1->Visible = false;
		RadioGroup2->Visible = true;
		Button2->Visible = true;
		Button3->Visible = true;
	}else{
		ShowMessage("Por favor selecione uma cidade para continuar com a compra");
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
	if(feriado != NULL){
		RadioGroup2->Visible = false;
		Button2->Visible = false;
		Button3->Visible = false;
		RadioGroup3->Visible = true;
		Button4->Visible = true;
		Button5->Visible = true;
	}else{
		ShowMessage("Por favor selecione um feriado para continuar com a compra");
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
		RadioGroup1->Visible = true;
		Button1->Visible = true;
		RadioGroup2->Visible = false;
		Button2->Visible = false;
		Button3->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
	if(classe != NULL){
		RadioGroup3->Visible = false;
		Button4->Visible = false;
		Button5->Visible = false;
		RadioGroup4->Visible = true;
		Button6->Visible = true;
		Button7->Visible = true;
		Edit1->Visible = true;
		Label1->Visible = true;
		StaticText5->Visible = true;
	}else{
		ShowMessage("Por favor selecione uma classe de viagem para continuar com a compra");
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
		RadioGroup2->Visible = true;
		Button2->Visible = true;
		Button3->Visible = true;
		RadioGroup3->Visible = false;
		Button4->Visible = false;
		Button5->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button7Click(TObject *Sender)
{
	RadioGroup3->Visible = true;
	Button4->Visible = true;
	Button5->Visible = true;
	RadioGroup4->Visible = false;
	Button6->Visible = false;
	Button7->Visible = false;
	Edit1->Visible = false;
	Label1->Visible = false;
	StaticText5->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{
	   if(pagamento != NULL){
		if(pagamento == "Pix"){
			valorfinal = descontopix;
		}
		Edit2->Text = "R$" + FormatFloat("0.00", valorfinal);
		RadioGroup4->Visible = false;
		Button6->Visible = false;
		Button7->Visible = false;
		Edit1->Visible = false;
		Label1->Visible = false;
		StaticText5->Visible = false;
		RadioGroup5->Visible = true;
		StaticText1->Visible = true;
		StaticText2->Visible = true;
		StaticText4->Visible = true;
		Edit2->Visible = true;
	}else{
		ShowMessage("Por favor selecione um método de pagamento para finalizar a compra");
	}
}
//---------------------------------------------------------------------------

