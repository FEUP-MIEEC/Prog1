/*
 *      Author: Fábio Gaspar
 */
#include <stdio.h>
#include "datas.h"

/* Retorna a data correspondente ao dia seguinte da data d */
data diaSeguinte(data d) {

    int u = diasDoMes(d.mes, d.ano);

    if (d.dia != u) /* Não é o ultimo dia do mês, basta incrementar um dia */
    {
        d.dia += 1;
    }
    else if (d.dia == u && d.mes == 12) /* último dia do mês de dezembro, implica passar ao ano seguinte*/
    {
        d.dia = 1;
        d.mes = 1;
        d.ano++;
    }
    else /* último dia do mês*/
    {
        d.dia = 1;
        d.mes++;
    }

    return d;
}

/* Retorna a data correspondente ao dia anterior à data d  */
data diaAnterior(data d) {

    if (d.dia == 1 && d.mes == 1) /* primeiro dia do ano => recuar para o mês anterior (dezembro) & recuar um ano*/
    {
        d.dia = 31;
        d.mes = 12;
        d.ano--;
    }
    else if (d.dia == 1 && d.mes != 1) /*Primeiro dia do mês => recuar um mês & o dia passa a ser 31,30 ou 28*/
    {
        d.mes--;
        d.dia = diasDoMes(d.mes - 1, d.ano); /*Determinar quantos dias tem o mês anterior*/
    }
    else {
        d.dia--;
    }
    return d;
}


/* Retorna a data correspondente a somar k dias à data d (k pode ser negativo)  */
data somaDias(data d, int k) {

    if (k < 0) {
        /*diaAnterior*/
        while (k != 0) {
            d = diaAnterior(d);
            k++;
        }
    }
    else if (k > 0) {
        /*diaSeguinte*/
        while (k != 0) {
            d = diaSeguinte(d);
            k--;
        }
    }
    return d;
}

int bissexto(int ano) {
    if (((ano % 4 == 0) && (ano % 100 != 0)) || (ano % 400 == 0))
        return 1;
    return 0;
}

int diasDoMes(int mes, int ano) {
    int ndias[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (bissexto(ano))
        ndias[1]++;

    return ndias[mes - 1];
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
    printf("%d %d %d\n", d.dia, d.mes, d.ano);
    char meses[12][10] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro",
                          "Outubro", "Novembro", "Dezembro"};
    sprintf(destino, "%02d de %s de %d", d.dia, meses[d.mes - 1], d.ano);
}
