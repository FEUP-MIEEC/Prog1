/*
 *  Created on: 16/11/2015
 *      Author: Gonçalo Pereira & Daniel Silva
 */

#include <stdio.h>
#include <math.h>

double fatorial(int n){
	double fact=1;
	while(n>1){
		fact *= n;
		n--;
	}
	return fact;
}


int main(){
	double x, tol, sen, serieant=0, serie, dif=5000;
	printf("Qual o valor de x? ");
	scanf("%lf", &x);
	printf("Qual o valor da tolerancia? ");
	scanf("%lf", &tol);
	int n=0;
	while(dif>=tol){
		n++;
		serie=pow(-1,n+1)*pow(x, 2*n-1)/fatorial(2*n-1);
		sen +=serie;
		dif=fabs(serie+serieant);
		serieant=serie;
	}
	printf("O seno de %f é %f\n", x, sen);
	return 0;
}
