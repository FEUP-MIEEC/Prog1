#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "cards.h"

char valores[num_cartas] = {'2', '3', '4', '5', '6', '7', '8', '9', 'd', 'j', 'q', 'k', 'a'};
char naipes[num_naipes] = {'C', 'E', 'O', 'P'};

void criaBaralho(carta *baralho) {
    carta c;

}

void shuffle(carta *baralho) {


}

carta escolheCarta(carta *baralho) {
    int n = num_cartas * num_naipes;
    return baralho[rand() / (RAND_MAX / (n + 1))];

}

int comparaCarta(carta c1, carta c2) {
    return 0;

}

void imprimeCarta(jogador j, carta c) {
    printf("A carta para o jogador %s é: %c%c\n", j.nome, c.valor, c.naipe);
}

void imprimeBaralho(carta *baralho) {

    int i, j;
    for (i = 0; i < num_naipes * num_cartas; i++) {
        if (i % (num_cartas) == 0 && i > 0)
            printf("\n");
        printf("%c%c ", baralho[i].valor, baralho[i].naipe);
    }
    printf("\n\n");
}



