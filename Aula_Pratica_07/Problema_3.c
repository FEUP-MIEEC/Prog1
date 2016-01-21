#include <stdio.h>
#include <math.h>

double q(int n) {
    double r = 0, p = 0, i = 1;
    while (p != 1 / pow(n, 2)) {
        p = 1 / pow(i, 2);
        r += p;
        i++;
    }
    return r;
}

double a(int n) {
    double r = 0, p = 0, i = 1;
    while (p != pow(-1, n + 1) * 1 / pow(2, n)) {
        p = pow(-1, i + 1) * 1 / pow(2, i);
        r += p;
        i++;
    }
    return r;
}

int main() {
    int n;
    printf("Indique o valor de n: ");
    scanf("%d", &n);

    printf("Q(%d)=%.2lf e A(%d)=%.4lf\n", n, q(n), n, a(n));
    return 0;
}

/*
 *  Created on: 20/11/2015
 *  Author: Fábio Gaspar
 *  Alternativa
 */

// #include <stdio.h>
// #include <math.h>

// int main()
// {
//         int n;
//         float q=0, a=0;

//         printf("Indique o valor de n:");
//         scanf("%d", &n);


//         for (int i = 1; i <= n; ++i)
//         {

//                         q+=(float)1/(i*i); //Sendo i uma variável tipo 'int', é necessário usar o 'type cast', caso contrário a operação é feita em inteiro
//                         a+=pow(-1, i+1)/(pow(2,i));
//         }


//         printf("Q(%d)=%0.2f\n",n,q);
//         printf("A(%d)=%0.4f\n",n,a);
// }

