#include "stdio.h"
#include "stdlib.h"

void interface() {
	printf("0 - Imprimir Vetor\n");
	printf("1 - Inserir Valor\n");
	printf("2 - Excluir Valor de Posição \"k\"\n");
	printf("3 - Encontrar Valor\n\n");
	printf("4 - Sair\n\n-> ");
	return;
}

void swap(int *first, int *second) {
	int temp;
	temp = *first;
	*first = *second;
	*second = temp;     
}

void bubleSort(int vector[], int size) {
	int i, j;   
	for(i = 0; i < (size - 1); i++) {
		for(j=0; j < (size - ( i +1 )); j++) {
			if(vector[j] < vector[j+1]) {
				swap(&vector[j], &vector[j+1]); 
			}
		} 
	}
}


int main(int argc, char const *argv[]) {
	int vector[5] = {-1, -1, -1, -1, -1};
	int menu = 0;
	int i;
	int value;
	int contain;
	int position;
	int temp;
	while(1) {
		interface();
		scanf("%d", &menu);
		switch(menu){
			case 0:
				printf("Imprimindo os valores:\n");
				for (i = 0; i < 5; ++i) {
					printf("vetor[%d]: %d\n", i + 1, vector[i]);
				}
				break;
			case 1:
				printf("Valor a se inserir: ");
				scanf("%d", &value);
				for (i = 0; i < 5; ++i){
					if(vector[i] != -1) {
						contain = i;
					}	
				}
				for (i = 4; i >= 0; --i) {
					if(i == 4){}
					else {
						vector[i + 1] = vector[i];
						if(i == 0){
							vector[i] = value;
						}
					}
				}
				break;
			case 2:
				printf("Imprimindo os valores:\n");
				for (i = 0; i < 5; ++i) {
					printf("vetor[%d]: %d\n", i + 1, vector[i]);
				}
				printf("Em qual posição deseja remover?: ");
				scanf("%d", &position);
				vector[position - 1] = -1;
				bubleSort(vector, 5);
				break;
			case 3:
				printf("Valor a ser encontrado: ");
				scanf("%d", &value);
				for (i = 0; i < 5; ++i) {
					if(vector[i] == value) {
						printf("Valor encontrado na posição: %d\n", i + 1);
					}
				}
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("OPÇÃO NÃO ENCONTRADA!\n");
				break;
		}
	}
	return 0;
}