#include <stdio.h>

int main() {
    float Pa, Ta, Pb, Tb;
    int anos = 0;
    printf("País A (pop/taxa):\n");
    scanf("%f %f", &Pa, &Ta);
    printf("País B (pop/taxa):\n");
    scanf("%f %f", &Pb, &Tb);

    Ta = Ta / 100;
    Tb = Tb / 100;

    for (anos; Pa > Pb; anos++) {
        Pa += Pa * Ta;
        Pb += Pb * Tb;
    }
    printf("População de B ultrapassará a de A em %d anos", anos);
    return 0;
}
