#include "stdio.h"
#include "stdlib.h"

struct TPilha {
  int info;
  struct TPilha *prox;
};

typedef struct TPilha TPilha;

void Esvazia(TPilha *pilha) {
  pilha = NULL;
  return;
}

int Vazia (TPilha *pilha) {
  return (pilha == NULL);
}

TPilha *Empilha (TPilha *pilha, int info) {
  TPilha *NovoElemento;
  NovoElemento = (TPilha*) malloc(sizeof(TPilha));
  NovoElemento->info = info;
  NovoElemento->prox = pilha;
  pilha = NovoElemento;
  return pilha;
}

TPilha *Desempilha (TPilha *pilha) {
  TPilha *pAux;
  pAux = pilha;
  pilha = pilha->prox;
  free(pAux);
  return pilha;
}

void Consulta (TPilha *pilha) {
  TPilha *pAux;
  int contador = 0;
  pAux = pilha;
  while(pAux != NULL) {
    printf("elemento[%d] - %d\n", contador, pAux->info);
    pAux = pAux->prox;
    contador++;
  }
  return;
}

int main(int argc, char const *argv[]) {
  TPilha *pilha;
  pilha = (TPilha*) malloc(sizeof(TPilha));
  pilha = NULL;

  pilha = Empilha(pilha, 10);
  pilha = Empilha(pilha, 8);
  pilha = Empilha(pilha, 6);
  pilha = Empilha(pilha, 4);

  Consulta(pilha);
  printf("\n\n");

  pilha = Desempilha(pilha);

  Consulta(pilha);

  free(pilha);
  return 0;
}