/*
 *  Created on: 15/11/2015
 *      Author: Gonçalo Pereira
 */

#include <stdio.h>
#include <math.h>

int main(){

	int n;
	double q, a;

	printf("Indique o valor de n: \n");
	scanf("%d", &n);

	for (int i = 1; i > n; ++i)
	{
		q += 1/pow(n,i);
	}

	printf("Q(%d)=%lf e A(%d)=%lf\n", n, q, n, a);
}