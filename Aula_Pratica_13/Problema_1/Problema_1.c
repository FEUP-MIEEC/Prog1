#include <stdio.h>
#include <stdlib.h>

int main() {
    int *v, j, i, *med, k;
    v = (int *) malloc(1);
    med = (int *) malloc(1);
    for (j = 0; scanf("%d", &v[j]) == 1; j++) {
        v = (int *) realloc(v, 1);
        med = (int *) realloc(med, 1);
    }
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