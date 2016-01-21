/*
 *      Author: Fábio Gaspar
 */

#include <stdio.h>
#include <stdlib.h>

 void isNull(int *p);

 int main()
 {

 	int count = 0, *p, x, i, j;

 	p = malloc(sizeof(int));
 	/*
 	BOA PRÁTICA: Se o sistema operativo não conseguir 'alocar'/reserver a memória pedida 
 	(pouco provável nestes programas básicos),
 	o apontador toma o valor de nulo (NULL) 
 	*/
 	
 	isNull(p);

	printf("Input\n");

 	while(scanf("%d", &x)==1)
 	{
 		p[count] = x;
 		++count;
 		p = realloc(p, sizeof(int)*count + sizeof(int));
 		isNull(p);		
 	}
	j = 2*count - 1;
 	p = realloc(p, j*sizeof(int));
	
	printf("Output\n");

	x = count - 1;
	for(i = j - 1; i > 0; i-=2)
	{
		/*arranjar vetor*/
		p[i] = p[x];
		x--;
	}
	
	for(i=1; i < j; i+=2)
	{
		if(i==1) printf("%d", p[0]);
		else printf(" %d", p[i-1]);

		p[i]=(p[i-1]+p[i+1])/2;
		printf(" %d", p[i]);

		if(i==j-2) printf(" %d\n", p[i+1]);
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
