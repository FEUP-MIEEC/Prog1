/*
 *  Created on: 28/10/2015
 *      Author: Gonçalo Pereira
 */

#include <stdio.h>

int main() {
    int n, m;

    printf("Insere um número ");
    scanf("%d", &n);
    printf("Insere outro número ");
    scanf("%d", &m);

    if (n % m == 0) {
        printf("O número %d é múltiplo de %d\n", n, m);
    }
    else {
        printf("O número %d não é múltiplo de %d\n", n, m);
    }
    return 0;
}
