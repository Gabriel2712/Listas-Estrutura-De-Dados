#include <stdio.h>
#include <stdlib.h>

// Escreva um programa que aloque dinamicamente uma matriz de inteiros. As
// dimensões da matriz deverão ser lidas pelo usuário.


int main(){

    int n_linha, n_coluna, i, j;

    printf("Entre com o numero de linhas da matriz: ");
    scanf("%d", &n_linha);

    printf("Entre com o numero de coluns da matriz: ");
    scanf("%d", &n_coluna);

    int **p = (int **) malloc( n_linha * sizeof(int *));
    for(i = 0; i < n_linha; i++){
        p[i] = (int *) malloc(n_coluna * sizeof(int));
        for (j = 0; j < n_coluna; j++){
            printf("Valor para a posicao [%d][%d]: ", i, j);
            scanf("%d", &p[i][j]);
        }
    }
    for(i = 0; i < n_linha; i++){
        for (j = 0; j < n_coluna; j++){
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < n_linha; i++){
        free(p[i]);
    }
    free(p);

}
