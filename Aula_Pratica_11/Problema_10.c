#include <stdio.h>
#include <stdlib.h>

int Fibonacci(int F);

void printFibonacci(int max_index, int atual);

void printFibonacci_val(int max_value, int atual);

int main() {
    int op, x;
    printf("Pretende usar numero maximo de valores (1) ou valor maximo (2)? ");
    scanf("%d", &op);

    switch (op) {
        case 1:
            printf("Introduza um numero maximo de valores: ");
            scanf("%d", &x);
            printf("Sequencia: ");
            printFibonacci(x - 1, 0); /*Até um máximo X valores da sequência, por outras palavras, F(0),...,F(x-1)*/
            break;
        case 2:
            printf("Introduza o valor maximo: ");
            scanf("%d", &x);
            printf("Sequencia: ");
            printFibonacci_val(x, 0);
            break;
        default:
            printf("Não introduziu um valor válido.\n");
            exit(0);
    }
}

/* int Fibonacci(int MAX_values, int MAX_numbers, int F1, int F2)
 {
 	if (MAX_numbers==NULL) //Opção 1: Obter MAX_values da sequeênia de Fibonacci (F0, F1,...,FMAX_values)
 	{
 		if (MAX_values==)
 		{
 			
 		}
 		F1 = Fibonacci(1, NULL, MAX_values - 1, MAX_values - 2);
 		F2 = Fibonacci(1, NULL, MAX_values - 2, MAX_values - 3);

 		return (F1 + F2);
 	}
 }*/


int Fibonacci(int F) {

    if (F == 1) return 1;
    else if (F == 0) return 0;
    else return Fibonacci(F - 1) + Fibonacci(F - 2);
}

/* Número máximo de valores */
void printFibonacci(int max_index, int atual) {
    if (atual <= max_index) {
        if (atual == max_index)
            printf("%d.\n", Fibonacci(atual));
        else
            printf("%d, ", Fibonacci(atual));


        printFibonacci(max_index, atual + 1);
    }

}

/* Valor máximo */
void printFibonacci_val(int max_value, int atual) {
    int temp = Fibonacci(atual);
    if (temp <= max_value) {
        printf("%d, ", temp);
        printFibonacci_val(max_value, atual + 1);
    }
    else printf(".\n");
}

