/* Receba uma hora qualquer(sem o minutos e os zeros) e informe se � 
dia ou noite. Ser� dia se a hora estiver entre 6h e 18h.*/

#include<iostream>

using namespace std;

int hora;

int main()
{
	cout<<"Que horas sao? ";
	cin>>hora;
	
	cout<<"\n";
	
	if (hora >= 6 && hora <= 18)
	{
		cout<<"DIA";
	}
	else
	{
		cout<<"NOITE";
	}
}
