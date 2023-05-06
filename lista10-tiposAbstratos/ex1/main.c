#include "ex1.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, n;

  printf("Entre com um valor: ");
  scanf("%d", &n);

  int *v = alocarMemoria(n);

  for (i = 0; i < n; i++) {
    v[i] = i;
  }

  for (i = 0; i < n; i++) {
    printf("%d ", v[i]);
  }
  desalocarMemoria(v);
}
