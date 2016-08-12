#include "stdlib.h"
#include "stdio.h"
#include "string.h"

void read_string(char *s) {
	char c;
	int i = 0;
	do {
		c = getchar();
		if(c != '\n') {
			s[i] = c;
		}
		i++;
	} while (c != '\n' && c != '\0');
	s[--i] = '\0';
	return;
}

int main(int argc, char const *argv[]) {
	char *s;
	s = (char*) malloc(sizeof(char));
	read_string(s);
	printf("primeira: %c\nultima: %c\nquantidade: %d\n", s[0], s[(int)strlen(s) - 1], (int)strlen(s));
	return 0;
}