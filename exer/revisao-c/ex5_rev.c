#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[]){
	int vector[10];
	int value;
	int i;
	for (i = 0; i < 10; ++i) {
		scanf("%d", &vector[i]);
	}
	scanf("%d", &value);
	printf("\n\n");
	for (i = 0; i < 10; ++i) {
		if(vector[i] == value) {
			printf("%d\n", i);
		}
		else{}
	}
	return 0;
}
