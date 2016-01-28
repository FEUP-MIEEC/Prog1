#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NPRODUTOS 55

typedef struct {
	char nome [50];
	float preco;
	int stock;
	} produto;

int ler_produtos (produto *loja);
void lista_produtos (produto *loja, int n);
float guarda_loja (produto *loja, int n, char *nomeFicheiro);

int main () {
	
	produto loja[NPRODUTOS];
	int nprodutos;
	float valor;
	
	nprodutos = ler_produtos(loja);
	
	printf("Lista de produtos carregada (%d produtos)\n", nprodutos);
	lista_produtos(loja, nprodutos);
	
	valor = guarda_loja(loja, nprodutos, "loja.txt");
	printf("Produtos guardados com o valor de: %.2f\n", valor);
	
	return 0;
}

int ler_produtos (produto *loja)
{
	int i=0;
	char string[100];
	while(scanf("%s %s %f %d ", &loja[i].nome, &string, &loja[i].preco, &loja[i].stock)==4 && i<NPRODUTOS)
	{
		strcat(loja[i].nome," ");
		strcat(loja[i].nome,string);
		i++;
	}
	return i;
}

float guarda_loja (produto *loja, int n, char *nomeFicheiro)
{
	FILE *p;
	int i=0;
	p=fopen(nomeFicheiro,"w+");
	while(i<n)
	{
		fprintf("%s %f %d", loja[i].nome, loja[i].preco. loja[i].stock);
		i++;
	}
	fclose(p);
}

void lista_produtos (produto * loja, int n) {
	
	int i;
	for (i=0; i<n; i++){
		printf("Nome: %s, preco: %.2f, stock: %d\n", loja[i].nome, loja[i].preco, loja[i].stock);
	}
}
