/*
 *  Created on: 16/11/2015
 *      Author: Gonçalo Pereira
 */

#include <stdio.h>
#include <math.h>

double fatorial(int n){
	int fact = 1;
	while(n>1){
		fact *= (2*n)-1;
		n--;
	}
	return fact;
}

int main(){

	double x, tol, dif = 99999999999, serie0=0, sen=0, serie=0;

	printf("Qual o valor de x? ");
	scanf("%lf", &x);
	printf("Qual o valor da tolerância? ");
	scanf("%lf", &tol);

	for(int n=1; dif > tol; n++){
		serie = pow(-1, n+1) * (pow(x, 2*n-1)/(fatorial(n)));
		printf("%lf\n", serie);
		sen += serie;
		dif = fabs(serie0 + serie);
		serie0 = serie;
	}
	printf("O seno de %lf é %.6lf\n", x, sen);
	return 0;
}