#include <stdio.h>

int main() {
    unsigned int x, y, counter = 0;

    printf("Insira um operando: ");
    scanf("%d", &x);
    printf("Insira outro operando (potencia de base 2): ");
    scanf("%d", &y);

    /*fatorizar o y, para saber quantos bits se vão deslocar*/
    while (y % 2 == 0) {
        counter++;
        y /= 2;
    }

    printf("%d\n", x << counter);

}
