#include <stdio.h>
#include <stdlib.h>



int main(){

    int n_linha, n_coluna, qtd_impar=0, qtd_par=0, i, j;

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
            if(p[i][j] % 2 == 0){
                qtd_par++;
            }else{
                qtd_impar++;;
            }
        }
    }
    for(i = 0; i < n_linha; i++){
        for (j = 0; j < n_coluna; j++){
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }

    int *par = (int *) malloc( qtd_par * sizeof(int *));
    int *impar = (int *) malloc( qtd_impar * sizeof(int *));

    int cont_par = 0, cont_impar = 0;

    for(i = 0; i < n_linha; i++){
        for (j = 0; j < n_coluna; j++){
            if(p[i][j] % 2 == 0){
                par[cont_par] = p[i][j];
                cont_par++;
            }else{
                impar[cont_impar] = p[i][j];
                cont_impar++;
            }
        }
    }

    printf("\nVetor de pares: ");
    for(i = 0; i < qtd_par; i++){
        printf("%d ", par[i]);
    }

    printf("\nVetor de impares: ");
    for(i = 0; i < qtd_impar; i++){
        printf("%d ", impar[i]);
    }

    for(i = 0; i < n_linha; i++){
        free(p[i]);
    }
    free(p);
    free(par);
    free(impar);
}
