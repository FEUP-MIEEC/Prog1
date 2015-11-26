#include "stdio.h"
#include "limits.h"

void ordena(int *valorA, int *valorB, int *valorC){
	int v[3] = {*valorA, *valorB, *valorC};
	int min, pos, temp;
	for (int i = 0; i < sizeof(*v) - 1; i++)
	{
		min = INT_MAX;
		for (int j = i; j < sizeof(*v) - 1; j++)
		{
			if (v[j] < min)
			{
				min = v[j];
				pos = j;
			}
		}
		printf("%d ", min);
		if (pos != i)
		{
			temp = v[i];
			v[i] = v[pos];
			v[pos] = temp;
		}
	}
	printf("\n");
}

int main()
{
	int a, b, c;

	printf("Insira os valores a ordenar:\n");
	scanf("%d %d %d", &a, &b, &c);
	printf("Valores a, b, c ordenados por ordem crescente: ");
	ordena(&a, &b, &c);
	return 0;
}