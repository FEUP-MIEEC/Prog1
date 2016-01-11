#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "cards.h"

char valores[num_cartas] = {'2', '3', '4', '5', '6', '7', '8', '9', 'd', 'j', 'q', 'k', 'a'};
char naipes[num_naipes] = {'C', 'E', 'O', 'P'};

void criaBaralho(carta *baralho) {
    int i, j, k = 0;
    for (i = 0; i < num_cartas; ++i) {
        for (j = 0; j < num_naipes; ++j, k++) {
            baralho[k].valor = valores[i];
            baralho[k].naipe = naipes[j];
        }
    }
}

void shuffle(carta *baralho) {
    int i;
    srand(time(NULL));
    for (i = 0; i < num_cartas * num_naipes; ++i) {
        int k = rand() % ((num_cartas * num_naipes) + 1);
        char temp = baralho[i].valor;
        baralho[i].valor = baralho[k].valor;
        baralho[k].valor = temp;
    }
}

carta escolheCarta(carta *baralho) {
    int n = num_cartas * num_naipes;
    return baralho[rand() / (RAND_MAX / (n + 1))];

}

int comparaCarta(carta c1, carta c2) {
    if (c1.valor > c2.valor) return 1;
    if (c1.valor == c2.valor) return 0;
    if (c1.valor < c2.valor) return -1;
    return 0;
}

void imprimeCarta(jogador j, carta c) {
    printf("A carta para o jogador %s é: %c%c\n", j.nome, c.valor, c.naipe);
}

void imprimeBaralho(carta *baralho) {
    int i;
    for (i = 0; i < num_naipes * num_cartas; i++) {
        if (i % (num_cartas) == 0 && i > 0)
            printf("\n");
        printf("%c%c ", baralho[i].valor, baralho[i].naipe);
    }
    printf("\n\n");
}



