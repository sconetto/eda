#include "stdio.h"
#include "stdlib.h"

struct TFila {
  int info;
  int tamanho;
  struct TFila *prox;
};

typedef struct TFila TFila;

void Esvazia(TFila *fila) {
  fila = NULL;
  return;
}

int Vazia (TFila *fila) {
  return (fila == NULL);
}

