#include <stdio.h>
#include "datas.h"

int main() {
int daa;
  /* ler data*/
  printf("Introduza uma data (DD MM AAAA): ");
  data d;
  scanf("%d %d %d", &d.dia, &d.mes, &d.ano);
  
  /* validar data */
  
  if(!dataValida(d)){
	  printf("A data introduzida não é válida!\nA terminar a execução!\n");
	  return 0;
  }
  
  /* ler número de dias a avançar*/
  
  printf("Introduza o número de dias a avançar: ");
  scanf("%d", &daa);

  /* actualizar data */
  data nd=somaDias(d, daa);
  
  /* imprimir data actualizada */
  char a[80];
	escreveData(a, d);
	
  printf("A data resultante é ");puts(a);printf("\n");
}
