/* Elaborar um programa em C que efetue o c�lculo de uma tabuada de um n�mero qualquer (digitado pelo usu�rio) 
e armazene os resultados em um vetor A para 11 elementos. Apresentar os valores armazenados no vetor. */


#include <stdio.h>
#include <stdlib.h>
#define TAM 11

    main () {
        // declara��o dos dois vetores
        int tab [TAM];
        int i, numtab;
        
        
        printf ("Digite o numero da tabuada:");
        scanf ("%d", &numtab); //indice do vetor [i] sempre o acompanha 
        }
        
        for (i=0;i<TAM;i++) {
        	tab[i] = numtab * i;
        	printf ("%d X %d = %d \n",bumtab,i,tab[i]);
		}
		
		system ("pause");
		
	}
