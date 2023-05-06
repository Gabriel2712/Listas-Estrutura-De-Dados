#include <stdio.h>

int main(){

    int i, numero[6];

    for (i=0; i<6; i++){
        printf("Entre com um valor inteiro: ");
        scanf("%d,", &numero[i]);
    }

    for (i=0; i<6; i++){
        printf("\nvalor %d: %d", i+1, numero[i]);
    }

}
