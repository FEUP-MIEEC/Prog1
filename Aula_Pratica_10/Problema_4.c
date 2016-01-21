#include <stdio.h>

void ordena(float notas[][2], int N);

int main() {
    int n[100][3], x;
    float notas[100][2];

    printf("Insira a quantidade de alunos: ");
    scanf("%d", &x);

    for (int i = 0; i < x; ++i) {
        printf("Introduza os dados do aluno %d: ", i + 1);
        scanf("%d	%d	 %d", &n[i][0], &n[i][1], &n[i][2]);

        notas[i][0] = n[i][0];
    }

    printf("Numero	Nota 1	Nota 2	Media\n");

    for (int i = 0; i < x; ++i) {
        float media = (float) (n[i][1] + n[i][2]) / 2;
        notas[i][1] = media;

        //printf("%d	%d	%d	%0.1f\n", n[i][0], n[i][1], n[i][2], media);
    }

    ordena(notas, x);

    //Imprimir resultados da Matriz Nx2
    printf("Numero	Media\n");
    for (int i = 0; i < x; ++i) {

        printf("%.0f	%.1f\n", notas[i][0], notas[i][1]);
    }
}

void ordena(float notas[][2], int N) {
    int i, j;
    float atual;

    for (i = 0; i < N; i++) {
        atual = notas[i][1];
        j = i - 1;

        while ((j >= 0) && (atual < notas[j][1])) {
            notas[j + 1][1] = notas[j][1];
            j = j - 1;
        }

        notas[j + 1][1] = atual;
    }

}

