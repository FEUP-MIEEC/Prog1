/*
 *      Author: Daniel Silva
 */

#ifndef _ARMAZEM_H
#define _ARMAZEM_H

typedef struct {
  char nome[20], marca[15], modelo[15];
  float preco;
  int armazem;
} artigo;

void leArtigo(artigo *item);

int totalArtigos(artigo armazem[], int n, char marca[], char modelo[]);

void alertaArtigos(artigo armazem[], int n);

void ordenaArtigos(artigo armazem[], int n);

void dumpA(artigo *itens, int nItens);

void afgets(char *str, int buffer);

void escreveItem (artigo *item, int i);

#endif