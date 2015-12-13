/*
 *  Created on: 14/11/2015
 *      Author: Fábio Gaspar
 */

#include <stdio.h>

int main() {
    int num_i, num, p_fact = 1, d = 2;
    /*
    num_i : número incial
    num : vai assumir 'num_i' e vai ser dividido por números primos para obter respetivos factores
    p_fact : variável usada para guardar o produto de fatores e usado no cliclo While como condição
    d : variável que vai tomar valores [2, num_i] e o fator atualmente a ser testado
    */
    printf("Insira um numero: ");
    scanf("%d", &num_i);

    num = num_i;
    while (p_fact != num_i) {
        if (num % d == 0) {
            num /= d;
            p_fact *= d;
            printf("%d ", d);
        }
        else d++;
    }
}