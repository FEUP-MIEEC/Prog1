#include <stdio.h>

int main() {
    int var1 = 5;
    char var2 = 'a';
    int *ptr1 = &var1;

    char *ptr2 = &var2;
    printf("var1 tem o endereco %p, que ocupa %lu bytes, e o seu valor é %d, que ocupa %lu bytes.\n", ptr1,
           sizeof(ptr1), *ptr1, sizeof(*ptr1));
    printf("var2 tem o endereco %p, que ocupa %lu bytes, e o seu valor é %c, que ocupa %lu bytes.\n", ptr2,
           sizeof(ptr2), *ptr2, sizeof(*ptr2));

    printf("Além disso, sabemos que %p+1=%p\n", ptr1, ptr1 + 1);
    printf("Que em decimal passa a: %ld+1=%ld\n", ptr1, ptr1 + 1);
}
