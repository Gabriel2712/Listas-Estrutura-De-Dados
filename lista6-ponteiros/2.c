#include <stdio.h>
#define qtd 10

int main(){

    float vetor[qtd];
    int i;

    for(i=0; i< qtd; i++){
        printf("Entre com um numero: ");
        scanf("%f", &vetor[i]);
    }

    for(i=0; i< qtd; i++){
        printf("\nEndereco da posicao %d do vetor com conteudo %.2f possui o endereco: %p", i, vetor[i], &vetor[i]);
    }
}

