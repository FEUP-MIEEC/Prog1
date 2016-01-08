#ifndef _DATAS_H
#define _DATAS_H

// Estrutura usada para armazenar uma data
// Exemplo: data d = {04,02,1982};
typedef struct {
  int dia, mes, ano;
} data;

// Devolve 1 caso o ano seja bissexto ou 0 caso contrário
int bissexto(int ano);

// Devolve o número de dias do mes no dado ano
int diasDoMes(int mes, int ano);

// Verifica se uma determinada data é válida
int dataValida(data d);

// Retorna a data correspondente ao dia seguinte da data d
data diaSeguinte (data d);

// Retorna a data correspondente ao dia anterior à data d
data diaAnterior (data d);

// Retorna a data correspondente a somar k dias à data d (k pode ser negativo)
data somaDias (data d, int k);

// Escreve a data por extenso no vector de caracteres destino
void escreveData(char destino[], data d);

#endif

