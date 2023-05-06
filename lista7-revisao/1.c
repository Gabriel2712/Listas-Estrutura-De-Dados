#include <stdio.h>
#define ordem_matriz 5

int main(){

    int i, j, k, matriz[ordem_matriz][ordem_matriz], soma = 0;

    printf("Preencha os dados da matriz\n");
    for(i = 0; i < ordem_matriz; i++){
        for(j = 0; j < ordem_matriz; j++){
            printf("Valor para a posicao[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (k = 0; k < ordem_matriz; k++){
        for(i = 0; i < ordem_matriz; i++){
            for(j = 0; j < ordem_matriz; j++){
                if (j > k && i <= k){
                    soma += matriz[i][j];
                }
            }
        }
    }

    printf("Soma dos valores acima da diagonal principal: %d", soma);
}
