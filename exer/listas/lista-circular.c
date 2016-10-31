#include "stdio.h"
#include "stdlib.h"

struct TNo {
	int numero;
	struct TNo *prox;
};

struct TLista {
  struct TNo *primeiro;
  int quantidade;
  struct TNo *ultimo;
};

typedef struct TNo TNo;
typedef struct TLista TLista;

int vazia (TNo *pLista) {
	return (pLista == NULL);
}

TLista *iniciaLista (TLista *cLista) {
	cLista->primeiro = NULL;
	cLista->ultimo = NULL;
	cLista->quantidade = 0;
	return cLista;
}

void *insereInicio (TLista *cLista, TNo *pLista, int pValor) {
	TNo *pNovoNo;
	pNovoNo = (TNo*) malloc(sizeof(TNo));
	pNovoNo->numero = pValor;
	if (cLista-> quantidade == 0) {
		pNovoNo->prox = pNovoNo;
		cLista->primeiro = pNovoNo;
		cLista->ultimo = pNovoNo;
		cLista->quantidade++;
	} else {
		pNovoNo->prox = pLista->prox;
		pLista->prox = pNovoNo;
		cLista->ultimo = pNovoNo;
		cLista->quantidade++;
	}
}

void imprimeLista (TLista *cLista, TNo *pLista) {
	int i = 0;
	for (i = 0; i < cLista->quantidade; pLista = pLista->prox) {
		printf("TNo[%d] = %d\n", i, pLista->numero);
	}
}

int main(int argc, char const *argv[]) {
	TNo *pLista = NULL;
	TLista *cLista;
	cLista = iniciaLista(cLista);

	insereInicio(cLista, pLista, 1);
	insereInicio(cLista, pLista, 2);
	insereInicio(cLista, pLista, 3);
	insereInicio(cLista, pLista, 4);

	imprimeLista(cLista, pLista);
	printf("\n\n");
	return 0;
}