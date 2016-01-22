/*
 * 
 * Este exerc�cio tem especial interesse para compreender
 * aloca��o din�mica de mem�ria em C para arrays multidimensionais.
 * 
 * */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void imprime(char *v){
	int i=v[0], c;
	for(;i>=0;i--){
		printf("%c", v[i]);
	}
}

char* afgets(char *str, int buffer){ // Advanced File GET String -- Retira o NEWLINE do fim da string.
	char *a=fgets(str, buffer, stdin);
	str[strlen(str)-1]=0;
	return a;
}

int main(){
	int c=0, i, j, k, n;
	char a[100];
	char** strings; // `strings` � um apontador para apontadores 
					// pois n�o passa de um vetor cujo conte�do s�o apontadores para strings.
					
	strings = (char**) malloc(sizeof(char*)); //Assim, inicializamos este vetor com 1 apontador.
	while((afgets(a, 99)!=NULL)) // <- enquanto for poss�vel ler (n�o for premida a combina��o CTRL+D)
	{
		n=strlen(a); // `n` � o tamanho da string lida.
		strings=realloc(strings, sizeof(char*)*(c+1)); // Alocamos `c+1` apontadores para char.
		if (strings==NULL){printf("PARA TUDO!");exit(0);} // Se n�o for poss�vel alocar (unlikely)
		strings[c] = (char*) malloc((n+1)*sizeof(char)); // Alocamos um vetor de chars, string, com o espa�o de que precisamos
		strcpy(strings[c], a); // copiar o conte�do do vetor auxiliar a para a string rec�m-criada.
		c++;
	}
	c--; // Desfazer o que foi feito acima ?
	
	printf("\n");
	for(i=0;i<=c;i++){ // Para cada string
		for(j=i+1;j<=c;j++){ // Compara com as strings abaixo
			//fputs(strings[i], stdout);printf(" =?= ");fputs(strings[j], stdout);printf("=>");//Debugging tool
			if (strcmp(strings[i], strings[j])==0){ // Se forem iguais
				free(strings[j]); // Libertamos a string duplicada de mem�ria
				for(k=j;k<c;k++){ 
					strings[k]=strings[k+1]; // E puxamos as restantes para cima
				}
				j--; // como encontr�mos uma duplicada, e a retir�mos, temos de retroceder uma itera��o
				c--; // n�o esquecer que agora temos menos uma string para lidar com
				//printf("yes\n");//Debugging tool
			}else{
				//printf("no\n");//Debugging tool
			}
		}
	}
	for(i=0;i<=c;i++){
		fputs(strings[i], stdout);printf("\n"); // imprime as string que guard�mos
		free(strings[i]); // e apaga-as de mem�ria
	}
	free(strings); // Finalmente apagamos o nosso apontador para apontadores.

	return 0; // Fim
}