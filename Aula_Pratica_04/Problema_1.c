/*
 *  Created on: 14/11/2015
 *      Author: Fábio Gaspar
 */

#include <stdio.h>

int sum(int n)
{
	if (n<10) return n;
	else return n%10 + sum(n/10); //volta a chamar a função até n ficar reduzido a um digito
}

int main()
{
	int x;
	int total;
	printf("Insira um numero: ");
	scanf("%d", &x);

	total = sum(x);

	printf("Soma de todos os digitos: %d\n", total);

}