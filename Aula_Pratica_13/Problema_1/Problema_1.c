#include <stdio.h>
#include <stdlib.h>

int main() {
    int *v, j = 0, i, *med, k, val;
    while (scanf("%d", &val) == 1) {
        if (j == 0)
            v = (int *) malloc(sizeof(int));
        else
            v = (int *) realloc(v, sizeof(int) * (j + 1));
        v[j] = val;
        j++;
    }
    med = (int *) malloc(sizeof(int) * (j + 1));
    for (i = 0; i < j; i++) {
        if (i == 0) {
            med[i] = (v[i] + v[i + 1]) / 2;
        }
        else if (i == j - 1) {
            med[i] = (v[i] + v[i - 1]) / 2;
        }
        else {
            med[i] = (v[i - 1] + v[i] + v[i + 1]) / 3;
        }
    }
    for (k = 0; k < j; k++) {
        printf("%d ", med[k]);
    }
}