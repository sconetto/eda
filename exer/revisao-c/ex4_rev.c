#include "stdio.h"
#include "stdlib.h"
#include "string.h"

void divi(int a, int b) {
	while(b == 0) { 
		printf("VALOR INVÁLIDO!\n");
		scanf("%d", &b);
	}
	printf("Resultado: %d\n", a/b);
	return;
}

int main(int argc, char const *argv[]) {
	int counter = 0;
	int a = 0, b = 0;
	char *s;
	do {
		scanf("%d %d", &a, &b);
		divi(a, b);
		printf("VOCÊ DESEJA FAZER OUTRO CÁLCULO (S/N)?: ");
		scanf("%s", s);
		counter++;
	} while (strcmp(s, "s") == 0 || strcmp(s, "S") == 0);
	printf("Contas: %d\n", counter);
	return 0;
}