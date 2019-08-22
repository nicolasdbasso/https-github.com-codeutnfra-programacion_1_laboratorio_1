/*
 ============================================================================
 Name        : sumaa.c
 Author      : Nicolas
 Version     :
 Copyright   : GLP 3
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int pideSuma (int* suma);

int main(void) {
	int resultado;
	if (pideSuma (&resultado) == 0){
		printf ("El resultado es: %d.",resultado);
	}else{
		printf("ERROR");
	}
	return 0;
}

int pideSuma (int* suma){
	int valorA;
	int valorB;

	printf ("Vamos a realizar una suma.\n");
	printf ("Indique el primer valor: ");
	scanf ("%d", &valorA);
	printf ("Indique el segundo valor: ");
	scanf ("%d", &valorB);
	*suma = valorA + valorB;
	return 0;
}
