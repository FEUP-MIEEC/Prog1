#include <stdio.h>
#include <stdlib.h>
#include <string.h>
	
#define NUMANIMAIS 150
	
typedef struct {
  char nome[50];
  char tipo[25];
  char nome_dono[75];
  int tlm_dono;
} animal;
	
int ler_animais(animal *clinica);
animal* lista_animais(animal *clinica, int Na, char *tipo, int *Nl); 
void guarda_lista(animal *lista, int n, char *nomeFicheiro);
void listaRegistos(animal *clinica, int num);

int main()
{
  animal clinica[NUMANIMAIS], *lista;
  int numRegistos, n, n_lista;
	
  numRegistos=ler_animais(clinica);
	
  printf("Numero registos lidos %d\n", numRegistos);
  listaRegistos(clinica, numRegistos);
	 
  lista = lista_animais(clinica, numRegistos, "coelho", &n_lista);
  printf("Numero de registos \"coelho\": %d\n", n_lista);
  listaRegistos(lista, n_lista);

  guarda_lista(lista, n_lista, "Arroz.txt");
	
  return 0;  
}

int ler_animais(animal *clinica)
{
  /* problema 2.1 */
  char a_nome[50], a_tipo[25], d_n1[30], d_n2[34];
  int tlm, i=0;
  while(scanf("%s %s %s %s %d", a_nome, a_tipo, d_n1, d_n2, &tlm)==5 && i<NUMANIMAIS)
  {
    strcpy(clinica[i].nome, a_nome);
    strcpy(clinica[i].tipo, a_tipo);

    /*Nome do dono = nome1 + " " + nome2*/
    char aux[75];
    strcpy(aux, d_n1);
    strcat(aux, " ");
    strcat(aux, d_n2);

    strcpy(clinica[i].nome_dono, aux);

    clinica[i].tlm_dono = tlm;

    i++;
  }

  return i;
}

animal* lista_animais(animal *clinica, int Na, char *tipo, int *Nl)
{
  /* problema 2.2 */

  animal * lista;
  lista = malloc(1);
  int i, j = 0;

  for (i = 0; i < Na; ++i)
  {
      if (!strcmp(clinica[i].tipo, tipo))
      {
         lista = realloc(lista, sizeof(animal)*(1+j));
         lista[j] = clinica[i];
         j++;
      }
  }

  *(Nl) = j;

  return lista;
}

void guarda_lista(animal *lista, int n, char *nomeFicheiro)
{
  /* problema 2.3 */
  FILE * f;
  int i;

  f = fopen(nomeFicheiro, "w");

  for (i = 0; i < n; ++i)
  {
    fprintf(f, "%s %s %s %d\n", lista[i].nome, lista[i].tipo, lista[i].nome_dono, lista[i].tlm_dono);
  }

  fclose(f);
}
	
void listaRegistos(animal *animais, int num)
{
    int i;
    for(i=0; i<num; i++)
      printf("%s %s %s %d\n",animais[i].nome, animais[i].tipo, animais[i].nome_dono, animais[i].tlm_dono);
}
