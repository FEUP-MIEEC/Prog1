/*
 *  Created on: 02/12/2015
 *      Author: Fábio Gaspar
 */
#include <stdio.h>

int contaRepeticao(int v[], int tamanhoVetor, int numero) {
    int seq_maior = 0, i;

    for (i = 0; i < tamanhoVetor; ++i) {
        int seq_atual = 0;

        if (v[i] == numero) {
            /* primeira correspondência encontrada. Vamos verificar se os seguintes também são o número a procurar */
            int j = i;
            while (v[j] == numero) {
                seq_atual++;
                j++;
            }

            if (seq_atual > seq_maior) {
                seq_maior = seq_atual;
            }

            i = j + 1;
            /*[otimização]
            Todos os números até o indice 'j' foram verificados, logo 'i' deve passar a ser o seguinte 'j+1'
            */
        }
    }

    return seq_maior;
}

int main() {

    int v[20], j, count = 1, num, x = 0;
    /*
    Ao declarar um vetor, é necessário definir o tamanho do mesmo (número de elementos)
    Optou-se por usar o valor 20, mas poderia ser outro qualquer
    */

    for (j = 0; (j < 20) && (x >= 0); j++) {
        printf("Introduza um numero: ");
        scanf("%d", &x);
        v[j] = x;
    }
    printf("Fim da insersão de números\n");

    printf("Numero a pesquisar: ");
    scanf("%d", &num);

    printf("Maior sequencia com numeros %d tem tamanho %d\n", num, contaRepeticao(v, 20, num));
}
