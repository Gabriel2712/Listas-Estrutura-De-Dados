#include "ex1.h"
#include <stdlib.h>

int *alocarMemoria(int x) {
  int *p = (int *)malloc(x * sizeof(int));
  return p;
}
void desalocarMemoria(int *p) { free(p); }