#include <stdio.h>

void calc(int x, int y){
    printf("%d + %d = %d\n", x, y, x+y);
    printf("%d - %d = %d\n", x, y, x-y);
    printf("%d * %d = %d\n", x, y, x*y);
    printf("%d / %d = %.1f\n", x, y, ((float)x/y));
    printf("%d %% %d = %d\n", x, y, x%y);
}


void intswap(int *a, int *b){
      /*
      *Esta função utiliza o conceito de apontadores
      *para trocar os valores das variáveis
      * através de operações sobre estas.
      */

  *b=*b+*a;
	*a=*b-*a;
	*b=*b-*a;
}

int main(){
	int x,y;
  float r;
  printf("Introduza dois números: ");
	scanf("%d %d", &x, &y);
  calc(x,y);
  intswap(&x, &y);
  calc(x,y);
	return 0;
}
