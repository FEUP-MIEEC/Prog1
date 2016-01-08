/*
 *      Author: Fábio Gaspar
 */
#ifndef _COMPLEXOS_H
#define _COMPLEXOS_H

typedef struct {
    int real, img;
} complexo;

complexo leComplexo();

void escreveComplexo(complexo c);

complexo somaComplexo(complexo c1, complexo c2);

double modComplexo(complexo c);

double argComplexo(complexo c);

#endif

