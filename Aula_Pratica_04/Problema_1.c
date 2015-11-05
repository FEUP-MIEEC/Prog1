/*
 *  Created on: 28/10/2015
 *      Author: Gonçalo Pereira
 */

#include <stdio.h>

int main(){
	
	int centenas, dezenas, unidades, numero, soma;

	printf("Insira um número: ");

	scanf("%d", &numero);

	centenas = numero/100;
	dezenas = numero/10 - (centenas*10);
	unidades = numero - ((numero/10)*10);

	soma = centenas + dezenas + unidades;

	printf("A soma dos algarismos é: %d\n", soma);
	
	return 0;
}

