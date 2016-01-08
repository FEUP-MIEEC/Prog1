/*
 *      Author: Fábio Gaspar
 */
#include <stdio.h>
#include "datas.h"

int main(void) {

    int day, month, year, k;
    char dest[20];
    data d;

    while (1) {
        printf("Insira a data (dd/MM/YYYY): ");
        scanf("%d %d %d", &d.dia, &d.mes, &d.ano);

        if (!dataValida(d)) {
            printf("A data inserida é inválida!!\n");
        }
        else break;
    }

    printf("Quantos dias pretende avançar?: ");
    scanf("%d", &k);

    printf("Nova data: ");
    escreveData(dest, somaDias(d, k));
}
