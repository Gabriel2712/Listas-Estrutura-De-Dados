#include <stdio.h>

int main(){

    int i, qtd_negativos = 0;
    float vetor [10], soma_positivos = 0;

    for (i=0; i<10; i++){
        printf("Entre com um valor inteiro: ");
        scanf("%f,", &vetor[i]);
        if(vetor[i] < 0){
            qtd_negativos++;
        }else if(vetor[i] > 0){
            soma_positivos = soma_positivos + vetor[i];
        }
    }

    printf("\nQuantidade de numeros negativos: %d", qtd_negativos);
    printf("\nSoma de todos os positivos: %.2f", soma_positivos);
}
