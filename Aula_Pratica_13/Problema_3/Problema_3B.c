/*
 * 
 * Este exercício tem especial interesse para compreender
 * alocação dinâmica de memória em C para arrays multidimensionais.
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
	char** strings; // `strings` é um apontador para apontadores 
					// pois não passa de um vetor cujo conteúdo são apontadores para strings.
					
	strings = (char**) malloc(sizeof(char*)); //Assim, inicializamos este vetor com 1 apontador.
	while((afgets(a, 99)!=NULL)) // <- enquanto for possível ler (não for premida a combinação CTRL+D)
	{
		n=strlen(a); // `n` é o tamanho da string lida.
		strings=realloc(strings, sizeof(char*)*(c+1)); // Alocamos `c+1` apontadores para char.
		if (strings==NULL){printf("PARA TUDO!");exit(0);} // Se não for possível alocar (unlikely)
		strings[c] = (char*) malloc((n+1)*sizeof(char)); // Alocamos um vetor de chars, string, com o espaço de que precisamos
		strcpy(strings[c], a); // copiar o conteúdo do vetor auxiliar a para a string recém-criada.
		c++;
	}
	c--; // Desfazer o que foi feito acima ?
	
	printf("\n");
	for(i=0;i<=c;i++){ // Para cada string
		for(j=i+1;j<=c;j++){ // Compara com as strings abaixo
			//fputs(strings[i], stdout);printf(" =?= ");fputs(strings[j], stdout);printf("=>");//Debugging tool
			if (strcmp(strings[i], strings[j])==0){ // Se forem iguais
				free(strings[j]); // Libertamos a string duplicada de memória
				for(k=j;k<c;k++){ 
					strings[k]=strings[k+1]; // E puxamos as restantes para cima
				}
				j--; // como encontrámos uma duplicada, e a retirámos, temos de retroceder uma iteração
				c--; // não esquecer que agora temos menos uma string para lidar com
				//printf("yes\n");//Debugging tool
			}else{
				//printf("no\n");//Debugging tool
			}
		}
	}
	for(i=0;i<=c;i++){
		fputs(strings[i], stdout);printf("\n"); // imprime as string que guardámos
		free(strings[i]); // e apaga-as de memória
	}
	free(strings); // Finalmente apagamos o nosso apontador para apontadores.

	return 0; // Fim
}