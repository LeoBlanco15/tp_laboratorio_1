/*
 * tp.c
 *
 *  Created on: 3 sep. 2019
 *      Author: leoblanco15
 */
#include <stdio.h>
#include <stdlib.h>

int tp_pidoDatos(int *numeroUno, int *numeroDos)
{
	int numeroA;
	int numeroB;
	printf("Ingrese primero numero(A): ");
	scanf("%d", &numeroA);
	printf("Ingrese segundo numero(B): ");
	scanf("%d", &numeroB);
	*numeroUno= numeroA;
	*numeroDos= numeroB;
	return 0;
}
char tp_menu (int numeroUno, int numeroDos)
{
	char eleccion;

	printf("Numero A:%d \n"
			"numero B:%d \n"
			"Elija una operacion: \n"
			"A)calcular la suma \n"
			"B)calcular la resta \n"
			"C)calcular la division \n"
			"D)calcular la multiplicacion \n"
			"E)calcular el factorial \n", numeroUno, numeroDos);
	//__fpurge();
	scanf("%s", &eleccion);

	return eleccion;
}

int tp_suma (int numeroA, int numeroB)
{
	int numeroUno;
	int numeroDos;
	int suma;

	numeroUno= numeroA;
	numeroDos = numeroB;
	suma= numeroUno + numeroDos;
	return suma;
}
int tp_resta (int numeroA, int numeroB)
{
	int numeroUno;
	int numeroDos;
	int resta;

	numeroUno= numeroA;
	numeroDos = numeroB;
	resta= numeroUno - numeroDos;
	return resta;
}
float tp_division (int numeroA, int numeroB)
{
	int numeroUno;
	int numeroDos;
	float division;
	float retorno =0;

	numeroUno= numeroA;
	numeroDos = numeroB;
	if(numeroDos != 0)
	{
		division= (float)numeroUno/ numeroDos;
		retorno= division;
	}
	return retorno;
}
int tp_multiplicacion (int numeroA, int numeroB)
{
	int numeroUno;
	int numeroDos;
	int res;

	numeroUno= numeroA;
	numeroDos = numeroB;
	res= numeroUno* numeroDos;
	return res;
}
int tp_factorial (int numero)
{
	int acumulador=1;
	int contador;

	for(contador=1; contador<= numero; contador++)
	{
		acumulador = acumulador * contador;
	}

	return acumulador;
}

