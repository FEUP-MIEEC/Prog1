/*
 *      Author: Daniel Silva
 */

#include <stdio.h>
#include <string.h>
#include "armazem.h"

void afgets(char *str, int buffer){
	fgets(str, buffer, stdin);
	str[strlen(str)-1]=0;
}

void leArtigo(artigo *item){

	printf("Nome: ");
	fgets(item->nome, 20, stdin);
	item->nome[strlen(item->nome)-1]=0;
	printf("Marca: ");
	fgets(item->marca, 15, stdin);
	item->marca[strlen(item->marca)-1]=0;
	printf("Modelo: ");
	fgets(item->modelo, 15, stdin);
	item->modelo[strlen(item->modelo)-1]=0;
	printf("Preço: ");
	scanf("%f", &item->preco);
	
	printf("Stock: ");
	scanf("%d", &item->armazem);
}
void escreveItem (artigo *item, int i){
	printf("| --- Produto %d ---\n", i+1);
	printf("|	Nome: "); puts(item->nome);
	printf("|	Marca: "); puts(item->marca);
	printf("|	Modelo: "); puts(item->modelo);
	printf("|	Preço: %.2f€\n", item->preco);
	printf("|	Stock: %d\n",item->armazem);
}

void dumpA(artigo *itens, int nItens){
	int i;
	for(i=0;i<nItens;i++){
		escreveItem(&itens[i], i);
	}
}

int totalArtigos(artigo armazem[], int n, char marca[], char modelo[]){
	int i=0, c=0;
	int lista[50]={0};
	for(i=0;i<n; i++){
		//printf("Comparing %s with %s: %d\n", armazem[i].marca, marca, strcmp(armazem[i].marca, marca)); //DEBUG
		if((!strcmp(armazem[i].marca, marca) && !strcmp(armazem[i].modelo, modelo)) ){
		lista[c]=i;c++;
		}
	}
	printf("%d correspondência(s) localizada(s)\n\n", c);
	for (i=0;i<c;i++){
		escreveItem(&armazem[lista[i]], c);
	}
	return c;
}

void alertaArtigos(artigo armazem[], int n){
	int i=0, c=-1;
	int lista[50]={0};
	for(i=0;i<50; i++){
		//printf("%d\n", armazem[i].armazem); //Debug
		if( armazem[i].armazem < n && armazem[i].armazem!=0){
		c++;lista[c]=i;
		}
	}
	printf("%d artigo(s) localizado(s)\n\n", c+1);
	for (i=0;i<=c;i++){
		escreveItem(&armazem[lista[i]], i);
	}
}

void ordenaArtigos(artigo armazem[], int n){
	int i, j, min;
	artigo x;
	for(i=0;i!=n-1;i++)
	{
		min=i;
		x=armazem[i];
		for (j=i+1;j!=n;j++)
		{
			if(armazem[j].armazem<x.armazem)
			{
				min=j;
				x=armazem[j];

			}
		}
		armazem[min]=armazem[i];
		armazem[i]=x;
	}
}