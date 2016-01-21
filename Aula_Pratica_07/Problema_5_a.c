#include <stdio.h>

int main() {
    // Algumas notas. No enunciado do problema é proposto usar o número 37628392022 para verificação.
    // Uma variavel int é por norma de 4 bytes (16 bits), já o número acima requere muitos mais bits.
    //
    // ** Curiosidade ** usem o comando sizeof() para ver quantos bits requer um numero, i.e. printf("%d\n", sizeof(37628392022));
    //
    // Neste caso estamos a lidar com números inteiros de 8 bytes (64 bits), pelo que requer uma var do tipo 'long long int'
    // ** Link util ** 'Data types' - https://en.wikipedia.org/wiki/C_data_types
    int x;
    long long int num;
    printf("Introduza um número:");
    scanf("%llu", &num);

    printf("Introduza um digito:");
    scanf("%d", &x);

    printf("O digito %d aparece %d vezes no numero %llu\n", x, contador(x, num), num);

}

int contador(int x, long long int num) {
    int count = 0;
    while (num > 1) {
        if (num % 10 == x) count++;
        num /= 10;
    }
    return count;
}