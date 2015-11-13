// Paula Graça

#include <stdio.h>

char movimento(int xo, int yo, int x1, int y1)
{
	char movimento;
		if(y1 - y0 == 1)
			return = 'C';
		else if(y1 - y0 == -1)
			return  = 'B';
		else if(x1 - x0 == 1)
			return  = 'D';
		else if(x1 - x0 == -1)
			return  = 'E';
		return ' ';
}
int main () 
{
	int x, y, xant, yant;
	if(scanf("%d %d", &x, &y) != 2);
		return 1;

	while(scanf("%d %d", &x, &y) == 2)
	{
		printf("%c\n", movimento(xant, yant, x, y));
		xant = x;
		yant = y;
	}
	
	printf("\n");
	
}