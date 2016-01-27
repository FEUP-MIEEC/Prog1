/*
	Autor: Fábio Gaspar
*/
#include <stdio.h>

#define num 100

int ler_acessos (int id[], int tempo[]);
int mais_tempo (int tempo[], int n);

int main()
{
	int ids[num], t[num], total, pos;

	total = ler_acessos(ids, t);
	printf("Total de acessos: %d\n", total);

	pos = mais_tempo(t, total);
	printf("Carro que permaneceu mais tempo: %d (%d minutos)\n", ids[pos], t[pos]);
}

int ler_acessos (int id[], int tempo[])
{
	int ID, t_in, t_out, i=0;
	while(scanf("%d %d %d", &ID, &t_in, &t_out)==3) /*"A	leitura	termina	quando	não	for	possível ler os	3 valores."*/
	{
		id[i] = ID;
		tempo[i] = t_out - t_in;
		i++;
	}

	return i;
}

int mais_tempo (int tempo[], int n)
{
	int i, t_max = tempo[0], pos = 0;

	for (i = 1; i < n; ++i)
	{
		if (tempo[i] > t_max)
		{
			t_max = tempo[i];
			pos = i;
		}
	}

	return pos;
}
