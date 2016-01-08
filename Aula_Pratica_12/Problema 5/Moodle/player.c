#include "player.h"
#include <stdio.h>
#include <string.h>

jogador criaJogador(char *nome) {
	jogador j;
	strcpy(j.nome, nome);
	j.pontos = 20;
	return j;
}

void imprimeJogador(jogador j) {
	printf("Jogador %s com %d pontos.\n", j.nome, j.pontos);
}

void vencedor(jogador j1, jogador j2) {
	if (j1.pontos > j2.pontos)
		printf("O Jogador %s venceu!\n", j1.nome);
	else if (j1.pontos < j2.pontos)
		printf("O Jogador %s venceu!\n", j2.nome);
	else
		printf("O jogo terminou em empate!\n");
}
