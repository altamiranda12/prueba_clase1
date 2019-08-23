/*
 ============================================================================
 Name        : Clase1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int pideSuma(int * resultado);

int main(void) {


	int resultado;


	if(pideSuma(&resultado)==0){
		printf("el resultado es %d",resultado);
	}
	else{
		printf("EROR!");
	}
	return 0;
}

int pideSuma(int* resultado){
	int numero1;
	int numero2;
	printf("Ingrese el primer numero:");
	scanf("%d",&numero1);
	printf("Ingrese el segundo numero:");
	scanf("%d",&numero2);
	*resultado=numero1+numero2;

	return 0;
}

