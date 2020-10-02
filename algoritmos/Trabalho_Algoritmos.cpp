#include<iostream>

using namespace std;

int main(){
	
char* item, resposta;
int opcional, op1 = 0, op2 = 0, op3 = 0, op4 = 0;
float vlCarro, vlFinal;

setlocale(LC_ALL,"portuguese");

cout << "C�LCULO DO VALOR DO AUTOM�VEL\n\n";

cout << "Informe o valor do autom�vel: R$ "; cin >> vlCarro; cout <<"\n\n";

// In�cio da estrutura de repeti��o do-while para sele��o dos opcionais

do{
 
cout << "                           OPCIONAIS:                               \n";
cout << "0 - Nenhum Opcional;                                                \n";
cout << "1 - Trio El�trico (alarme, vidro el�trico e tranca el�trica);       \n";
cout << "2 - Ar Condicionado;                                                \n";
cout << "3 - Dire��o Hidr�ulica;                                             \n";
cout << "4 - Completo (trio el�trico, ar condicionado e dire��o hidr�ulica). \n\n";


cout << "Escolha um opcional:  "; cin >> opcional; cout <<"\n\n";                   

// Estrutura de decis�o para que, agregado a estrutura de repeti��o, seja poss�vel 
//contabilizar a quantidade de cada opcional escolhido

if (opcional == 1)
{op1 ++; cout <<" - Trio El�trico (alarme, vidro el�trico e tranca el�trica)\n\n";}

else if(opcional == 2)
{op2 ++; cout <<" - Ar Condicionado\n\n";}

else if(opcional == 3)
{op3 ++; cout <<" - Dire��o Hidr�ulica\n\n";}

else if(opcional == 4)
{op4 ++; cout <<" - Completo (trio el�trico, ar condicionado e dire��o hidr�ulica)\n\n";}

else
	if((opcional != 0) && (opcional > 4))
	
	cout << "N�mero informado inv�lido !!\n\n";

	else
	
	cout << "Nenhum opcional selecionado.\n\n";
	
	// Estrutura switch - case para realiza��o dos c�lculos referentes a cada opcional
	
    switch(opcional){
  	
  	case 0: item = "Nenhum Opcional"; vlFinal = vlCarro + (vlCarro * 0.08);break;
  	case 1: item = "Trio El�trico (alarme, vidro el�trico e tranca el�trica)"; 
	  vlFinal = vlCarro + (vlCarro * 0.02) + (vlCarro * 0.08);break;
	case 2: item = "Ar Condicionado"; vlFinal = vlCarro + (vlCarro * 0.02);break;   
	case 3: item = "Dire��o Hidr�ulica"; vlFinal = vlCarro + (vlCarro * 0.02); break; 
	case 4: item = "Completo (trio el�trico, ar condicionado e dire��o hidr�ulica)"; 
	vlFinal = (vlCarro+(vlCarro * 0.06)+(vlCarro * 0.08)) - (vlCarro * 0.035);break; 
	
}

cout <<"O valor total do autom�vel �: R$ " << vlFinal; cout << "\n\n";

cout <<" Deseja continuar ? [S/N] "; cin >> resposta; cout << "\n";

} while ((resposta != 'N') && (resposta != 'n'));

  
  cout <<"O opcional  1 - Trio El�trico (alarme, vidro el�trico e tranca el�trica) foi selecionado " 
  << op1  << " vez (es)\n";
  cout <<"O opcional  2 - Ar Condicionado foi selecionado " << op2  << " vez(es)\n";
  cout <<"O opcional  3 - Dire��o Hidr�ulica foi selecionado " << op3 << " vez(es)\n";
  cout <<"O opcional  4 - Completo (trio el�trico, ar condicionado e dire��o hidr�ulica) foi selecionado " 
  << op4 << " vez(es)\n";
  
}

  
  











