#include <stdio.h>
#include <stdlib.h>

unsigned int soma(unsigned int x, unsigned int y) {
	return x + y;
}

unsigned int subtracao(unsigned int x, unsigned int y) {
	return x - y;
}

unsigned int divisao(unsigned int x, unsigned int y) {
	return x / y;
}

unsigned int multiplicacao(unsigned int x, unsigned int y) {
	return x * y;
}

unsigned int modulo(unsigned int x, unsigned int y) {
	return x % y;
}

int main() {
	unsigned int x, y, resultado;
	char operador;
	unsigned int (*f) (unsigned int a, unsigned int b);
	scanf("%u %u ", &x, &y);
	fflush(stdin);
	operador = fgetc(stdin);
	switch (operador) {
	case '+':
		f = soma;
		resultado = f(x, y);
		printf("RESULTADO: %u\n", resultado);
		break;
	case '-':
		f = subtracao;
		resultado = f(x, y);
		printf("RESULTADO: %u\n", resultado);
		break;
	case '/':
		f = divisao;
		resultado = f(x, y);
		printf("RESULTADO: %u\n", resultado);
		break;
	case '*':
		f = multiplicacao;
		resultado = f(x, y);
		printf("RESULTADO: %u\n", resultado);
		break;
	case '%':
		f = modulo;
		resultado = f(x, y);
		printf("RESULTADO: %u\n", resultado);
		break;
	default:
		printf("ERRO!\n");
		break;
	}
}