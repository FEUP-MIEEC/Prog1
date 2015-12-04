#include <stdio.h>
#include <math.h>

/*
a)
*/

int main()
{
	int x;
	float v[50], v_round[50], sum;

	printf("Número de notas: ");
	scanf("%d", &x);

	for (int i = 0; i < x; ++i)
	{
		printf("Introduza uma nota: ");
		scanf("%f", &v[i]);
		sum += v[i];
	}

	printf("Media: %0.2f", sum/x);
	printf("Notas Arredondadas: ");
	for (int i = 0; i < x; ++i)
	{
		printf("%d ", (int)round(v[i]));
	}

	printf("\n");

}
