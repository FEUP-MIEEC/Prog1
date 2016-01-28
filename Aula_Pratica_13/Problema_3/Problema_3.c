#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int i = 0, j = 0, k = 0, w = 0, fr = 0, l;
    char **v = NULL, **a = NULL, val[100] = {};
    while (fgets(val, 100, stdin) != NULL) {
        if (j == 0) {
            v = (char **) malloc(sizeof(char *) * (j + 1));
        }
        else {
            v = (char **) realloc(v, sizeof(char *) * (j + 1));
        }
        v[j]=strdup(val);
        j++;
    }
    printf("\n\n%d\n\n", j);
    for (k = 0; k <= j - 1; k++) {
        for (i = k+1; i <= j - 2; i++) {
            if (strcmp(v[k],v[i])==0) {
                for (l = i; l < j - 1; l++) {
                    v[l]=strdup(v[l+1]);
                }
                v[j-1]=NULL;
                free(v[j-1]);
                j--;
                v = (char **) realloc(v, sizeof(char *) * (j + 1));
            }
        }
    }
    printf("\n\n%d\n\n", j);
    for (w = 0; w < j; w++) {
        printf("%s", v[w]);
    }
}