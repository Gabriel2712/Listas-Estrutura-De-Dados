#include "ex4.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, j, n_linha[2], n_coluna[2];

  for (i = 0; i < 2; i++) {
    printf("Entre com o numero de linhas para a matriz %d: ", i + 1);
    scanf("%d", &n_linha[i]);
    printf("Entre com o numero de colunas para a matriz %d: ", i + 1);
    scanf("%d", &n_coluna[i]);

    if (n_linha <= 0 || n_coluna <= 0) {
      printf("Erro: dimensoes invalidas.\n");
      exit(1);
    }
  }

  int **matriz1 = alocarMemoriaMatriz(n_linha[0], n_coluna[0]);
  int **matriz2 = alocarMemoriaMatriz(n_linha[1], n_coluna[1]);

  if (matriz1 != NULL && matriz2 != NULL) {
    printf("\nMatriz 1\n");
    preencheMatriz(matriz1, n_linha[0], n_coluna[0]);
    printaMatriz(matriz1, n_linha[0], n_coluna[0]);
    printf("\n\nMatriz 2\n");
    preencheMatriz(matriz2, n_linha[1], n_coluna[1]);
    printaMatriz(matriz2, n_linha[1], n_coluna[1]);

    int **matriz_multiplicacao = multiplicaMatrizes(
        matriz1, n_linha[0], n_coluna[0], matriz2, n_linha[1], n_coluna[1]);

    if (matriz_multiplicacao != NULL) {
      printf("\n\nMatriz Multiplicacao\n");
      printaMatriz(matriz_multiplicacao, n_linha[0], n_coluna[1]);
      desalocarMemoriaMatriz(matriz_multiplicacao, n_linha[0]);
    }

    desalocarMemoriaMatriz(matriz1, n_linha[0]);
    desalocarMemoriaMatriz(matriz2, n_linha[i]);
  } else {
    printf("Houve erro ao alocar memoria!");
  }
}
