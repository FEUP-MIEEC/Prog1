#include <stdio.h>

int procuraTodos(int *v, int N, int x, int *posicoes, int *nPosicoes);

int main()
{
	int v[100], posicoes[100], N, x, nPosicoes, j=0;

	printf("Quantos valores pretende inserir: ");
	scanf("%d", &N);

	printf("Introduza os valores\n");

	while (j < N)
	{
		scanf("%d", &v[j]);
		j++;
	}
	
	printf("Qual o valor a procurar?:");
	scanf("%d", &x);

	/*Testar*/
	if (procuraTodos(v, N, x, posicoes, &nPosicoes)) //Foram encontrados valores
	{
		printf("Foram encontradas %d correspondencias do numero %d\n", nPosicoes, x);
		printf("Posicoes: ");
		for (int i = 0; i < nPosicoes; ++i)
		{
			printf("%d ", posicoes[i]);
		}
		
	}
	else printf("Nao foi encontrado nenhum valor de %d\n", x);

}

int procuraTodos(int *v, int N, int x, int *posicoes, int *nPosicoes)
{
	*nPosicoes=0;
	int j = 0;
	for (int i = 0; i < N; ++i)
	{

		if (v[i]==x)
		{
			
			posicoes[j]=i;
			++*nPosicoes;

			//Testar
			printf("v[%d]=%d; posicoes[%d]=%d; npos %d\n",i,v[i],j,i, *nPosicoes);
			
			j++;

		}
	}

	if (nPosicoes==0) return 0;
	
	else return 1;
}