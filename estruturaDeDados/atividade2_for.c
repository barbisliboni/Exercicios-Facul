// Crie um programa que fa�a o somat�rio de todos os n�meros entre 1 e 30. Por fim, mostre o resultado da soma. 


#include <stdio.h>
#include <stdlib.h>

main () {
	
	
		int cont, soma;
		
		soma = 0;
		
		for (cont=1;cont<=30;cont++) {
			soma = soma + cont;
		}
		 printf("Soma: %d", soma);
		
system("pause");
}


