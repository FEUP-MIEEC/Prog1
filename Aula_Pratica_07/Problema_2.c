/*
 *  Created on: 20/11/2015
 *      Author: Diogo Machado
 */


#include <stdio.h>
#include <math.h>

int num2(int b) {
	int i=0, j;
	while (b>0)
	{
		b = b/10;
		i++;
	}
	j = pow (10, i);
	return j;
}

int num1(int a, int b) {
	int j = num2(b);
	int c;

	while (1)
	{
		c = a % j;
		a = a/10;
			if (c == b)
				return 1;
			if (a == 0)
				break;
	}
	return 0;
}
int main () {
	int a, b;
	printf ("Introduza um número: ");
	scanf ("%d", &a);
	printf ("Introduza um segundo número: ");
	scanf ("%d", &b);

	if ( num1(a,b) == 1 )
		printf("o número %d está contido no número %d.\n", b, a);
	else 
		printf ("o número %d não está contido no número %d.\n", b, a);

}
		
		
