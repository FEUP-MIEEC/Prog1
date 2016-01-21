#include <stdio.h>

int main() {
    char operacao, c;
    double n1, n2, r;

    printf("Bem-vindo, que operação deseja fazer? (Introduza +, -, /, * ou %%)\n");

    scanf(" %c", &operacao);
    getchar();
    printf("Insira o primeiro operando: \n");
    scanf("%lf", &n1);
    printf("Insira o segundo operando: \n");
    scanf("%lf", &n2);

    switch (operacao) {
        case '+':
            r = n1 + n2;
            break;
        case '-':
            r = n1 - n2;
            break;
        case '/':
            r = n1 / n2;
            break;
        case '*':
            r = n1 * n2;
            break;
        case '%':
            r = (int) n1 % (int) n2;

            break;
    }
    if (r < 0) {
        printf("O cálculo é (u)nário ou (b)inário?\n");
        scanf(" %c", &c);
        if (c == 'u') {
            r = -r;
        }
    }
    printf("O resultado é %f\n", r);

}