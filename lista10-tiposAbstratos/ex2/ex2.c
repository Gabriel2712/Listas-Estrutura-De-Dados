#include "ex2.h"
#include <stdlib.h>

int **alocarMemoriaMatriz(int l, int c) {
  int **p = (int **)malloc(l * sizeof(int *));
  if (p == NULL) {
    return NULL;
  }
  for (int i = 0; i < l; i++) {
    p[i] = (int *)malloc(c * sizeof(int));
    if (p[i] == NULL) {
      return NULL;
    }
    for (int j = 0; j < c; j++) {
      p[i][j] = i + 1;
    }
  }

  return p;
}
void desalocarMemoriaMatriz(int **p, l) {
  for (int i = 0; i < l; i++) {
    free(p[i]);
  }
  free(p);
}