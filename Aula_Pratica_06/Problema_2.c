/*
 *  Created on: 13/11/2015
 *      Author: Daniel Silva
 */

#include <stdio.h>

float pesoidealcalc(float altura, char sexo) {
    if (sexo == 'M') {
        // Sexo 'M'
        // para homens, pesoideal = 72.7×altura−58,
        return 72.7 * altura - 58;
    } else {
        // Sexo 'F'
        // para mulheres, pesoideal = 62.1×altura–44.7
        return 62.1 * altura - 44.7;
    }
}

int main() {
    float altura, pesoideal;
    char sexo;
    printf("Insira a altura da pessoa (m): ");
    scanf("%f", &altura);
    printf("Insira o sexo da pessoa(M/F): ");
    scanf(" %c", &sexo);
    if (sexo != 'M' && sexo != 'F') {
        printf("O sexo introduzido não é válido.\n");
        return 0;
    }

    printf("O peso ideal seria de %.2f kg.\n", pesoidealcalc(altura, sexo));

    return 0;
}
