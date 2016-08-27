#include "stdio.h"
#include "stdlib.h"

void swap(int *first, int *second) {
	int temp;
	temp = *first;
	*first = *second;
	*second = temp;     
}

void ordena(int *a, int *b, int *c) {
	if (*a < *b) {
		swap(a, b);
	}
	if(*a < *c) {
		swap(a, c);
	}
	if(*b < *a) {
		swap(b, a);
	}
	if(*b < *c){
		swap(b, c);
	}
	if(*c < *a) {
		swap(c, a);
	}
	if(*c < *b) {
		swap(c, b);
	}
}

int main(int argc, char const *argv[]) {
	int N1 = 3, N2 = 5, N3 = 1;
	printf("Antes: %d, %d, %d\n", N1, N2, N3);
	ordena(&N1, &N2, &N3);
	printf("Depois: %d, %d, %d\n", N1, N2, N3);
	return 0;
}