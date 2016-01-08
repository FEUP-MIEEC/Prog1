/*
 *      Author: Fábio Gaspar
 */
#include <stdio.h>
#include <math.h> 
#include "poli.h"

int lerPoli(int * poli)
{
	int maiorGrau=0, count=0;


	
	while(count < 10)
	{
		printf("a%d(x^%d) : a%d= ", count, count, count);

		if (scanf("%d", &poli[count])==-1)
			{
				printf("\n");
				break;
			}
		
		if (poli[count]!=0) maiorGrau=count;

		 count++;
	}
	
	return maiorGrau;
}

void escrevePoli(int * poli, int grau)
{
	for (int i = grau; i >= 0; --i)
	{
		if (poli[i]!=0 && i==grau) /*primeiro elemento p(x) = x⁶ ...*/
		{
			printf("%dx^(%d)", poli[i], i); 
		}
		else if (poli[i]!=0 && i==1) /*elemento grau 1 (se não-zero) p(x) = x⁶ + ... + x + a*/
		{
			printf(" + %dx", poli[i]);
		}
		else if (poli[i]!=0 && i==0) /*último elemento (se não-zero) p(x) = x⁶ + ... + a*/
		{
			printf(" + %d", poli[i]);
		}
		else if (poli[i]!=0 && i!=0) /*restantes elementos p(x) = x⁶ + x⁵ ...*/
		{
			printf(" + %dx^(%d)", poli[i], i); 
		}
		 
	}

	printf("\n");

}

void adicionaPoli(int * p1, int * p2, int *pRes, int maiorGrau)
{
	for (int i = 0; i <= maiorGrau; ++i)
	{
		pRes[i] = p1[i] + p2[i];
	}
}

float calc(int * poli, int grau, float x)
{
	float total = 0;
	for (int i = 0; i <= grau; ++i)
	{
		total += poli[i]*pow(x,i);
	}

	return total;
}
