#include <string.h>
#include <stdio.h>

#define M 100

void inverte(char *strOriginal, char *strInvertida);

int main() {
    int i;
    char f[M], inf[M];
    fgets(f, sizeof(f), stdin);
    inverte(f, inf);
    for (i = 0; i < strlen(f); ++i) {
        printf("%c", inf[i]);
    }
    return 0;
}

void inverte(char *strOriginal, char *strInvertida) {
    int i, j = strlen(strOriginal) - 1;
    for (i = 0; i < strlen(strOriginal); ++i) {
        strInvertida[i] = strOriginal[j];
        j--;
    }
}