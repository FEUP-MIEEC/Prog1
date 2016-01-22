/*
 *      Author: Fábio Gaspar
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * strsplit(char *str);
int main()
{
	int bytes = 0; /*Contar número de bytes do Input*/
	char aux[50], *str, *str_f, *cur_str;

	printf("Input\n");

	str = (char *) malloc(1); /*Declarar vetor str*/

	while(fgets(aux,50,stdin)!=NULL) /*Ler input*/
	{
		bytes += strlen(aux); 
		str = (char *) realloc(str, bytes);
		str = strcat(str, aux);
		/*
			O vetor 'aux' é usado para ler a palavra atual do stdin
			O vetor 'str' contém a string final, ou seja, todas as palavras são guardadas nesta 'string'
		*/
	}

	/*
		A string 'str_f' vai ter a string resultante removendo palavras duplicadas
	*/

	str_f = (char *) malloc(bytes); 
	str_f = strcat(str_f, strsplit(str)); /*obtem a primeira palavra*/
	
	printf("\nOutput");

	while((cur_str = strsplit(str))!=NULL)
	{

		if(strstr(str_f, cur_str)==NULL)
		{
			/*Não foi encontrada nenhuma ocorrência da palavra*/
			str_f = strcat(str_f, "\n");
			str_f = strcat(str_f, cur_str);		
		}
	}
	free(str); 
	fputs(str_f, stdout);
}	

char * strsplit(char* str)
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
	*/
	static int j = 0;
	char *token;
	static char *saveptr;
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
