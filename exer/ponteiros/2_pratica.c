#include "stdio.h"
#include "stdlib.h"

int main() {
	int *numa, *numb;
	numa = (int*) malloc(sizeof(int));
	numb = (int*) malloc(sizeof(int));
	scanf("%d %d", numa, numb);
	printf("%p - endereço de numa\n%p - endereço de numb\n", numa, numb);
	printf("%d - valor de numa\n%d - valor de numb\n", *numa, *numb);
	return 0;
}