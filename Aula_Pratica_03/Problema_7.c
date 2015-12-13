/*
 *  Created on: 28/10/2015
 *      Author: Gonçalo Pereira
 */

#include <stdio.h>

int main() {
    int a, b, c;
    printf("Insira 3 números: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && c > a) {
        printf("%d %d %d\n", b, a, c);
    } else if (b > a && c > b) {
        printf("%d %d %d\n", a, b, c);
    } else if (a > c && b > a) {
        printf("%d %d %d\n", c, a, b);
    } else if (c > a && b > c) {
        printf("%d %d %d\n", a, c, b);
    } else if (c > b && a > c) {
        printf("%d %d %d\n", b, c, a);
    } else if (b > c && a > b) {
        printf("%d %d %d\n", c, b, a);
    }
    return 0;
}

