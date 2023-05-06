#include <stdio.h>
#define qtd 3

int main(){

    float matriz[qtd][qtd];
    int i, j;

    for(i=0; i < qtd; i++){
        for(j=0; j < qtd; j++){
            printf("Entre com um numero para a posicao [%d, %d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    for(i=0; i< qtd; i++){
        for(j=0; j < qtd; j++){
            printf("\nEndereco da posicao [%d, %d] da matriz com conteudo %.2f possui o endereco: %p", i, j, matriz[i][j], &matriz[i][j]);
        }
    }
}


