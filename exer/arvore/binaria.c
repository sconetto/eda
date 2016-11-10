#include "stdio.h"
#include "stdlib.h"

struct TNo {
  char dado;
  struct TNo *esquerdo;
  struct TNo *direito;
};

typedef struct TNo TNo;

TNo *aloca() {
  return (TNo *) malloc(sizeof(TNo));
}

char lerProximo() {

}

void constroi (TNo *No, char string[]) {
  char info;
  info = lerProximo(string);
  if (info != '.') {
    No = aloca();
    No->dado = info;
    constroi(No->esquerdo);
    constroi(No->direito);
  } else {
    No = NULL;
  }
}

int main() {
  TNo *Raiz;
  char string[16] = "abc..c.de.f....";
  Raiz = aloca();
  constroi(Raiz, string);
  return 0;
}