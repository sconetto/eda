#include "stdio.h"
#include "stdlib.h"

struct TPilha {
  int info;
  struct TPilha *prox;
};

typedef TPilha TPilha;

int vazia (TPilha *pPilha) {
  return (pPilha == NULL);
}

TPilha *empilha () {

}