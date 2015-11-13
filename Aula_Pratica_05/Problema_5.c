#include <stdio.h>
#include <stdlib.h>
int main(){
	int m=0,o,i;
	float x,y;
	printf("Introduza o número de iterações a calcular para aproximar pi: ");
	scanf("%d", &o);

	for(i=0;i<o;i++){
		x=rand()/(float) RAND_MAX;
		y=rand()/(float) RAND_MAX;
		if(x*x+y*y<1){
			m++;
		}

	}
printf("pi=%f\n", (float) 4*m/i);
	return 0;
}
