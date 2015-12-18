#include <stdio.h>
#define MAX 150
#define MAX2 15

int conta (char *frase, char *palavra){
	return 2;
}

int main(){
	char frase[MAX], palavra[MAX2]
	printf("Frase: ");
	fgets(frase, MAX, stdin);
	frase[strlen(frase)-1]=0;
	printf("Palavra: ");
	scanf("%s", palavra);
	 printf("Resultado: a palavra %s apareceu %d vez(es) na frase.", palavra, conta(frase, palavra));
	
}