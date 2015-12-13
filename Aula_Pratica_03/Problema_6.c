/*
 *  Created on: 28/10/2015
 *      Author: Gonçalo Pereira
 */

#include <stdio.h>

int quadrante(int x, int y) {

    if (x > 0 && y > 0) {
        return 1;
    } else if (x > 0 && y < 0) {
        return 4;
    } else if (x < 0 && y > 0) {
        return 2;
    } else if (x < 0 && y < 0) {
        return 3;
    } else {
        return 0;
    }
}

int main() {

    int x, y, q;

    printf("Indique o ponto (x,y)\n");
    printf("x = ");
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);

    q = quadrante(x, y);

    if (q == 0) {
        printf("O ponto está na origem do referêncial\n");
    }
    else {
        printf("O ponto está no %dº quadrante\n", q);
    }
    return 0;
}

