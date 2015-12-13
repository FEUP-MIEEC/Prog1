/*
 *  Created on: 28/10/2015
 *      Author: Gonçalo Pereira
 */

#include <stdio.h>

int main() {
    int numero;
    scanf("%d", &numero);

    if ((numero <= 245 && numero > 120) || (numero >= 5 && numero < 45) || (numero < -10)) {
        printf("O número está dentro do intervalo\n");
    } else {
        printf("O número NÃO está dentro do intervalo\n");
    }
    return 0;
}