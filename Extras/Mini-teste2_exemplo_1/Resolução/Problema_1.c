#include <stdio.h>

int ler_volumes (float *volumes){
	int n, i;
	scanf("%d", &n);
	for (i=0; i<n; i++){
		scanf("%f", &volumes[i]);
	}
	return n;
}

float volume_medio(float *volumes, int nvolumes, float max, float min){
	int i, n=0;
	float total=0;
	for(i=0;i<nvolumes; i++){
		if(volumes[i]>=min && volumes[i]<=max){
			total+=volumes[i];
			n++;
		}
	}
	
	return total/n;
}

int main (){
	float volumes[1000];
	float maximo, minimo, media;
	int n;
	
	n = ler_volumes(volumes);
	scanf("%f", &minimo);
	scanf("%f", &maximo);
	media=volume_medio(volumes, n, maximo, minimo);
	printf("Volume médio = %.3f\n", media);
}