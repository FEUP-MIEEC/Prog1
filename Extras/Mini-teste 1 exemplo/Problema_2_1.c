// Paula Graça

#include <stdio.h>

int main () 
{
	int x, y, xant, yant;
	if(scanf("%d %d", &x, &y) != 2);
		return 1;

	while(scanf("%d %d", &x, &y) == 2)
	{
		char moviemento;
		if(y - yant == 1)
			moviemento = 'C';
		else if(y - yant == -1)
			moviemento = 'B';
		else if(x - xant == 1)
			moviemento = 'D';
		else if(x - xant == -1)
			moviemento = 'E';

		printf("%c\n", movimento);
		xant = x;
		yant = y;
	}
	printf("\n");
	
}