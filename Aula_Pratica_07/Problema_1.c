/*
 *  Created on: 16/11/2015
 *      Author: Gonçalo Pereira
 */

#include <stdio.h>

int fatorial(int n){
	int fact;
	while(n>1){
		fact *= 2*n-1;
		n--;
	}
	return fact;
}

int main(){

	float x, tol, dif, sen, serie, serie0;

	printf("Qual o valor de x? ");
	scanf("%f", &x);
	printf("Qual o valor da tolerância? ");
	scanf("%f", &tol);

	for(n=1; fabs(dif) < tol; n++){
		serie = pow(-1, n) * pow(x, 2*n+1)/(fatorial(n));
		sen += serie;
		dif = serie - serie0;
		serie0 = serie;
	}
	printf("O seno de %f é %f\n", x, sen);
	return 0;
}