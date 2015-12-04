<<<<<<< HEAD
#include "stdio.h"
#include "math.h"

int main()
{
	float v[1000], sum = 0, med;
	int n;

	printf("Número de notas: ");
	scanf("%d", &n);

	for (int i = 0; i < n; ++i)
=======
#include <stdio.h>
#include <math.h>

/*
a)
*/

int main()
{
	int x;
	float v[50], sum;

	printf("Número de notas: ");
	scanf("%d", &x);

	for (int i = 0; i < x; ++i)
>>>>>>> origin/master
	{
		printf("Introduza uma nota: ");
		scanf("%f", &v[i]);
		sum += v[i];
	}
<<<<<<< HEAD
	med = sum / n;
	printf("Media: %f\n", med);
	printf("Notas Arredondadas: ");
	for (int i = 0; i < n; ++i)
	{
		printf("%f ", round(v[i]));
	}
	return 0;
}
=======

	printf("Media: %0.2f", sum/x);
	printf("Notas Arredondadas: ");
	for (int i = 0; i < x; ++i)
	{
		printf("%d ", (int)round(v[i]));
	}

	printf("\n");

}
>>>>>>> origin/master
