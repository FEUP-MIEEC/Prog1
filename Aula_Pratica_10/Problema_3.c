//
// Created by Fábio Gaspar on 10/12/2015.
//

#include <stdio.h>

int main() {
    int n[4][3];

    for (int i = 0; i < 4; ++i) {
        printf("Introduza os dados do aluno %d: ", i + 1);
        scanf("%d	%d	 %d", &n[i][0], &n[i][1], &n[i][2]);
    }

    printf("Numero	Nota 1	Nota 2	Media\n");

    for (int i = 0; i < 4; ++i) {
        float media = (float) (n[i][1] + n[i][2]) / 2;
        printf("%d	%d	%d	%0.1f\n", n[i][0], n[i][1], n[i][2], media);
    }
}
