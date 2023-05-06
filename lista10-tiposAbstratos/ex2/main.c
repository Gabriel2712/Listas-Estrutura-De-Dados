#include "ex2.h"
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

    int **matriz = alocarMemoriaMatriz(n_linha, n_coluna);

    if (matriz != NULL) {
      for (i = 0; i < n_linha; i++) {
        for (j = 0; j < n_coluna; j++) {
          printf("%d ", matriz[i][j]);
        }
        printf("\n");
      }
      desalocarMemoriaMatriz(matriz, n_linha);
    } else {
      printf("Nao foi possivel alocar memoria!");
    }
  }
}
