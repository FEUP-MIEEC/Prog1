/*
 *  Created on: 28/10/2015
 *      Author: Gonçalo Pereira
 */

#include <stdio.h>
// ESTE PROBLEMA ESTÁ INACABADO. SE SOUBER A SOLUÇÃO POR FAVOR COMINIQUE
int bissextile(int year) {
	if(year % 4 == 0){
		if(year % 100 == 0){
			if(year % 400 == 0)
				return 0;
	}
	return 1;
	}
return 0;
}
int main() {
puts((!bissextile(100) && !bissextile(5) &&
bissextile(4) && bissextile(400))?":)": ":(");
	return 0;
}