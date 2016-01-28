/*
 *  Created on: 16/11/2015
 *      Author: Gonçalo Pereira
 */
#include <stdio.h>

int main() {
    int n;
    char a;

    while (scanf("%d %c", &n, &a) == 2) {
        switch (a) {
            case 'b':
                printf("%d	Conversão Indisponível\n", n);
                break;
            case 'o':
                printf("%d	%o\n", n, n);
                break;
            case 'h':
                printf("%d	%x\n", n, n); //entre os valores pode ser também usado \t
                break;
            default:
                break;
        }
    }
}
