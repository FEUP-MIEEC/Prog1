#include <stdio.h>
#include <math.h>

int main(){
	int videal, vmax, vmin, v, k=0, vtotal=0, i, cexc=0, cdef=0;
	scanf("%d %d %d", &videal, &vmin, &vmax);
	for (i=1;i<=50;i++){
		scanf("%d", &v);
		if (v>vmax){
			cexc++;
			continue;
		}
		if(v<vmin){
			cdef++;
			continue;
		}
		k++;
		vtotal+=v;
	}
	float vmedio=(float)vtotal/k;
	printf("Valor médio: %.2f (desvio absoluto de %.2f)\n", vmedio, fabs(vmedio-videal)/videal*100);
	printf("Garrafas com volume em excesso: %d", cexc);
	printf("Garrafas com volume em defeito: %d", cdef);
}