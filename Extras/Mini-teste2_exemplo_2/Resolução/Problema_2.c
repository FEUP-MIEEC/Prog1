/*
	Autor: Fábio Gaspar
*/
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
	/* problema 2.1 */
	char nome[MAX_NOME];
	int quant, count = 0;
	float preco;
	while(scanf("%s %d %f", nome, &quant, &preco)==3 && count < N_PECAS)
	{	

		strcpy(modelo[count].nome, nome);
		modelo[count].quantidade = quant;
		modelo[count].preco = preco;

		count++;
	}
	return count;
}

/* Retorna um vetor contendo a lista de compras. O numero de 
   elementos nesse vetor e devolvido por referencia no parametro Nc. 
   Os parametros modelo e Nm sao o vetor com as pecas do modelo e 
   o respetivo tamanho. O parametro limite indica o limite de custo por peca. */
peca* lista_compras(peca modelo[], int Nm, float limite, int *Nc)
{
	/* problema 2.2 */

	peca *lista;
	int i, count = 0;
	float c_total;
	lista = malloc(1);

	for (i = 0; i < Nm; ++i)
	{
		lista = realloc(lista, sizeof(peca)*(count+1));
		c_total = modelo[i].quantidade * modelo[i].preco;
		if (c_total < limite)
		{
			 lista[count] = modelo[i];
			 count ++;
		}
	}
	
	*(Nc) = count;
	return lista;
}

/* Guarda no ficheiro com nome especificado por nomeFicheiro a lista de compras. 
   Os parametros lista e n sao o vetor com a lista de compras e o respetivo tamanho. */
void guarda_lista(peca lista[], int n, char *nomeFicheiro)
{
	/* problema 2.3 */
	FILE *f;
	int i;

	f = fopen(nomeFicheiro, "w");
	for (i = 0; i < n; ++i)
	{
		fprintf(f, "%s %d %f\n", lista[i].nome, lista[i].quantidade, lista[i].preco);
	}

	fclose(f);
}


/* Lista os medicamentos representados na lista de medicamentos */
void lista_pecas(peca modelo[], int n) {
	int index;
	if (modelo == NULL)
		return;
	for (index = 0 ; index < n ; index++)
		printf("%s - %d - %.2f\n", modelo[index].nome, modelo[index].quantidade, modelo[index].preco);
}

