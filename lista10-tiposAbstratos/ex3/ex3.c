#include "ex3.h"
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

int **somaMatrizes(int **m1, int **m2, int l, int c) {
  int **resultado = (int **)malloc(l * sizeof(int *));
  for (int i = 0; i < l; i++) {
    resultado[i] = (int *)malloc(c * sizeof(int));
    for (int j = 0; j < c; j++) {
      resultado[i][j] = m1[i][j] + m2[i][j];
    }
  }
  return resultado;
}

int **subtraiMatrizes(int **m1, int **m2, int l, int c) {
  int **resultado = (int **)malloc(l * sizeof(int *));
  for (int i = 0; i < l; i++) {
    resultado[i] = (int *)malloc(c * sizeof(int));
    for (int j = 0; j < c; j++) {
      resultado[i][j] = m1[i][j] - m2[i][j];
    }
  }
  return resultado;
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