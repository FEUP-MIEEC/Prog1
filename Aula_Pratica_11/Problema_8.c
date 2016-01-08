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
    int i;

    printf("Cifra? ");
    fgets(str, 100, stdin);

    /* remove '\n' e substitui por '\0' */
    str[strlen(str) - 1] = '\0';


    for (i = 1; i < 26; ++i) {
        desloca(str, cifra, i);
        printf("com shift +%2d: %s\n", i, cifra);
    }

}

void desloca(char *texto, char *cifra, int shift) {

    for (int i = 0; i < strlen(texto); ++i) {
        cifra[i] = converte(texto[i], shift);
    }

}

char converte(char c, int shift) {

    int ascii = (int) c, decrypt;
    if (ascii >= 97 && ascii <= 122) {
        decrypt = (ascii + shift - 97) % 26;

        if (decrypt < 0) {
            return 123 + decrypt;
        }
        else return decrypt + 97;
    }

    else return c;

}