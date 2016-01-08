#include "player.h"

#define num_naipes 4
#define num_cartas 13

typedef struct {
	char valor;
	char naipe;

} carta;


void criaBaralho(carta * baralho);

void shuffle(carta* baralho);

carta escolheCarta(carta * baralho);

int comparaCarta(carta c1, carta c2);

void imprimeCarta(jogador j, carta c);

void imprimeBaralho(carta* baralho);


