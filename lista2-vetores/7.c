#include <stdio.h>

int main(){

    int i, vetor[10], maior, menor;

    for (i=0; i<10; i++){
        printf("Entre com um valor inteiro: ");
        scanf("%d,", &vetor[i]);
        if (i==0){
            maior = vetor[i];
            menor = vetor[i];
        }else if (vetor[i] > maior){
            maior = vetor[i];
        }else if (vetor[i] < menor){
            menor = vetor[i];
        }
    }

    printf("\nMaior numero: %d", maior);
    printf("\nMenor numero: %d", menor);
}
