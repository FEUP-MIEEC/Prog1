/*
 *  Created on: 28/10/2015
 *      Author: Gonçalo Pereira
 */

#include <stdio.h>
#include <math.h>

int main(){

	//Inicialização das variáveis
	int raio;
	double perimetro, area;
	double pi = 3.1416;

	//Pedir o valor do raio da circunferência
	printf("Insere o valor do raio da circunferência: ");
	scanf("%d", &raio);
	
	//Calcular perimetro e área
	perimetro = pi * raio;
	area = pi * raio * raio;

	//Imprimir o s valores da área e do perímetro
	printf("O valor do perímetro é %f\nE o valor da área é %f\n", perimetro, area);

return 0;
}
