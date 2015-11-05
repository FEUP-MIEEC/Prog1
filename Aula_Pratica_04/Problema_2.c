/*
 *  Created on: 28/10/2015
 *      Author: Gonçalo Pereira
 */

#include <stdio.h>

int main(){

	float num, min, max, sum = 0, i = 0, média;
	while(1){
		if(scanf("%f", &num) != 1){ //scanf retorna o numero de elementos lidos com sucesso
		break;
		}
		if (i == 0)
		{
			min = num;
			max = num;
		}
		i++;
		if (num > max){
			max = num;
		} else{
			min = num;
		}
		sum += num;
	}
	média = sum / i;
	printf("A media dos numeros é %f, o máximo é %f e o mínimo é %f.\n", média, max, min);
}
