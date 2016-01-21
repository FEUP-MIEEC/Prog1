#include <stdio.h>

float parabola(int a, float x) {
    return a * (x * x);
}

int main() {

    int a, limiteInf, limiteSup;
    float incr;

    printf("Qual o valor de a? ");
    scanf("%d", &a);

    printf("Qual o intervalo? ");
    scanf("%d %d", &limiteInf, &limiteSup);

    printf("Qual o valor do incremento? ");
    scanf("%f", &incr);

    float x = limiteInf;

    while (x <= limiteSup) {

        printf("f(%.1f)= %.1f \n", x, parabola(a, x));
        x += incr;
    }
}
