#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int i = 0, j = 0, k = 0, x = 0, w = 0, z = 0;
    char **v = NULL, **a = NULL, val[100];
    while (fgets(val, 100, stdin)) {
        //scanf("%s", &val);
        if (j == 0) {
            v = (char **) malloc(sizeof(char *) * (j + 1));
        }
        else {
            v = (char **) realloc(v, sizeof(char *) * (j + 1));
        }
        v[j] = strdup(val);
        j++;
    }


    for (k = 0; k < j; k++) {
        for (i = 0; i < j; ++i) {
            if (v[k] == v[i]) {
                x++;
            }
        }
        if (x == 0) {
            a[k] = v[k];
            z++;
        }
    }
    for (w = 0; w < z; ++w) {
        printf("%s ", a[z]);
    }
}