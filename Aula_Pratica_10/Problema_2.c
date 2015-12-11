#include <stdio.h>
#include <string.h>

#define MAX 100

 int compacta(char *orig, int N, char *dst);

 int main()
 {
 	char input[MAX], output[MAX];

 	printf("Escreva uma string com menos que %d caracteres: ", MAX-1);
 	fgets(input, MAX, stdin);

 	int a;
 	while(1)
 	{
	 	a = (strlen(input) - 2); 
		/*
		Se o input for 'aaabbb.', char array tem tamanho 8, pois {'a','a','a','b','b','b','c','\0'}
		Então, uma vez que o vetor começa no indice 0, decrementam-se duas unidades para ajustar os indices e outra para excluir o '\0'
		*/
		if(input[a] == '.') break;

		//TODO
 	}
 	

 	compacta(input, a, output);

 	printf("Output: %s\n", output);
 }

  int compacta(char *orig, int N, char *dst)
  {
  	int flags[MAX] = {0};
  	int i;
  	for ( i = 0; i < N; ++i)
  	{
  		char aux = orig[i];
  		int j=i+1;

  		for (j ; j < N; ++j)
  		{
  			if (orig[j]==aux)
  			{
  				flags[j]=1;
  			}
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