/*
 *  Created on: 28/10/2015
 *      Author: Gonçalo Pereira
 */

#include <stdio.h>

int main() {
	int a, b;
	printf("Insira dois números: ");
	scanf("%d %d", &a, &b);
	a = a+b;
	b = a-b;
	a = a-b;

	printf("Trocando os valores fica: a=%d b=%d\n",a, b);
	return 0;
}
