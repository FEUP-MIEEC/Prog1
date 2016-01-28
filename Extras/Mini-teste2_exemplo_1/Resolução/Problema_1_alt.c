#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int ler_Volumes(float *volumes)
{
	int valores;
	int i=0;
	scanf("%d", &valores);
	
	while(i<valores){
		scanf("%f", &volumes[i]);
		i++;
		}
	return valores;
}
float volume_medio(float *volumes,  int nvolumes, float max, float min)
{
	int i;
	float j=0;
	float soma=0, media;

	for (i = 0; i < nvolumes; ++i)
	{
		if (volumes[i]>=min && volumes[i]<=max)
		{
			soma=soma+volumes[i];
			j++;
		}
	}
	media=soma/j;
	return media;
}	


int main()
{
	float maxi, mini;
	float volum[100];
	int nvol;
	nvol=ler_Volumes(volum);
	printf("\nQual é o minimo: "); scanf("%f", &mini);
	printf("\nQual é o maximo: "); scanf("%f", &maxi);
	printf("\nForam lidos %d valores", nvol);
	printf("\nO volumes de enchimento médio é %.3f\n", volume_medio(volum,nvol, maxi, mini));
}
