#include <stdio.h>

int mdc(int x, int y);

int main() {
    int num1, num2;
    printf("Insira um nu'mero: ");
    scanf("%d", &num1);
    printf("Insira o segundo nu'mero: ");
    scanf("%d", &num2);

    if (num1 >= num2) {
        printf("O m.d.c e' %d", mdc(num1, num2));
    }
    else {
        printf("O m.d.c e' %d", mdc(num2, num1));
    }

}

int mdc(int x, int y) {

    /*Assumindo x > y, sempre*/

    if (x % y != 0) {
        return mdc(y, x % y);
    }
    else return y;


}

/*
Fonte: http://www.somatematica.com.br/fundam/mdc.php
*/