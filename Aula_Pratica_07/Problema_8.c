#include <stdio.h>

void converte(char c) {
    int diff = 'a' - 'A';
    if (c >= 'A' || c <= 'Z')
        c = c - diff;
    else
        c = c + diff;
    if (c == 'A')
        printf(":)\n");
    else
        printf(":(\n");
}

int main() {
    char c = 'a';
    converte(c);
    return 0;
}
