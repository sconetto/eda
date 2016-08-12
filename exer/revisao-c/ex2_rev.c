#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
	int value[3];
	int i = 0;
	int sum = 0;
	for (i = 0; i < 3; ++i){
		scanf("%d", &value[i]);
		sum += value[i];
	}
	if(value[0] < value[1] && value[0] < value[2]) {
		sum -= value[0];
	}
	else if(value[1] < value[0] && value[1] < value[2]) {
		sum -= value[1];
	}
	else if(value[2] < value[0] && value[2] < value[1]) {
		sum -= value[2];
	}
	printf("%d\n", sum);
	return 0;
}