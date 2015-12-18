/*
 *  Created on: 17/12/2015
 *      Author: Fábio Gaspar
 */
 
#include <stdio.h>
#include <string.h>
#define MAX 100

int capicua(char * str);

int main()
{
	char str[MAX];

	while(1){
		printf("Palavra: ");
	
		if (scanf("%s", str)==-1) break;

		if (capicua(str)==1) printf("Resultado: '%s' e' capicua\n", str);
		else printf("Resultado: '%s' NAO e' capicua\n", str);		
	}

	
}

int capicua(char * str)
{
	int j = strlen(str) - 1, flag = 1;

	for (int i = 0; i < j; ++i)
	{
		if (str[i]!=str[j-i])
		{
			flag = 0;
			break;
		}
	}

	return flag;
}