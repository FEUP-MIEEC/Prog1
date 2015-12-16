#include <stdio.h>

int multiplicacao(int primeiroNumero, int segundoNumero);

int main() {
    int n1, n2;
    printf("Insira dois números para multiplicar: ");
    scanf("%d %d", &n1, &n2);
    printf("O resultado é: %d\n", multiplicacao(n1, n2));
}

int multiplicacao(int primeiroNumero, int segundoNumero) {
    if (segundoNumero == 0)return 0;
    else return primeiroNumero + multiplicacao(primeiroNumero, segundoNumero - 1);
}