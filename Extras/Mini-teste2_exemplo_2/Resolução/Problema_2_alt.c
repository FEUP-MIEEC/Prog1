#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N_PECAS 100
#define MAX_NOME 32

typedef struct{
	char nome[MAX_NOME];
	int quantidade;
	float preco;
} peca;


int ler_pecas(peca modelo[]);
peca* lista_compras(peca modelo[], int Nm, float limite, int *Nc);
void guarda_lista(peca lista[], int n, char *nomeFicheiro);
void lista_pecas(peca modelo[], int n);

int main()
{
	peca modelo[N_PECAS], *compras;
	int nPecas, nCompras=0;
	
	nPecas = ler_pecas(modelo);
	printf("\n*** Lista de pecas (%d) ***\n", nPecas);
	lista_pecas(modelo, nPecas);
	printf("\n");

	compras = lista_compras(modelo, nPecas, 50, &nCompras);
	printf("\n*** Lista de compras (%d) ***\n", nCompras);
	lista_pecas(compras, nCompras);
	printf("\n");

	guarda_lista(compras, nCompras, "compras.txt");
	return 0;
}

/* Le todas as pecas do modelo para o vetor modelo e retorna 
   numero de pecas armazenadas nesse vetor */
int ler_pecas(peca modelo[])
{
	int i=0;
	while(scanf("%s %d %f", modelo[i].nome, &modelo[i].quantidade, &modelo[i].preco)==3){
		printf("%s %d %f\n\n", modelo[i].nome, modelo[i].quantidade, modelo[i].preco);
		i++;
	}
	
	return i;
}

/* Retorna um vetor contendo a lista de compras. O numero de 
   elementos nesse vetor e devolvido por referencia no parametro Nc. 
   Os parametros modelo e Nm sao o vetor com as pecas do modelo e 
   o respetivo tamanho. O parametro limite indica o limite de custo por peca. */
peca* lista_compras(peca modelo[], int Nm, float limite, int *Nc)
{
	peca* lr;
	*Nc=0;
	lr=(peca*) malloc(sizeof(peca)*1);
	int i=0, j=0;
	for(i=0;i<Nm;i++){
		if (modelo[i].quantidade*modelo[i].preco<limite){
			lr=(peca*) realloc(lr, sizeof(peca)*(i+1));
			strcpy(lr[*Nc].nome, modelo[i].nome);
			lr[*Nc].quantidade=modelo[i].quantidade;
			lr[*Nc].preco=modelo[i].preco;
			(*Nc)++;
		}
	}
	
	return lr;
}

/* Guarda no ficheiro com nome especificado por nomeFicheiro a lista de compras. 
   Os parametros lista e n sao o vetor com a lista de compras e o respetivo tamanho. */
void guarda_lista(peca lista[], int n, char *nomeFicheiro)
{
	int index;
	FILE *f;
	f=fopen(nomeFicheiro, "w");
	for (index = 0 ; index < n ; index++)
	fprintf(f, "%s - %d - %.2f\n", lista[index].nome, lista[index].quantidade, lista[index].preco);
	
}


/* Lista os medicamentos representados na lista de medicamentos */
void lista_pecas(peca modelo[], int n) {
	int index;
	if (modelo == NULL)
		return;
	for (index = 0 ; index < n ; index++)
		printf("%s - %d - %.2f\n", modelo[index].nome, modelo[index].quantidade, modelo[index].preco);
}
