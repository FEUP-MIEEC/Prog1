/*
 *  Created on: 18/12/2015
 *      Author: Fábio Gaspar
 */

#include <stdio.h>
#include <string.h>

void desloca(char *texto, char *cifra, int shift);

char converte(char c, int shift);

int main() {
    char str[100], cifra[100] = {0};
    int shift;

    printf("texto? ");
    fgets(str, 100, stdin);

    printf("shift? ");
    scanf("%d", &shift);

    /* Remove '\n' substituindo-o por '\0' */

    str[strlen(str) - 1] = '\0';

    desloca(str, cifra, shift);

    printf("cifra: %s", cifra);

}

void desloca(char *texto, char *cifra, int shift) {

    for (int i = 0; i < strlen(texto); ++i) {
        cifra[i] = converte(texto[i], shift);
    }

}

char converte(char c, int shift) {

    int ascii = (int) c, encrypt;
    if (ascii >= 97 && ascii <= 122) {
        encrypt = (ascii + shift - 97) % 26;

        if (encrypt < 0) {
            return 123 + encrypt;
        }
        else return encrypt + 97;
    }

    else return c;

}