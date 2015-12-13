/*
 *  Created on: 28/10/2015
 *      Author: Gonçalo Pereira
 */

#include <stdio.h>

int main() {

    int n, a, b, c;

    printf("Insira um número de três digitos\n");

    scanf("%d", &n);

    a = n % 100;
    c = n % 10;


    if (a == c) {
        printf("O número é capicua\n");
    } else {
        printf("O número não é capicua\n");
    }

}

