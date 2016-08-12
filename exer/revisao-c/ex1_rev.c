#include <stdio.h>
#include <stdlib.h>

void convert_fahrenheit(float fahrenheit) {
	float celsius = 0.0;
	celsius = ((fahrenheit-32.0)/9.0)*5.0;
	printf("%.2f\n", celsius);
	return;
}

int main(int argc, char const *argv[]){
	float value = 0.0;
	scanf("%f", &value);
	convert_fahrenheit(value);
	return 0;
}