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
		scanf("%s", str);
		if ((int)str[0]==4) break;

		/*
		Explicação:
		Comandos como Ctrl-D são denominados como EOT (End of Transmission) que têm um valor específico na tabela de ASCII, o '4'
		*/

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