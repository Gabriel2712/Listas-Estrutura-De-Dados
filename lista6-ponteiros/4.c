#include <stdio.h>
#define qtd 5

int main(){

    int vetor[qtd];
    int i;

    int *p = vetor;

    for(i=0; i< qtd; i++){
        printf("Entre com um numero inteiro: ");
        scanf("%d", (p+i));
    }

    for(i=0; i< qtd; i++){
        printf("\nConteudo da posicao %d do vetor e endereco %p: %d  ->  dobro: %d", i, (p+i), *(p+i), *(p+i) * 2);
    }
}

