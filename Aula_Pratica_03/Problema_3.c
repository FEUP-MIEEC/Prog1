/*
 *  Created on: 16/12/2015
 *      Author: Fábio Gaspar
 */

#include <stdio.h>

int main()
{
    float h;

    printf("Qual a altura da pessoa? ");
    scanf("%f", &h);

    if (h < 1.3)
    {
        printf("Essa pessoa e' baixíssima.\n");
    }
    else if (h >= 1.3 && h < 1.6)
    {
        printf("Essa pessoa e' baixa.\n");
    }
    else if (h >= 1.6 && h < 1.75)
    {
        printf("Essa pessoa e' mediana.\n");
    }
    else if (h >= 1.75 && h < 1.9)
    {
        printf("Essa pessoa e' alta.\n");
    }
    else if (h >= 1.9)
    {
        printf("Essa pessoa e' altissima.\n");
    }
}
