#include <stdio.h>

int main() {
    int l, j, i;
    printf("Insira o número de linhas: ");
    printf("\n");
    scanf("%d", &l);
    for (i = 1; i != l; i++) {
        j = 1;
        while (j < (l + i - 1)) {
            if (j < (l - i)) {
                printf("_");
            }
            else {
                printf("*");
            }
            j++;
        }
        printf("\n");
    }
    l++;
    for (i = 1; i <= l - 2; i++) {
        if (i == l - 2) {
            printf("*");
        } else {
            printf("_");
        }
    }
    printf("\n");
}
