/*
 *  Created on: 18/12/2015
 *      Author: Fábio Gaspar
 */

#include <stdio.h>

char converte(char c, int shift);

int main()
{
	char c;
	int shift;
	printf("carater e shift?: ");
	scanf("%c %d", &c, &shift);

	printf("resultado: %c", converte(c, shift));
}

char converte(char c, int shift){

	int ascii = (int)c, encrypt;

	encrypt = (ascii + shift - 97) % 26; 

	if (encrypt < 0)
	{
		return 123 + encrypt;
	}
	else	return encrypt + 97;


}

/*Consultar tabela ASCII http://www.asciitable.com/*/