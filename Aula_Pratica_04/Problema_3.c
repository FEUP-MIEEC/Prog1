#include <stdio.h>
#include <math.h>

int main() {
    float ca, ci, j, n;
    printf("Qual o capital inicial? ");
    scanf("%f", &ci);
    printf("Qual a taxa de juro dada pelo banco? ");
    scanf("%f", &j);
    printf("Durante quantos anos? ");
    scanf("%f", &n);

    ca = ci * pow((1 + (j / 100)), n);

    printf("O capital acumulado ao fim de %d anos é de %.3f euros\n", (int) n, ca);
    return 0;
}