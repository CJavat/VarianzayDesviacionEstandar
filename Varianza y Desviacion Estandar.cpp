#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <math.h>
using namespace std;

float Centigrados, Rankine, Fahrenheit, Kelvin;
string resp;
char opc='\0';
char Menu();
void Varianza_Serie(void);
void Desviacion_Estandar(void);


int main() 
{
	
	do
	{
		opc=Menu();
		switch(opc)
		{
			case 49:
				Varianza_Serie();
			break;
			
			case 50:
				Desviacion_Estandar();
			break;
				
			default:
				if(opc!=27)
				{
					Beep(1000,100);
				}
		}
	}while(opc!=27);
	cout<<"GRACIAS POR USAR EL PROGRAMA.";
}

char Menu()
{
	char opc1='\0';
	system("cls");
	cout<<"Presiona:\n";
	cout<<"[ESC] Para Salir del MENU.\n";
	cout<<"[ 1 ] VARIANZA DE UNA SERIE DE DATOS.\n";
	cout<<"[ 2 ] DESVIACION ESTANDAR.\n";
	opc1=getch();
}

void Desviacion_Estandar(void)
{
	int Num;
	float Media=0,Suma,Numeros_A_Calcular,Suma_Total=0,S=0, Desviacion=0;
	system("cls");
	cout<<"Bienvenido a DESVIACION ESTANDAR.\n\n";
	cout<<"De cuantos numeros quieres calcular?\n";cin>>Num;
	
	float Arreglo[Num], Arreglo2[Num];
	
	cout<<"Escribe los Numeros\n";
	for(int a=0;a<Num;a++)
	{
		cin>>Numeros_A_Calcular;
		Arreglo[a]=Numeros_A_Calcular;
		Suma=Suma+Arreglo[a];
		
	}
	
	Media=(Suma/Num);

	for(int b=0;b<Num;b++)
	{
		Arreglo2[b]=(Arreglo[b]-Media);
		Arreglo2[b]=(Arreglo2[b]*Arreglo2[b]);
		Suma_Total=(Suma_Total+Arreglo2[b]);
	}

	S=Suma_Total/Num;
	Desviacion=sqrt(S);
	
	cout<<"Desviacion Estandar: "<<Desviacion<<endl;
	getch();
}

void Varianza_Serie(void)
{
	int Num;
	float Media=0,Suma,Numeros_A_Calcular,Suma_Total=0,S=0, Varianza=0;
	system("cls");
	cout<<"Bienvenido a VARIANZA DE UNA SERIE DE DATOS.\n\n";
	cout<<"De cuantos numeros quieres calcular?\n";cin>>Num;
	
	float Arreglo[Num], Arreglo2[Num];
	
	cout<<"Escribe los Numeros\n";
	for(int a=0;a<Num;a++)
	{
		cin>>Numeros_A_Calcular;
		Arreglo[a]=Numeros_A_Calcular;
		Suma=Suma+Arreglo[a];
		
	}
	
	Media=(Suma/Num);

	for(int b=0;b<Num;b++)
	{
		Arreglo2[b]=(Arreglo[b]-Media);
		Arreglo2[b]=(Arreglo2[b]*Arreglo2[b]);
		Suma_Total=(Suma_Total+Arreglo2[b]);
	}
	
	S=Suma_Total/(Num-1);
	Varianza=sqrt(S);
	
	cout<<"Esta Es La Varianza De Los Datos Que Ingresaste: "<<Varianza<<endl;
	
	getch();
}
