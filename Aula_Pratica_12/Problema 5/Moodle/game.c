#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "cards.h"

#define num_tentativas_max 100

int main(){
	srand(time(NULL));

	//JOGADORES
	char nome1[50], nome2[50];
	printf("Introduza o nome do jogador 1: ");
	scanf("%s",nome1);
	printf("Introduza o nome do jogador 2: ");
	scanf("%s",nome2);

	jogador jog1 = criaJogador(nome1);
	jogador jog2 = criaJogador(nome2);

	//BARALHO
	carta baralho [num_cartas*num_naipes] = {0};
	criaBaralho(baralho);	
	imprimeBaralho(baralho);
	shuffle(baralho);
	imprimeBaralho(baralho);

	//JOGO
	int tentativas = 0;
	while(tentativas < num_tentativas_max){

		carta c1 = escolheCarta(baralho);
		carta c2 = escolheCarta(baralho);

		imprimeCarta(jog1,c1);
		imprimeCarta(jog2,c2);

		jog1.pontos += comparaCarta(c1,c2);
		jog2.pontos += comparaCarta(c2,c1);
	
		imprimeJogador(jog1);
		imprimeJogador(jog2);

		if(jog1.pontos == 0 || jog2.pontos == 0)
			break; 

		tentativas++;
	}

	vencedor(jog1,jog2);	
}
