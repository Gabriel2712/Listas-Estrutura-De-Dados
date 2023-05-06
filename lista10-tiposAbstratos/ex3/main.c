#include "ex3.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, j, n_linha, n_coluna;

  printf("Entre com o numero de linhas: ");
  scanf("%d", &n_linha);

  printf("Entre com o numero de colunas: ");
  scanf("%d", &n_coluna);

  if (n_linha <= 0 || n_coluna <= 0) {
    printf("Erro: dimensoes invalidas.\n");
  } else {

    int **matriz1 = alocarMemoriaMatriz(n_linha, n_coluna);
    int **matriz2 = alocarMemoriaMatriz(n_linha, n_coluna);
    int **matriz_soma = alocarMemoriaMatriz(n_linha, n_coluna);
    int **matriz_subtracao = alocarMemoriaMatriz(n_linha, n_coluna);

    if (matriz1 != NULL) {
      printf("MATRIZ 1 -->\n");
      for (i = 0; i < n_linha; i++) {
        for (j = 0; j < n_coluna; j++) {
          printf("Entre com um valor para a posicao [%d][%d]: ", i, j);
          scanf("%d", &matriz1[i][j]);
        }
      }
      printf("\n\nMATRIZ 2 -->\n");
      for (i = 0; i < n_linha; i++) {
        for (j = 0; j < n_coluna; j++) {
          printf("Entre com um valor para a posicao [%d][%d]: ", i, j);
          scanf("%d", &matriz2[i][j]);
        }
      }

      matriz_soma = somaMatrizes(matriz1, matriz2, n_linha, n_coluna);
      matriz_subtracao = subtraiMatrizes(matriz1, matriz2, n_linha, n_coluna);

      printf("\nMatriz 1\n");
      printaMatriz(matriz1, n_linha, n_coluna);
      printf("\n\nMatriz 2\n");
      printaMatriz(matriz2, n_linha, n_coluna);
      printf("\n\nMatriz Soma\n");
      printaMatriz(matriz_soma, n_linha, n_coluna);
      printf("\n\nMatriz Subtracao\n");
      printaMatriz(matriz_subtracao, n_linha, n_coluna);

      desalocarMemoriaMatriz(matriz1, n_linha);
      desalocarMemoriaMatriz(matriz2, n_linha);
      desalocarMemoriaMatriz(matriz_soma, n_linha);
      desalocarMemoriaMatriz(matriz_subtracao, n_linha);
    } else {
      printf("Nao foi possivel alocar memoria!");
    }
  }
}
