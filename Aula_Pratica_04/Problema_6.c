#include <stdio.h>
#include <stdlib.h>

int main(){
	int c=0, j, w=3, sum=0;
	long int n;
	printf("Insira um EAN-13 (sem checksum): ");
	scanf("%li", &n);
	long int *i= (long int*) malloc(sizeof(int));
	while(n>=10){
		i = (long int*) realloc(i, sizeof(long int)*(c+1));
		i[c]=n%10;
		n=n/10;
		c++;
		//printf("n: %ld\n", n);  // Debug tool
	}
	i = (long int*) realloc(i, sizeof(long int)*(c+1));
	i[c]=n;
	for(j=0;j<=c;j++){
		//printf("sum=%d+%d*%ld\n", sum, w, i[j]);  // Debug tool
		if(w==3){
			sum+=w*i[j];
			w=1;
		}else{
			sum+=w*i[j];
			w=3;
		}
		
	}
	
	
	printf("%d\n", 10-sum%10);
	return 0;
}
