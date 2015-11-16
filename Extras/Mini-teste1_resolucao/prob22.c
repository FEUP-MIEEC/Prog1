/*
 *  Created on: 16/11/2015
 *      Author: Gonçalo Pereira
 */
#include <stdio.h>
#include <math.h>

void ConverteBinario(int num){
	printf("%d	", num);
	for(i=8, i!=-1, i--){
		if(pow(2, i)>num){
			num-=pow(2, i);
			printf("1");
		}else{
			printf("0");
		}
	}
	printf("\n");
}

int main(){
	int n;
	char a;

	while(scanf("%d %c", &n, &a) == 2){
		switch(a){
			case 'b':
			ConverteBinario(n);
			break;
			case 'o':
			printf("%d	%o\n", n, n);
			break;
			case 'h':
			printf("%d	%x\n", n, n); //entre os valores pode ser também usado \t
			break;
		}
	}
}
