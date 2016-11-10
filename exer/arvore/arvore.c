#include "stdio.h"
#include "stdlib.h"

struct _arvore {
  int info;
  struct _arvore *esquerda;
  struct _arvore *direita;
};

typedef struct _arvore arvore;

void criaArvore (arvore **raiz) {
  *raiz = NULL;
}

void inserir (arvore **raiz, int numero) {
  if (*raiz == NULL) {
    *raiz = (arvore *) malloc(sizeof(arvore));
    (*raiz)->esquerda = NULL;
    (*raiz)->direita = NULL;
    (*raiz)->info = numero;
  } else {
    if (numero <= (*raiz)->info) {
      inserir(&(*raiz)->esquerda, numero);
    } else if (numero > (*raiz)->info) {
      inserir(&(*raiz)->direita, numero);
    }
    else {/* Do Nothing */}
  }
}

void exibirEmOrdem (arvore *raiz) {
  if (raiz != NULL) {
    exibirEmOrdem(raiz->esquerda);
    printf("\n%i", raiz->info);
    exibirEmOrdem(raiz->direita);
  }
}

void exibirInversa (arvore *raiz) {
  if (raiz != NULL) {
    exibirInversa(raiz->direita);
    printf("\n%i", raiz->info);
    exibirInversa(raiz->esquerda);
  }
}

int main() {
  arvore **raiz;
  raiz = (arvore **) malloc(sizeof(arvore *));
  (*raiz) = NULL;
  criaArvore(raiz);
  inserir(raiz, 50);
  inserir(raiz, 25);
  inserir(raiz, 32);
  inserir(raiz, 14);
  inserir(raiz, 41);
  inserir(raiz, 10);
  inserir(raiz, 23);
  inserir(raiz, 5);
  inserir(raiz, 1);
  inserir(raiz, 52);
  printf("Em ordem\n");
  exibirEmOrdem(*raiz);
  printf("\n\nInversa\n");
  exibirInversa(*raiz);
  printf("\n\n");
  return 0;
  return 0;
}