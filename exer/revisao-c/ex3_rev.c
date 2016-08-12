#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[]) {
	int firstvalue, secondvalue;
	int i;
	int sum = 0;
	scanf("%d %d", &firstvalue, &secondvalue);
	if(firstvalue > secondvalue) {
		for (i = 0; i <= firstvalue - secondvalue; ++i) {
			sum = (firstvalue - i) + sum;
		}
	}
	else {
		for (i = 0; i <= secondvalue - firstvalue ; ++i) {
			sum = (secondvalue - i) + sum;
		}	
	}
	printf("%d\n", sum);
	return 0;
}