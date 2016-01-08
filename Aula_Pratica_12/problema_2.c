#include <stdio.h>
#include "datas.h"

int main() {

  /* ler data*/
  printf("Introduza uma data (DD MM AAAA): ");
  int t, m, a;
  data d;
  scanf("%d %d %d", &d.dia, &d.mes, &d.ano);
  
  /* validar data */
  
  if(!dataValida(d)){
	  printf("A data introduzida não é válida!\nA terminar a execução!\n");
	  return 0;
  }
  
  /* ler número de dias a avançar*/
  int daa;
  printf("Introduza o número de dias a avançar: ");
  scanf("%d", &daa);

  /* actualizar data */
  data nd=somaDias(d, daa);
  
  /* imprimir data actualizada */

  printf("A data resultante é %d/%d/%d\n", nd.dia, nd.mes, nd.ano);
}
