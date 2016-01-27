#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int ler_quilometros(float *kms)
{
	int n, i=0;
	scanf("%d", &n);
	while(scanf("%f", &kms[i])==1)
	{
		i++;
	}
	return n;
}

float consumo_medio(float *kms, int n,int litros_dep)
{
	int i=0;
	float soma=0, media;
	while(i<n)
	{
		soma+=kms[i];
		i++;
	}
	media=soma/(float)n;
	return ((float)litros_dep*(float)100)/media;
}

int main()
{
	int valores;
	float med, kim[100];
	valores=ler_quilometros(kim);
	printf("Foram lidos %d valores.\n", valores);
	med=consumo_medio(kim, valores, 60);
	printf("O consumo medio do taxi e %.2f 1/100km\n", med);
}
