#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 0, j = 0, k = 0, x = 0, w = 0, pos = -1, write = 1;
    char **v = NULL, **a = NULL, val[100] = {};
    while (fgets(val, 100, stdin)) {
        if (j == 0) {
            v = (char **) malloc(sizeof(char) * (j + 1));
        }
        else {
            v = (char **) realloc(v, sizeof(char) * (j + 1));
        }
        v[j] = val;
        j++;
    }
    printf("\n\n%d\n\n", j);
    for (k = 0; k < j; k++) {
        for (i = 0; i <= j; i++) {
            if (v[k] == v[i]) {
                write = 0;
                break;
            }
            write = 1;
        }
        if (write) {
            pos++;
            if (pos == 0) {
                a = (char **) malloc(sizeof(char) * (pos + 1));
            }
            else {
                a = (char **) realloc(a, sizeof(char) * (pos + 1));
            }
            a[pos] = v[k];
        }
    }
    for (w = 0; w < j; w++) {
        printf("%s", a[w]);
    }
}
