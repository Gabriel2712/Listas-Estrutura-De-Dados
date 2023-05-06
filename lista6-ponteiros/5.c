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

    printf("\nValores pares e seus respectivos enderecos  -->");
    for(i=0; i< qtd; i++){
        if(*(p+i) % 2 == 0)
        printf("\nConteudo %d na posicao %d do vetor possui endereco %p", *(p+i), i, (p+i));
    }
}


