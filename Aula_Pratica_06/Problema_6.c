/*
 *  Created on: 13/11/2015
 *      Author: Gonçalo Pereira
 */

#include <stdio.h>
#include <math.h>
int main()
{
	printf("Bem-vindo!\n");

	//iniciação de variáveis

	double a, b, c, i;
	int i2;
	//recolha de dados

	printf("Qual é o valor de a?\n");
	scanf("%lf", &a);

	printf("Qual é o valor de b?\n");
	scanf("%lf", &b);

	printf("Qual é o valor de c?\n");
	scanf("%lf", &c);

	//aplicação da fórmula

	double x1= (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
	double x2= (-b-sqrt(pow(b,2)-4*a*c))/(2*a);

	//verificar quantas soluções existem e imprimir

	if (pow(b,2)-4*a*c < 0){
		printf("Não existe nenhuma solução real\n");
		i = pow(b,2)-4*a*c;
		i = ((i/4) - (int)i) * 4;
		i2

		switch(i2){
			case 1:
			printf("Tem raizes complexas: %lf+(%lfi)", (-b)/(2*a), sqrt(-(pow(b,2)-4*a*c))/2*a);
		}

	}
	else if (x1 == x2){
		printf("A solução é uma raíz dupla:\n%lf\n", x1);
	}
	else{
		printf("Existem duas soluções reais:\n%lf\n%lf\n", x1, x2);
	}
}
