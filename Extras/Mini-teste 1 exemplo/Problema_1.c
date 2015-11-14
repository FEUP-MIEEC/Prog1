// Paula Graça

#include <stdio.h>

int main () {
	int aprovados=0, semfrequencia=0;
	int i, F, MT;
	float nota;

	for(i=0; i<20; i++)
	{
		scanf("%d %d", &F, &MT);
		nota = 0.4*F + 0.6*MT;
		if(F < 40)
			semfrequencia +=1;
		else if(nota >=9.5)
			aprovados+=1;
	}
	printf("Estudantes sem frequência: %d\n", semfrequencia);
	printf("Aprovações: %0.1f %% \n", aprovados/20.0*100);

	return 0;
}