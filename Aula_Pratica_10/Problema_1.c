/*
 *  Created on: 08/12/2015
 *  Author: Fábio Gaspar
 */
#include <stdio.h>

int procuraTodos(int *v, int N, int x, int *posicoes, int *nPosicoes);

int main()
{
    int v[100], N, x, posicoes[100], nPosicoes, i;

    printf("Qual é o tamanho do vetor? ");
    scanf("%d", &N);
    printf("Insira uma série de números: ");
    for (i = 0; i < N; i++) {
        printf("Insira o %dº número", i + 1);
        scanf("%d", v[i]);
    }

    return 0;
}

int procuraTodos(int *v, int N, int x, int *posicoes, int *nPosicoes) {

    return 0;
}