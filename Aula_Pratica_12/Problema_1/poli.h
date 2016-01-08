/*
 *      Author: Fábio Gaspar
 */
#ifndef _POLI_H
#define _POLI_H

//Lê os polinómios de grau máximo 10
int lerPoli(int *poli);

//Escreve os polinómios com a notção a10*x¹⁰ + ... + a0*x⁰
void escrevePoli(int *poli, int grau);

//Faz a soma de dois polinómios
void adicionaPoli(int *p1, int *p2, int *pRes, int maiorGrau);

//Calcula p(x), 'x' um valor real
float calc(int *poli, int grau, float x);

#endif
