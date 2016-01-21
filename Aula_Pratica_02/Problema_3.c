#include <stdio.h>

int main() {
    double c, f, k;

    printf("Insere a temperatura em graus Celsius: ");
    scanf("%lf", &c);

    k = c + 273.15;
    f = c * (9 / 5) + 32;

    printf("A temperatura em graus Kelvin é %.2f\nA temperatura em graus Fahrenheit é %.2f\n", k, f);

    return 0;
}
