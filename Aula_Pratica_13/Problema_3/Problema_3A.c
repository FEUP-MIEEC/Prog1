/*
 *      Author: Fábio Gaspar
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * strsplit(char *str);
int main()
{
	int bytes = 0;
	char aux[50], *str, *str_f, *cur_str;

	str = (char *) malloc(1); /*Declarar vetor str*/

	while(fgets(aux,50,stdin)!=NULL)
	{
		bytes += strlen(aux);
		str = (char *) realloc(str, bytes);
		str = strcat(str, aux);
	}


	str_f = (char *) malloc(bytes);
	str_f = strcat(str_f, strsplit(str)); /*obtem a primeira palavra*/
	
	printf("\n\nOutput");


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
