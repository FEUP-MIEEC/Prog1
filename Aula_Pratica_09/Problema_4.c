#include <stdio.h>

void imprimir_vetor(float v[]) {
    printf("Vetor: {");
    for (int i = 1; i < 10; ++i) {
        printf("%.1f", v[i]);

        if (i != 10) {
            printf(" ");
        }
    }

    printf("}\n");
}

void preencher_vetor(float v[]) {
    for (int i = 0; i < 10; ++i) {
        printf("Introduza o elemento %d: ", i + 1);
        scanf("%f", &v[i]);
    }

}

float avg(float v[]) {
    float sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += *(v + i); // ou simplesmente v[i]
    }

    return sum / 10.0;
}

float max(float v[]) {
    float max = 0;
    for (int i = 0; i < 10; ++i) {
        if (max < v[i]) {
            max = v[i];
        }
    }

    return max;
}

float min(float v[]) {
    float min = 0;
    for (int i = 0; i < 10; ++i) {
        if (min > v[i]) {
            min = v[i];
        }
    }

    return min;
}

int main() {
    float v[10];

    preencher_vetor(v);
    printf("Media: %.2f\n", avg(v));
    printf("Maximo: %.1f\n", max(v));
    printf("Minimo: %.1f\n", min(v));
    imprimir_vetor(v);
}
