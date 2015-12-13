/*
 *  Created on: 28/10/2015
 *      Author: Gonçalo Pereira
 */

#include <stdio.h>

int main() {
    int segundos, minutos, horas, dias;

    printf("Insere um numero de segundos ");
    scanf("%d", &segundos);

    dias = segundos / (24 * 60 * 60);
    horas = (segundos - dias * (24 * 60 * 60)) / (60 * 60);
    minutos = (segundos - horas * (60 * 60) - dias * (24 * 60 * 60)) / 60;
    segundos = (segundos - minutos * (60) - horas * (60 * 60) - dias * (24 * 60 * 60));

    printf("%d dias, %d horas, %d minutos, %d segundos.\n", dias, horas, minutos, segundos);

    return 0;
}
