/* Escreva um programa em C que contenha uma matriz 3X6 de n�meros reais digitados pelo usu�rio. 
Caso haja n�meros negativos troque seu conte�do pelo n�mero 1. Por fim, mostre a matriz atualizada.  */

#include <stdio.h>
#include <stdlib.h>
#define LIN 3
#define COL 6

main () {
	float matriz [LIN] [COL];
	int i,j; //sempre int, ou seja, variaveis inteiras
	
	for (i=0;i<LIN;i++) {
		for (j=0;j<COL;j++) {
			printf("matriz [%d] [%d] :",i,j);
			scanf ("%f",&matriz[i] [j]);
		}
	}
	
	for (i=0;i<LIN;i++) {
		for (j=0;j<COL;j++) {
			if (matriz[i] [j]<0) {
				matriz[i] [j]=1;
			}
			printf ("\n");
		}
		system("pause");
	}
}
