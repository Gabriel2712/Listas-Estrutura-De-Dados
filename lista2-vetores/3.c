#include <stdio.h>

int main(){

    int i;
    float valor[5], media = 0;

    for (i=0; i<5; i++){
        printf("Entre com um valor: ");
        scanf("%f", &valor[i]);
        media = media + valor[i];
    }

    printf("Valores: ");
    for (i=0; i<5; i++){
        printf(" %.2f", valor[i]);
    }
    printf("\nMedia: %.2f", media/5);
}
