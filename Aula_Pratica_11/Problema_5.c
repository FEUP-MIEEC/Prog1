#include <stdio.h>
#include <string.h>

#define M 100

int main() {
    char in[M], pal[M];
    int m[M];
    int i, max = 0, j = 0, z = 0, mdiff = 0, pos, y, a = 0, p = 0;
    printf("Frase? ");
    fgets(in, M, stdin);
    in[strlen(in) - 1] = '\0';
    for (i = 0; in[i] != '\0'; i++) {
        if (in[i] == ' ') {
            m[j] = i;
            j++;
            p++;
        }
    }
    for (z = 0; m[z] != 0; z++) {
        if (mdiff < m[z + 1] - m[z]) {
            mdiff = m[z + 1] - m[z];
            pos = z + 1;
        }
    }
    for (y = pos; in[y] != ' '; y++) {
        pal[a] = in[y];
        a++;
    }

    /*for(i=0; in[i]!='\0'; i++){
        j++;
        if(in[i] == ' '){
            sum += j;
            if(j-1>max){
                max = j-1;
                for(z=j; z!=0; z--){
                    m[z] = in[z]; //TODO: Forma muito muito pouco optimizada, não e apeteceu apagar
                }
            }
            j=0;
            p++;
        }
    }*/
    printf("Numero de palavras: %d\n", i);
    printf("Palavra maior = %s\n", pal);
    printf("Comprimento medio: %d\n", i / p);

}