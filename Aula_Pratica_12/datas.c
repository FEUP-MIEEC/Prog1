#include <stdio.h>
#include "datas.h"

/* Retorna a data correspondente ao dia seguinte da data d */
data diaSeguinte (data d){
  if(d.dia==diasDoMes(d.mes, d.ano)){
	  // Se estivermos a lidar com o último dia do mês.
	  if(d.mes==12){
		  // E o mês for Dezembro
		  d.mes=1;
		  d.ano++;
		  // ^ passamos para Janeiro e avançamos o ano.
	  }else{
		  // não é Dezembro, logo, só precisamos de avançar o mês.
		  d.mes++;
	  }
	  d.dia=1;
	  // O primeiro dia é o dia 1
  }else{
	  // Caso contrário, não é o último dia do mês.
	  // Avançar um dia é tão simples quanto:
	  d.dia++;
  }
  return d;
}

/* Retorna a data correspondente ao dia anterior à data d  */
data diaAnterior (data d){
  if(d.dia==1){
	  // Se estivermos a lidar com o primeiro dia do mês.
	  if(d.mes==1){
		  // E o mês for Janeiro
		  d.mes=12;
		  d.ano--;
		  // ^ passamos para Dezembro e avançamos o ano.
	  }else{
		  // não é Janeiro, logo, só precisamos de recuar um mês.
		  d.mes--;
	  }
	  d.dia=diasDoMes(d.mes, d.ano);
	  // O último dia é dado pela função diasDoMes
  }else{
	  // Caso contrário, não é o primero dia do mês.
	  // Recuar um dia é tão simples quanto:
	  d.dia--;
  }
  return d;
}



/* Retorna a data correspondente a somar k dias à data d (k pode ser negativo)  */
data somaDias (data d, int k) {
  int i;
  if (k>0){
	  for(i=0;i<k; i++){
		  d=diaSeguinte(d);
	  }
  }else{
	  for(i=k;i<0; i++){
		  d=diaAnterior(d);
	  }
  }
  /* usar funcoes diaAnterior e diaSeguinte iterativamente  */
  return d;
}

int bissexto(int ano) {
  if (((ano % 4 == 0) && (ano % 100 != 0)) || (ano % 400 == 0))
    return 1;
  return 0;
}

int diasDoMes(int mes, int ano) {
   int ndias[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
   
   if (bissexto(ano))
     ndias[1]++;
   
   return ndias[mes-1];
}

int dataValida(data d) {
    if (d.ano < 1)
      return 0;
    if (d.mes < 1 || d.mes > 12)
      return 0;
    if (d.dia < 1 || d.dia > diasDoMes(d.mes, d.ano))
      return 0;
    
    return 1;
}

void escreveData(char destino[], data d) {
  char meses[12][10] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"}; 
  sprintf(destino, "%02d de %s de %d", d.dia, meses[d.mes-1], d.ano);
}