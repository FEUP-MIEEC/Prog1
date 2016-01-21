#include <stdio.h>
#include "complexo.h"

int main() {

    complexo c1, c2;

    printf("Insira um número complexo z1 (x + yi):");
    c1 = leComplexo();

    printf("Insira um número complexo z2 (x + yi):");
    c2 = leComplexo();

    printf("z1 = ");
    escreveComplexo(c1);
    printf("\n");
    printf("z2 = ");
    escreveComplexo(c2);
    printf("\n");

    printf("A soma dos dois números complexos é: ");
    printf("%d + %di\n", somaComplexo(c1, c2).real, somaComplexo(c1, c2).img);
    printf("|z1| = %lf\n", modComplexo(c1));
    printf("|z2| = %lf\n", modComplexo(c2));

    printf("arg(z1) = %lf\n", argComplexo(c1));
    printf("arg(z2) = %lf\n", argComplexo(c2));
}
