#include <stdio.h>
#include <stdlib.h>

//Em seguida, escreva uma função que receba um valor e retorne 1, caso o valor
//esteja na matriz, ou retorne 0, no caso contrário

int verifica_numero_contido(int** matriz, int col, int lin, int num){
    int i, j;

    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            if(matriz[i][j] == num){
                return 1;
            }
        }
    }
    return 0;
}

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

    int num;

    printf("Entre com um numero para busca: ");
    scanf("%d", &num);

    printf("\nRetorno: %d \n", verifica_numero_contido(p, n_coluna, n_linha, num));

    for(int i = 0; i < n_linha; i++){
        free(p[i]);
    }
    free(p);

}
