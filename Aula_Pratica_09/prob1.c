/*
 *  Created on: 02/12/2015
 *      Author: Fábio Gaspar
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void histograma(int *prt) 
/*
Função só para demonstrar o 'parsing' de vetores nos parametros da função.

Nota: um vetor é ele próprio um apontador, pelo que esta notação (int *prt) é correta.
****outros exemplos equivalentes****

void histograma(int prt[]) - unsized array
void histograma(int prt[6]) - sized array

*/
{
	for (int i = 0; i < 6; ++i)
	{
		printf("\n%d - ", i+1);

		for (int j = 0; j < prt[i]; ++j)
		{
			printf("*");
		}
	}

	printf("\n"); //empty line
}

int main()
{
	int v[6] = {0}; /*Inicializa vetor com '0' em todos os indices*/

	/* initialize random seed: */
  	srand (time(NULL));

	for (int i = 0; i < 30; ++i)
	{
		int face = rand() % 6 + 1;

		/*Mais simples*/

		v[face-1] +=1;


		/* 
		**Alternativa usando o Switch (mais trabalhoso)**
		switch(face)
		{
			case 1:
			v[0] += 1;
			break;

			case 2:
			v[1] += 1;
			break;

			case 3:
			v[2] += 1;
			break;

			case 4:
			v[3] += 1;
			break;

			case 5:
			v[4] += 1;
			break;

			case 6:
			v[5] += 1;
			break;

		}*/
	}

	printf("Histograma de 30 lançamentos\n");
	histograma(v);

}
