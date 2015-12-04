#include "stdio.h"
#include "math.h"

int main()
{
	float v[1000], sum = 0, med;
	int n;

	printf("Número de notas: ");
	scanf("%d", &n);

	for (int i = 0; i < n; ++i)
	{
		printf("Introduza uma nota: ");
		scanf("%f", &v[i]);
		sum += v[i];
	}
	med = sum / n;
	printf("Media: %f\n", med);
	printf("Notas Arredondadas: ");
	for (int i = 0; i < n; ++i)
	{
		printf("%f ", round(v[i]));
	}
	return 0;
}