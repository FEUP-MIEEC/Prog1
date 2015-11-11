/*
 *  Created on: 28/10/2015
 *      Author: Gonçalo Pereira, Daniel Silva
 */
#include <stdio.h>
#include <math.h>

float f_res_sqrt(float a, float b, float c) {
float tmp = -4 * a * c;
tmp = b*b + tmp; // Tinha erro na fórmula do binómio discriminante
tmp = sqrt(tmp);
return tmp;
}

float f_res_pos(float a, float b, float c) {
return (-b + f_res_sqrt(a, b, c)) / (2 * a);
}

float f_res_neg(float a, float b, float c) {
return (-b - f_res_sqrt(a, b, c)) / (2 * a);
}

int main() {
float PRECISION=0.00001, A=30.4, B=-123, C=75, R_NEG=0.748063, R_POS=3.29799;
float v_pos = f_res_pos(A, B, C);
float v_neg = f_res_neg(A, B, C);

puts(((fabs(v_pos - R_POS) < PRECISION) &&
(fabs(v_neg - R_NEG) < PRECISION))?":)": ":(");
return 0;
}
