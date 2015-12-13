/*
 *  Created on: 02/12/2015
 *      Author: Fábio Gaspar
 */
#include <stdio.h>

float somatorio_vetor(float v[], int n) {
    float sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += v[i];
    }

    return sum;
}

void imprimir_vetor(float v[], int n) {
    printf("O vetor lido foi: {");
    for (int i = 0; i < n; ++i) {
        printf(" %.1f", v[i]);
    }

    printf("} e a soma dos seus elementos e' %.1f", somatorio_vetor(v, n));
}

void preencher_vetor(float v[], int n) {
    for (int i = 0; i < n; ++i) {
        printf("Introduza o elemento %d: ", i + 1);
        scanf("%f", &v[i]);
    }

    imprimir_vetor(v, n);
}

int main() {

    int x;
    float v[15] = {0};
    printf("Indique o numero de elementos que pretende armazenar?: ");
    scanf("%d", &x);

    while (x > 15) {
        printf("O numero de elementos está limitado a 15!\n");
        printf("Indique o numero de elementos que pretende armazenar?: ");
        scanf("%d", &x);
    }

    preencher_vetor(v, x);
}