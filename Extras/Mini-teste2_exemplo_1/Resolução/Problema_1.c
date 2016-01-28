#include <stdio.h>

int ler_volumes(float *volumes) {
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%f", &volumes[i]);
    }
    return n;
}

float volume_medio(float *volumes, int nvolumes, float max, float min) {
    int i, k = 0;
    float sum = 0;
    for (i = 0; i < nvolumes; i++) {
        if (volumes[i] >= min && volumes[i] <= max) {
            sum += volumes[i];
            k++;
        }
    }
    return sum / (float) k;
}

int main() {
    float v[1000];
    float min, max;
    int n = ler_volumes(v);
    printf("Foram lidos %d valores\n", n);
    scanf("%f", &min);
    scanf("%f", &max);
    printf("Indique o valor minimo: %f\n", min);
    printf("Indique o valor maximo: %f\n", max);
    printf("O volume medio de enchimento foi de %.3f litros\n", volume_medio(v, n, max, min));
}
