// Paula Graça

#include <stdio.h>

int main() {
    int x, y, xant, yant;
    if (scanf("%d %d", &xant, &yant) != 2)
        return 1;

    while (scanf("%d %d", &x, &y) == 2) {
        char movimento;
        if (y - yant == 1)
            movimento = 'C';
        else if (y - yant == -1)
            movimento = 'B';
        else if (x - xant == 1)
            movimento = 'D';
        else if (x - xant == -1)
            movimento = 'E';

        printf("%c", movimento);
        xant = x;
        yant = y;
    }
    printf("\n");

}
