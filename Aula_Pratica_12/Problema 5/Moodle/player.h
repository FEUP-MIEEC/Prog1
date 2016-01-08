typedef struct {
	char nome [50];
	int pontos;
} jogador;

jogador criaJogador(char* nome);

void imprimeJogador(jogador j);

void vencedor(jogador j1, jogador j2);
