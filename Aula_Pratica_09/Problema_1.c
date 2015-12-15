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
    int i, j;
    for (i = 0; i < 6; ++i) {
        printf("\n%d - ", i + 1);

        for (j = 0; j < prt[i]; ++j) {
            printf("*");
        }
    }

    printf("\n"); //empty line
}

int main() {
    int v[6] = {0}, i; /*Inicializa vetor com '0' em todos os indices*/

    /* initialize random seed: */
    srand(time(NULL));

    for (i = 0; i < 30; ++i) {
        v[rand() % 6] += 1;
    }

    printf("Histograma de 30 lançamentos\n");
    histograma(v);

}
