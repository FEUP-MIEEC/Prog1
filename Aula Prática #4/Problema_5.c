/*
 *  Created on: 28/10/2015
 *      Author: Gonçalo Pereira
 */

#include <stdio.h>

int fator(float n){
	float p;
	for(p = 2; n>1; p++){
		
		if ((int)(n/p) == n/p){
			n= n/p;
			printf("%d\n", (int)p);
			p -=1;
		}
	}
	return 0;
}

int main(){
	
	printf("Insira um número de três digitos\n");
	float numero, primo;
	scanf("%f", &numero);
	fator(numero);
	
	return 0;
}