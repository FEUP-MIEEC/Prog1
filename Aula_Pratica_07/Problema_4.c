/*
 *  Created on: 20/11/2015
 *      Author: Daniel Silva
 *
 * Com erros!
 *
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gerar(int l, int h) {
    srand(time(NULL) * rand());
    return rand() % h + l;
}

int main() {
    int a, b, op, status = 0, r, crp = 0;
    while (1) {
        a = gerar(1, 100);
        b = gerar(1, 100);
        op = gerar(1, 2);
        switch (op) {
            case 1:
                while (status == 0) {
                    printf("Quanto é %d mais %d? ", a, b);
                    scanf("%d", &r);
                    if (r == a + b) {
                        status = 1;
                        printf("Muito Bem!\n");
                        crp++;
                    } else {
                        printf("Está errado, tenta outra vez!\n");
                    }
                }
                break;
            case 2:
                while (status == 0) {
                    printf("Quanto é %d vezes %d? ", a, b);
                    scanf("%d", &r);
                    if (r == a * b) {
                        status = 1;
                        printf("Muito Bem!\n");
                        crp++;
                    } else {
                        printf("Está errado, tenta outra vez!\n");
                    }
                }
                break;
            default:
                printf("Something went wrong\n");
                break;
        }
    }
}
