/*
 ============================================================================
 Name        : Trabajo.c
 Author      : Leonardo Blanco
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include "tp.h"

int main(void) {
	int numeroA;
	int numeroB;
	int resultadoInt;
	float resultadoFloat;

	tp_pidoDatos(&numeroA,&numeroB);
	switch(tp_menu(numeroA, numeroB))
	{
		case 'a':
			resultadoInt = tp_suma(numeroA, numeroB);
			printf("La suma de %d y %d es de %d", numeroA, numeroB, resultadoInt);
			break;
		case 'b':
			resultadoInt = tp_resta(numeroA, numeroB);
			printf("La resta de %d y %d es de %d", numeroA, numeroB, resultadoInt);
			break;
		case 'c':
			if(tp_division(numeroA, numeroB)!= 0)
			{
			resultadoFloat = tp_division(numeroA, numeroB);
			printf("La division de %d y %d es de %f", numeroA, numeroB, resultadoFloat);
			}
			else
			{
				printf("ERROR, es imposible dividir por 0");
			}
			break;
		case 'd':
			resultadoInt= tp_multiplicacion(numeroA, numeroB) ;
			printf("La multiplicacion de %d y %d es de %d", numeroA, numeroB, resultadoInt);
			break;
		case 'e':
			resultadoInt= tp_factorial(numeroA);
			printf("El factorial de A es:%d y el ", resultadoInt);
			resultadoInt= tp_factorial(numeroB);
			printf("factorial de B es:%d", resultadoInt);
			break;
		default:
			printf("ERROR, no es valida la opcion");
	}
return 0;
}

