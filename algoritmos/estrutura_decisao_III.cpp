/*Receba o valor de um sal�rio e informe se � maior ou menor
do que o sal�rio m�nimo. Considere o valor de 1000,00 como sendo o 
m�nimo.*/

#include <iostream>

using namespace std;

float salario;

int main()
{
	cout<<"Informe o valor do salario: ";
	cin>>salario;
	
	cout<<"\n";
	
	if(salario > 1000.00)
	{
		cout<<"Maior que o salario minimo";
	}
	else
	{
		if(salario == 1000.00)
		{
			cout<<"Igual ao salario minimo";
		}
		else
		{
			cout<<"Menor que o salario minimo";
		}
	}
}
