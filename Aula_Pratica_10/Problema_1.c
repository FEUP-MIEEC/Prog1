//
// Created by Gonçalo Pereira on 11/12/2015.
//
#include <stdio.h>

int procuraTodos(int *v, int N, int x, int *posicoes, int *nPosicoes);

int main()
{
    int v[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, N, x, posicoes[100], nPosicoes = 0, z;
    printf("Que valor pretende procurar? ");
    scanf("%d", &x);
    N = 10;
    procuraTodos(v, N, x, posicoes, &nPosicoes);
    printf("Foi encontrado o número %d vezes, nas posições ", nPosicoes);
    for (z = 0; z < nPosicoes; z++) {
        printf("%d ", posicoes[z]);
    }
    return 0;
}

int procuraTodos(int *v, int N, int x, int *posicoes, int *nPosicoes) {
    int j;
    for (j = 0; j < N; ++j) {
        if (x == v[j]) {
            posicoes[*nPosicoes] = j;
            *nPosicoes += 1;
        }
    }
    if (nPosicoes > 0) return 1;
    else return 0;
}