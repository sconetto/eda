#include "stdio.h"
#include "stdlib.h"

int main() {
	float vfat[4];
	float *ptr;
	int i;
	for (i = 0; i < 4; ++i) {
		scanf("%f", &vfat[i]);
	}
	ptr = vfat;
	for (i = 3; i >= 0; --i) {
		printf("%f - vfat[%d]\n", *(ptr+i), i);
	}
	return 0;
}