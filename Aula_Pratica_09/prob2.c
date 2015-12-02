/*
 *  Created on: 02/12/2015
 *      Author: Fábio Gaspar
 */
#include <stdio.h>
#include <stdlib.h>

int contaRepeticao(int v[], int tamanhoVetor, int numero)
{
	int seq_maior=0;

	for (int i = 0; i < tamanhoVetor; ++i)
	{
		int seq_atual=0;

		if (v[i]==numero)
		{
			/* primeira correspondência encontrada. Vamos verificar se os seguintes também são o número a procurar */
			int j=i;
			while(v[j]==numero)
			{
				seq_atual++;
				j++;
			}

			if (seq_atual > seq_maior)
			{
				seq_maior = seq_atual;
			}
		}
	}

	return seq_maior;
}

int main()
{
	int size;
	/*Porque isto é C e não permite vetores dinâmicos...... |facepalm|*/
	printf("Quantos numeros vai introduzir?: ");
	scanf("%d", &size);
	/*fim da estupidez*/

	int v[100], j=0, count=1, num;

	//TODO: não é possível definir tamanho de vetores com variáveis... fuck! < insert black magic >

	while(1)
	{
		int x;
		printf("Introduza um numero: ");
		scanf("%d", &x);

		if (x<0)
		{
			break;
		}

		v[j]=x;
		j++;
	}

	printf("Numero a pesquisar: ");
	scanf("%d", &num);

	printf("Maior sequencia com numeros %d tem tamanho %d\n", num, contaRepeticao(v, size, num));
}