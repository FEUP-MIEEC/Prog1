#include <stdio.h>
#include <stdlib.h>

void generator(int *x1, int *x2) {
    *x1 = (rand() % 100) + 1;
    *x2 = (rand() % 100) + 1;
}

int main() {
    int r_ans, r_input, r_corretas = 0, x1 = 0, x2 = 0, wrong = 1, opr = 0, attempt = 0;
    /*
    *r_ans : variável que guarda a resposta correta
    *r_inout : resposta introduzida pelo utilizador
    *r_corretas: número de respostas acertadas à primera
    *x1 e x2 correspondem aos números para as operações
    *wrong : [bool] variável usada com sentido de valor lógico V ou F,
        * se = 1, a resposta foi errada, repete a pergunta
        * se = 0, gera uma nova pergunta
    *opr : define o tipo de operação, adição (=1) ou multiplicação (=2). APENAS TOMA O VALOR 1 E 2
    *attempt :
    */
    while (1) {
        opr = rand() % 2 + 1;
        switch (opr) {
            case 1:
                //Adição
                generator(&x1, &x2);
                attempt = 0;
                do {
                    printf("Quanto e' %d mais %d: ", x1, x2);
                    scanf("%d", &r_input);

                    r_ans = x1 + x2;
                    if (r_ans == r_input) {
                        printf("Muito bem!\n");
                        wrong = 0;

                        if (attempt == 0) //Se é a primeira tentativa (e está correta) então..
                        {
                            r_corretas++;
                            printf("Acertaste à primeira %d respostas\n", r_corretas);
                        }
                    }
                    else {
                        /* Estudasses */
                        attempt = 1; //Falhou a primeira tentativa, já não interessa para a contagem
                        printf("Esta errado, tenta outra vez!\n");
                    }
                } while (wrong);

            case 2:
                //Multiplicação
                generator(&x1, &x2);
                attempt = 0;
                wrong = 1; // <- 1 , Apenas para iniciar o ciclo While.
                while (wrong) {
                    printf("Quanto e' %d vezes %d: ", x1, x2);
                    scanf("%d", &r_input);
                    r_ans = x1 * x2;
                    if (r_ans == r_input) {
                        printf("Muito bem!\n");
                        wrong = 0;

                        if (attempt == 0) //Se é a primeira tentativa (e está correta) então..
                        {
                            r_corretas++;
                            printf("Acertaste à primeira %d respostas\n", r_corretas);
                        }
                    }
                    else {
                        /* Estudasses */
                        attempt = 1; //Falhou a primeira tentativa, já não interessa para a contagem
                        printf("Esta errado, tenta outra vez!\n");
                    }
                }
            default:
                break;

        }
    }

}