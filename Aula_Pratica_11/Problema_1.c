#include <string.h>
#include <stdio.h>

#define M 100

void inverte(char *strOriginal, char *strInvertida);

int main() {
    char f[M], inf[M];
    fgets(f, M, stdin);
    inverte(f, inf);
    printf("%s", inf);
    return 0;
}

void inverte(char *strOriginal, char *strInvertida) {
    int i, j = strlen(strOriginal) - 1;
    for (i = 0; i < strlen(strOriginal); ++i) {
        strInvertida[i] = strOriginal[j];
        j--;
    }
}