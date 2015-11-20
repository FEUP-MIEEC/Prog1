/*
 *  Created on: 16/11/2015
 *      Author: Gonçalo Pereira
 */

#include <stdio.h>
#include <math.h>

double facto (int n){
	double fact;
	for (int c = 1; c <= n; c++)
    fact = fact * c;
	return fact;
}

int main(){

	double x, tol, dif = 99999999999, serie0=0, sen=0, serie=0;

	printf("Qual o valor de x? ");
	scanf("%lf", &x);
	printf("Qual o valor da tolerância? ");
	scanf("%lf", &tol);

	printf("%d\n", facto(5));

	for(int n=1; dif > tol; n++){
		serie = pow(-1, n+1) * (pow(x, 2*n-1)/(facto((2*n)-1)));
		sen += serie;
		dif = fabs(serie0 + serie);
		serie0 = serie;
	}
	printf("O seno de %lf é %.6lf\n", x, sen);
	return 0;
}