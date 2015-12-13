/*
 *  Created on: 20/11/2015
 *      Author: Daniel Silva
 */
#include <stdio.h>
#include <math.h>

int main() {
    double no, n;

    int d, c = 0;
    printf("Insira um número inteiro: ");
    scanf("%lf", &n);
    no = n;
    printf("Introduza um dígito: ");
    scanf("%d", &d);

    while (n > 1) {
        n = n / 10;
        if (d == (int) round(((n - trunc(n)) * 10))) {
            c++;
        }
        n = trunc(n);
    }


    printf("O dígito %d aparece %d vezes no número %.0f\n", d, c, no);
    return 0;
}
