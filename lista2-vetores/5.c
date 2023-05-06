#include <stdio.h>

int main(){

    int i, pos1, pos2;
    float vetor[8], soma;

    for (i=0; i<6; i++){
        printf("Entre com um valor: ");
        scanf("%f,", &vetor[i]);
    }

    printf("Entre com uma posicao: ");
    scanf("%d", &pos1);

    printf("Entre com outra posicao: ");
    scanf("%d", &pos2);

    soma = vetor[pos1] + vetor[pos2];

    printf("Soma dos valores nas respectivas posicoes: %.2f", soma);
}
