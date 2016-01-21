#include <stdio.h>

int main() {
    double numero, decimal;
    int inteiro;

    printf("Insere um número decimal ");
    scanf("%lf", &numero);

    inteiro = numero;
    decimal = numero - inteiro;

    printf("O número é %.3f\nA parte inteira é %d\nA parte decimal é %f\n", numero, inteiro, decimal);

    return 0;
}
