/*
 ============================================================================
 Name        : ExamenProgramacion1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{

	int id;
	char nombre[20];
	char tipo;
	float efectividad;

}eVacuna;

float aplicarAumento(float Precio);
int reemplazarCaracteres(char* cadena, char caracter1,char caracter2);
int Ordenar(eVacuna lista[],int longitud);


int main(void) {

	setbuf(stdout,NULL);
	float precio=2345.45;
	char cadena[10]="anana";
	char a='a';
	char b='x';

	eVacuna vacuna[5]= {{2000,"qw",'A',20},{2000,"as",'B',20},{2000,"zx",'A',20},{2000,"sdf",'C',20}};

	aplicarAumento(precio);
	reemplazarCaracteres(cadena,a,b);

	Ordenar(vacuna, 4);

	return EXIT_SUCCESS;
}


float aplicarAumento(float Precio)
{
	float Porcentaje;
	float Aumento;

	Porcentaje=5*Precio/100;
	Aumento=Precio+Porcentaje;

	return Aumento;
}

int reemplazarCaracteres(char* cadena, char caracter1,char caracter2)
{
	int rtn=0;
	if(cadena!=NULL)
	{
		for(int i=0;cadena!='\0';i++)
		{
			if(cadena[i]==caracter1)
			{
				cadena[i]=caracter2;
				rtn++;
			}
		}
	}

	return rtn;
}


int Ordenar(eVacuna lista[],int longitud)
{
	int rtn=0;
	eVacuna Aux;

		if(lista!=NULL && longitud>0)
		{
			for(int i=0;i<longitud-1;i++)
			{
				for(int j=i+1;j<longitud;j++)
				{
					if( lista[i].tipo > lista[j].tipo || (lista[i].tipo == lista[j].tipo && lista[i].efectividad > lista[j].efectividad))
					{
						Aux=lista[i];
						lista[i]=lista[j];
						lista[j]=Aux;
					}
				}
			}

			rtn=1;
			printf("Ordenamiento Exitoso\n");
		}

	return rtn;
}
