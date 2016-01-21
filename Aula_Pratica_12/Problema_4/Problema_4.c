#include <stdio.h>
#include "armazem.h"

int main(){
	artigo itens[50]={
	{"Arroz", "Cigala", "Carolino", 0.96, 870},
	{"Arroz", "Cigala", "Agulha", 0.94, 807},
	{"Arroz", "Continente", "Carolino", 0.85, 410},
	{"Arroz", "E", "Carolino", 0.76, 405},
	{"Arroz", "Dia", "Carolino", 0.80, 810},
	{"Arroz", "Jumbo", "Carolino", 0.85, 200}};
	int nItens=6;
	int o, n;
	char marca[15], modelo[15], r[5];
	while(1){
		printf("\e[1;1H\e[2J"); //Limpa a consola
		printf("-------GESTÃO DE PRODUTOS--------\n");
		printf("--------------MENU---------------\n");
		printf("(1) Introduzir Artigo            \n");
		printf("(2) Encontrar Artigo             \n");
		printf("(3) Listar Artigos a Esgotar     \n");
		printf("(4) Ordenar Artigos por Stock    \n");
		printf("(5) Listar todos os Artigos      \n");
		printf("Introduza a sua opção: ");
		
		scanf("%d", &o);
		getchar();
		switch(o){
			case 1:
				leArtigo(itens+nItens);
				nItens++;
				printf("Prima [ENTER] para continuar.");  getchar();
			break;
			case 2:
				printf("Marca a procurar: ");
				afgets(marca, 15);
				printf("Modelo a procurar: ");
				afgets(modelo, 15);
				totalArtigos(itens, 50, marca, modelo);
				printf("Prima [ENTER] para continuar.");  getchar();
			break;
			case 3:
				printf("Listar artigos com stock abaixo de : ");
				scanf("%d", &n);
				alertaArtigos(itens, n);
				printf("Prima [ENTER] para continuar.");  getchar();getchar();
			break;
			case 4:
				ordenaArtigos(itens, nItens);
				printf("Artigos ordenados com sucesso!\n");
				printf("Prima [ENTER] para continuar."); getchar();
			break;
			case 5:
				dumpA(itens, nItens);
				printf("Prima [ENTER] para continuar.");  getchar();
			break;
			default:
				break;
		 }
		
	}
}