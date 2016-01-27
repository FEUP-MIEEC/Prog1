#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * strsplit(char *str);
int main()
{
	int bytes = 0; /* Contar número de bytes do Input */
	char aux[50], *str, *str_f, *cur_str;

	printf("**Input**\n");

	str = (char *) malloc(1); /* Declarar vetor str */

	while(fgets(aux,50,stdin)!=NULL) /* Ler input */
	{
		bytes += strlen(aux); 
		str = (char *) realloc(str, bytes);
		str = strcat(str, aux);
		/*
			O vetor 'aux' é usado para ler a palavra atual do stdin
			O vetor 'str' contém a string final, ou seja, todas as palavras são guardadas nesta 'string'
			str = "palavra1\npalavra2\npalavra3\n\0"
		*/
	}

	/*
		A string 'str_f' vai ter a string resultante removendo palavras duplicadas
	*/

	str_f = (char *) malloc(bytes); 
	bytes = 0;

	cur_str = strsplit(str); /* obtem a primeira palavra */
	bytes = strlen(cur_str); /* obtem bytes dessa palavra + 1 byte -> \n */
	str_f = strcat(str_f, cur_str); 
	str_f = strcat(str_f, "\n");
	printf("\n**Output**\n");

	while((cur_str = strsplit(str))!=NULL)
	{
		bytes += strlen(cur_str) + 1; /* +1 para incluir \n */
		if(strstr(str_f, cur_str)==NULL)
		{
			/* Não foi encontrada nenhuma ocorrência da palavra */
			str_f = strcat(str_f, cur_str);
			str_f = strcat(str_f, "\n");		
		}
	}

	free(str); 
	bytes++; /*Byte adicional para o \0*/
	
	str_f = realloc(str_f, bytes); /* Se foram removidas palavras repetidas, o realloc vai permitir libertar espaço ocupado por elas*/
	fputs(str_f, stdout);
}	

char * strsplit(char * str)
{
	/*
		Esta função serve para separar a string 'str' pelo delimitador '\n'
		Exemplo:
			**Input**
			teste
			teste1
			teste2
			teste3

		A primeira vez que esta função é chamada retorna "teste", depois "teste1"...
		Retorna NULL quando chega à ultima ocorrência	
	*/
	static int j = 0;
	static char * saveptr;
	char * token;

	if (j==0)
	{
		token = strtok_r(str, "\n", &saveptr);
		j++;
	}
	else
	{
		token = strtok_r(NULL, "\n", &saveptr);
		j++;
	}
	
	return token;
}
