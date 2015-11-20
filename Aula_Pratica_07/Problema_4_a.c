/*
 *  Created on: 20/11/2015
 *  Author: Fábio Gaspar
 *  Alternativa
 */
#include <stdio.h>
#include <stdlib.h>

void generator(int *x1, int *x2){
	*x1 = (rand() % 100) + 1;
	*x2 = (rand() % 100) + 1;
}

int main()
{
	int r_ans, r_input, r_corretas, x1=0, x2=0, errado=0, opr=0;
	
	//TODO: Falta contar as respostas acertadas à primeira
	//TODO: Falta arranjar forma de encerrar o programa e mostrar respostas acertadas
	while(1){
		opr = rand() % 2 + 1;
		switch(opr)
		{
			case 1: 
			//Adição
			generator(&x1, &x2);
			errado=1;
			while(errado){
				printf("Quanto e' %d mais %d: ", x1, x2);
				scanf("%d", &r_input);
				r_ans = x1+x2;
				if (r_ans==r_input)
				{
					printf("Muito bem!\n");
					r_corretas++;
					errado=0;
				}
				else{
					/* Estudasses */
					printf("Esta errado, tenta outra vez!\n");
					}
			}		

			case 2: 
			//Multiplicação
			generator(&x1, &x2);
			errado=1;
			while(errado){
				printf("Quanto e' %d vezes %d: ", x1, x2);
				scanf("%d", &r_input);
				r_ans = x1*x2;
				if (r_ans==r_input)
				{
					printf("Muito bem!\n");
					r_corretas++;
					errado=0;
				}
				else{
					/* Estudasses */
					printf("Esta errado, tenta outra vez!\n");
				}
			}
			

		}
	}

}