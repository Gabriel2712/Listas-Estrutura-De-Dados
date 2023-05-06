#include "ex4.h"
#include <stdio.h>
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
  }
  return p;
}

void preencheMatriz(int **m, int l, int c) {
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            printf("Entre com o valor da posição [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
}

int **multiplicaMatrizes(int **m1, int l1, int c1, int **m2, int l2, int c2) {
  if (c1 != l2) {
    printf("Matrizes não multiplicáveis\n");
    return NULL;
  }

  int **res = (int **)malloc(l1 * sizeof(int *));
  for (int i = 0; i < l1; i++) {
    res[i] = (int *)malloc(c2 * sizeof(int));
  }

  for (int i = 0; i < l1; i++) {
    for (int j = 0; j < c2; j++) {
      res[i][j] = 0;
      for (int k = 0; k < c1; k++) {
        res[i][j] += m1[i][k] * m2[k][j];
      }
    }
  }
  return res;
}

void printaMatriz(int **matriz, int l, int c) {
  for (int i = 0; i < l; i++) {
    for (int j = 0; j < c; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
}

void desalocarMemoriaMatriz(int **p, l) {
  for (int i = 0; i < l; i++) {
    free(p[i]);
  }
  free(p);
}