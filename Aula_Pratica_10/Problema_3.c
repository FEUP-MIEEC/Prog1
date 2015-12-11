//
// Created by Fábio on 10/12/2015.
//

#include <stdio.h>

int main()
{
	int n[4];
	int notas[4][2];

	for (int i = 0; i < 4; ++i)
	{
		printf("Introduza os dados do aluno %d: ", i+1);
		scanf("%d	%d	 %d", &n[i], &notas[i][0],&notas[i][1]);
	}

	printf("Numero	Nota 1	Nota 2	Media\n");

	for (int i = 0; i < 4; ++i)
	{
		float media = (float)(notas[i][0] + notas[i][1])/2;
		printf("%d	%d	%d	%0.1f\n", n[i], notas[i][0], notas[i][1], media);
	}
}
