/*
 *  Created on: 28/10/2015
 *      Author: Gonçalo Pereira
 */

#include <stdio.h>

int main(){

	int número;

	printf("Insira um número: ");
	scanf("%d", &número);

	if(número % 2 ==0){
		printf("O número é par\n");
	}else{
		printf("O número é ímpar\n");
	}

}

