#include <stdio.h>

int main() {
    float n;
    int n2;
    printf("Insere um número ");
    scanf("%f", &n);
    n2 = n + .5;
    printf("%d %d\n", n2 + 2 - n2 % 2, n2 - 2 + n2 % 2);
}