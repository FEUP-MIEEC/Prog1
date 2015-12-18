#include <stdio.h>
#include <string.h>

#define M 100

int capicua(char * str);

int main() {

	char in[M];
	printf("Palavra?");
	fgets(in, M, stdin);

	in[strlen(in) - 1] = '\0';
	if (capicua(in)) {
		printf("Resultado: %s e capicua", in);
	}
	else {
		printf("Resultado: %s nao e capicua", in);
	}
}

int capicua(char *str) {
	int j = strlen(str) - 1, i;
	for (i = 0; str[i] == str[j]; i++) {
		if (j == i) {
			return 1;
		}
		j--;
	}
	return 0;
}