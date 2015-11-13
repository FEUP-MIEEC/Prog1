#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int dado(){
  return rand()%6+1;
}
int main(){
	int n,count=0,i,rt;
	printf("Quantos lançamentos? ");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		//srand(time(NULL));
		rt=dado();
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
