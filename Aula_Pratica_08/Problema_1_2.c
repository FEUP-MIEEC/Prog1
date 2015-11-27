/*
 *  Created on: 27/11/2015
 *      Author: Daniel Silva
 */
 
 // Alternativa

#include <stdio.h>

void swap(int *a, int *b){
  int sv;
  sv=*a;
  *a=*b;
  *b=sv;
}
void ordena(int *vA, int *vB, int *vC)
{
  int swapvar;
  if (*vA>*vC){
    swap(vA, vC);
  }
  if (*vA>*vB){
    swap(vA, vB);
  }
  if (*vB>*vC){
    swap(vB, vC);
  }
}
int main()
{
  int a, b, c;
  printf("Insira os valores a ordenar: ");
  scanf("%d %d %d", &a, &b, &c);
  ordena(&a, &b, &c);
  printf("Os valores a, b, c ordenados por ordem crescente: %d %d %d\n ", a, b, c);
}
