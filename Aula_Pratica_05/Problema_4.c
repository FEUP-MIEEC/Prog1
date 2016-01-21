#include <stdio.h>

int main() {
    int n;
    printf("Insira o número: ");
    scanf("%d", &n);
    printf("O número invertido é: ");
    while (n > 0) {
        printf("%d", n % 10);
        n = n / 10;
    }
    printf("\n");
    return 0;
}
