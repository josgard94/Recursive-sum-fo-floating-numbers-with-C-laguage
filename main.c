/*
	Autor:  Edgard Diaz

	This source code performs the sum of 10 number using a recursive function.
	
	Fecha: 13 - 06 - 2019
*/

#include<stdio.h>
#include<conio.h>
float suma( float numero, int contador, float resultado);
int main(int argc,char **argv)
{
	float numero  = 0;
	int contador = 1;
	float resultado = 0;
	resultado = suma(numero,contador,resultado);
	
	printf("Result of the sum: %1.0f",resultado);
	getch();
}

float suma( float numero, int contador, float resultado)
{
    printf("Give me the number %i to add: ",contador); scanf("%f",&numero);
    
    resultado += numero;
    contador += 1;
    
    if( contador > 10)  //base case, replaces the number ten with number n to increase the number of sums.
		    return resultado;
	  else
	      return suma(numero, contador, resultado);
}
