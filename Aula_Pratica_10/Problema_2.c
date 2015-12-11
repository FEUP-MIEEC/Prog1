/*
 *  Created on: 08/12/2015
 *  Author: Fábio Gaspar
 *  Revised by: Daniel Silva
 */
#include <stdio.h>
#include <string.h>

#define MAX 100

 int compacta(char *orig, int N, char *dst);

 int main()
 {
 	char input[MAX], output[MAX]; int i=0;

 	printf("Escreva uma string com menos que %d caracteres, terminando com (.): ", MAX-1);
	while(1){
		scanf("%c", (input+i)); // Ou scanf("%c", &input[i]); dado que input[] = *input
		if (input[i]=='.') break;
		i++;
	}
	int a;

 	compacta(input, i, output);

 	printf("Output: %s\n", output);
 }

  int compacta(char *orig, int N, char *dst)
  {
  	int flags[MAX] = {0};
  	int i, j;
  	for ( i = 0; i < N; ++i)
  	{
  		char aux = orig[i];

  		for (j=i+1; orig[j]==aux; ++j)
  		{
  				flags[j]=1;
  		}
  	}
  	int k=0;
  	for (int i = 0; i < N; ++i)
  	{
  		if (flags[i]==0)
  		{
  			dst[k]=orig[i];
  			k++;
  		}
  	}
  	return k;
  }
