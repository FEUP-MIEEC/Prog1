#include <stdio.h>

void quociresto(int dividendo, int divisor, int *quociente, int *resto) {
    *quociente = 0;
    while (1) {
        if (dividendo >= divisor) {
            dividendo -= divisor;
            *quociente += 1;
        } else {
            *resto = dividendo;
            return;
        }
    }
}

int soma(int n) {
    int q, r, soma = 0;
    while (n > 0) {
        quociresto(n, 10, &q, &r);
        soma += r;
        n = q;
    }
    return soma;
}

int par(int n) {
    int q, r;
    quociresto(n, 2, &q, &r);
    if (r == 0) {
        return 1;
    } else {
        return 0;
    }
}


int main() {
    int op;
    printf("Indique a função a executar:\n");
    printf("[1] Verificar Paridade:\n");
    printf("[2] Somar algarismos:\n");
    printf("[3] Divisão Inteira:\n");
    printf("[1-3]: ");
    while (1) {
        scanf("%d", &op);
        if (op > 3 || op < 1) {
            printf("O valor inserido não é válido. Tente novamente.\n[1-3]: ");
        }
        else {
            break;
        }
    }
    switch (op) {
        case 1: {
            int a;
            printf("Insira o número: ");
            scanf("%d", &a);
            if (par(a)) {
                printf("%d é par.\n", a);
            } else {
                printf("%d não é par.\n", a);
            }
        }
            break;
        case 2: {
            int a;
            printf("Insira o número: ");
            scanf("%d", &a);
            printf("A soma dos alarismos de %d é %d.\n", a, soma(a));
        }
            break;
        case 3: {
            int a, b, q, r;
            printf("Insira o dividendo e o divisor: ");
            scanf("%d %d", &a, &b);
            quociresto(a, b, &q, &r);
            printf("%d/%d=%d com resto=%d.\n", a, b, q, r);
        }
            break;
    }
    return 0;
}
