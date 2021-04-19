/* Maderlaine Vanessa Aldana Martinez Carne 0909-20-6881
Ingenieria en Sistemas 
Programación I 2do. Parcial
Ejercicio 11*/

//Declaración de librerias
#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

//declaración de variables públicas
int vectorA[3], vectorB[3], vectorC[3], suma; //declaración de arrays
float promedio;// promedio vector C
int i; //variable tipo pointer
	
//Programación por partes 
void datosvectorA()
{
	for(i=0; i<3; i++)
	{
		cout<< "Ingreso de Datos del Vector A" << i + 1 <<endl;
		cin>>vectorA[i];
	}
}

void datosvectorB()
{
	for(i=0; i<3; i++)
	{
		cout<<"Ingreso de Datos del Vector B" << i + 1 <<endl;
		cin>>vectorB[i];
	}
}

void resta()
{
	for(i=0; i<3; i++)
	{
		vectorC[i]= vectorA[i] - vectorB[i];
	}
}

void datospromedio()
{
	for(i=0; i<3; i++)
	{
		suma= suma + vectorC[i];
	}
	promedio = suma / 3;
}

int main ()
{
	cout<< "Calculo de vectores"<<endl;
	datosvectorA(); 
	datosvectorB();
	resta();
	datospromedio();
	
	cout<<endl;
	cout<<" Vector A"<<endl;
	cout<< vectorA[0] << "     " << vectorA[1] << "     " << vectorA[2] <<endl;
	
	cout<<endl;
	cout<<" Vector B"<<endl;
	cout<< vectorB[0] << "     " << vectorB[1] << "     " << vectorB[2] <<endl;
	
	cout<<endl;
	cout<<" Vector C"<<endl;
	cout<< vectorC[0] << "     " << vectorC[1] << "     " << vectorC[2] <<endl;
	
	cout<<endl;
	cout<<"Promedio del Vector C = "<< promedio <<endl;
	
	getch();
}
/* Maderlaine Vanessa Aldana Martinez Carne 0909-20-6881
Ingenieria en Sistemas 
Programación I 2do. Parcial
Ejercicio 11*/



