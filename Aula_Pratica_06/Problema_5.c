#include <stdio.h>

void draw(int l, int c, char ch) {

    /* Desenhar a primeira linha */
    int i, j;
    for (i = 0; i < c; i++) {
        printf("%c", ch);
    }
    printf("\n"); /* Mudar de linha */
    /* Desenhar as linhas intermédias */

    for (i = 0; i < l - 2; i++) {
        for (j = 0; j < c; j++) {
            /*Se estivermos na primeira (j=0)
             *ou na última (j=c) colunas,
             *desenhar o carater de margem.
             *Senão, desenhar espaço.
             */
            if (j == 0 || j == c) {
                printf("%c", ch);
            }
            else {
                printf("_");
            }
        }
        printf("\n"); /* Mudar de linha */
    }

    /* Desenha a última linha */
    for (i = 0; i < c; i++) {
        printf("%c", ch);
    }
    printf("\n"); /* Mudar de linha */
}

int main() {
    int l, c;
    char ch;
    printf("Introduza um carater: ");
    scanf(" %c", &ch);
    printf("Introduza o número de linhas: ");
    scanf("%d", &l);
    printf("Introduza o número de colunas: ");
    scanf("%d", &c);

    draw(l, c, ch);

    return 0;
}
