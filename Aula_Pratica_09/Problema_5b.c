#include "stdio.h"
#include "math.h"

int main()
{
	float v[1000], sum = 0, med;
	int n = 0;
	while (1)
	{
		printf("Introduza uma nota: ");
		scanf("%f", &v[n]);
		if(v[n] > 0){
			sum += v[n];
			n++;
		}
		else{
			break;
		}
	}
	med = sum / n;
	printf("Media: %.2f\n", med);
	printf("Notas Arredondadas: ");
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", (int)round(v[i]));
	}
	printf("\n");
	return 0;
}