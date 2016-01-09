/*
 *      Author: Fábio Gaspar
 */
#include <stdio.h>
#include "poli.h" 


int main() {
    int p1[10] = {0}, p2[10] = {0}, pRes[10] = {0}, maiorGrau1, maiorGrau2, a;
    float x;


    //Ler polinómios
    printf("Insira os coeficientes do polinómio p1! (Utilize Ctrl+D para terminar)\n");
    maiorGrau1 = lerPoli(p1);
    printf("Insira os coeficientes do polinómio p2! (Utilize Ctrl+D para terminar)\n");
    maiorGrau2 = lerPoli(p2);

    //Escrever polinómios
    printf("p1(x) = ");
    escrevePoli(p1, maiorGrau1);

    printf("p2(x) = ");
    escrevePoli(p2, maiorGrau2);


    //Somar os polinómios e escrever resultado
    printf("p1(x) + p2(x) = ");

    if (maiorGrau1 >= maiorGrau2) a = maiorGrau1;
    else a = maiorGrau2;

    adicionaPoli(p1, p2, pRes, a);
    escrevePoli(pRes, a);

    //Valor do polinómios para um certo valor da variável independente
    printf("Qual o valor da variável independente (x)?");
    scanf("%f", &x);
    printf("p1(%f) = %f\n", x, calc(p1, maiorGrau1, x));
    printf("p2(%f) = %f\n", x, calc(p2, maiorGrau2, x));

}
