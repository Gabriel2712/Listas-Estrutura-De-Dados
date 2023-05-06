#include <stdio.h>

int main(){

    int i, numero[6];

    for (i=0; i<6; i++){
        printf("Entre com um valor inteiro: ");
        scanf("%d,", &numero[i]);
    }
    printf("\nOrdem inversa:");
    for (i=5; i>=0; i--){
        printf("\n%d", numero[i]);
    }
}
