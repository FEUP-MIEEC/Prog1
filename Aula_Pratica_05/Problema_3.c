/*
 *  Created on: 13/11/2015
 *      Author: Daniel Silva
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int n,count=0,i,rt;
	printf("Quantos lançamentos? ");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		//srand(time(NULL));
		rt=rand()%6+1;
		if(rt==6){
			count++;
		}
	}
	if(count==1){
		printf("A face 6 saiu %d vez.\n", count);
	}
	else{
		printf("A face 6 saiu %d vezes.\n", count);
	}

	return 0;
}
