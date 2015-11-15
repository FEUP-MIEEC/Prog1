/*
 *  Created on: 28/10/2015
 *      Author: Gonçalo Pereira
 */

#include <stdio.h>
int main(){

    char sentence;
    int a = 0, e = 0, i = 0, o = 0, u = 0;
    while (1){
        scanf("%c", &sentence);
        if (sentence == '.'){
            break;
        }
        switch (sentence) {
            case 'a':
            case 'A':
                a++;
                break;
            case 'e':
            case 'E':
                e++;
                break;
            case 'i':
            case 'I':
                e++;
                break;
            case 'o':
            case 'O':
                o++;
                break;
            case 'u':
            case 'U':
                u++;
                break;
        }
    }
    printf("A - %d\n", a);
    printf("E - %d\n", e);
    printf("I - %d\n", i);
    printf("O - %d\n", o);
    printf("U - %d\n", u);
	return 0;
}
