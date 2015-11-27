/*
 *  Created on: 27/11/2015
 *      Author: Daniel Silva
 */
 
 #include <stdio.h>

int horasMin(int *min, int *horas)
{
  *horas=*min/60;
  *min=*min%60;
  if (*horas>24){
	  return 1;
  }else{
	  return 0;
  }
}


int main()
{
  int min, h, a;
  printf("Insira o total de minutos: ");
  scanf("%d", &min);
  printf("%d", min);
  a=horasMin(&min, &h);
  printf(" minutos correspondem a %dh:%dmin e", h, min);
  if (!a){
	 printf(" não");
  }
  printf(" é superior a um dia!\n");
  return 0;
}
