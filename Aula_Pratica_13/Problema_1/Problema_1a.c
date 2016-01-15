/*
 *      Author: Fábio Gaspar
 */
#include <stdio.h>
#include <stdlib.h>

 void isNull(int *p);

 int main()
 {

 	int count = 0, *p1, *p2, x, i;

 	p1 = malloc(sizeof(int));
 	/*
 	BOA PRÁTICA: Se o sistema operativo não conseguir 'alocar'/reserver a memória pedida 
 	(pouco provável nestes programas básicos),
 	o apontador toma o valor de nulo (NULL) 
 	*/
 	
 	isNull(p1);

	printf("Input\n");

 	while(scanf("%d", &x)==1)
 	{
 		p1[count] = x;
 		++count;
 		p1 = realloc(p1, sizeof(int)*count + sizeof(int));
 		isNull(p1);
 		
 	}

 	p2 = malloc(count*4);
	isNull(p2);	
	
	printf("Output\n");
	for(i=0; i<count; ++i)
	{
		if(i == 0) 
		{
			p2[0] = (p1[0] + p1[1])/2;
			printf("%d", p2[0]);
		}
		else if(i == count -1)
		{
			p2[i] = (p1[i] + p1[i-1])/2;
			printf(" %d\n", p2[i]);
		}
		else
		{
			p2[i] = (p1[i-1] + p1[i] + p1[i+1])/3;
			printf(" %d", p2[i]);
		}
	}
}

 void isNull(int *p)
 {
 	if (p == NULL)
 	{
 		printf("Não foi possível reserver memória.");
 		exit(1);
 	}

 }
