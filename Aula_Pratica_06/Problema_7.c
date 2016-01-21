#include <stdio.h>

void perfeito(int n) {
    int soma = 0, i;
    for (i = 1; i < n; i++) {
        if (n % i == 0)
            soma += i;
    }
    if (soma == n)
        printf(":)\n");
    else
        printf(":(\n");
}

int main() {
    unsigned int n;
    printf("Insira um número perfeito: ");
    scanf("%d", &n);
    perfeito(n);
    return 0;
}
