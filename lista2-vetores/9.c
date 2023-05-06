#include <stdio.h>

int main(){

    int i, A[10], B[10], C[10];

    printf("Vetor A\n");
    for (i=0; i<10; i++){
        printf("Entre com um valor inteiro: ");
        scanf("%d,", &A[i]);
    }

    printf("\n\nVetor B\n");
    for (i=0; i<10; i++){
        printf("Entre com um valor inteiro: ");
        scanf("%d,", &B[i]);

        C[i] = A[i] - B[i];
    }

    printf("\n\nExibicao dos vetores..");
    printf("\nVetor A:");
    for (i=0; i<10; i++){
        printf(" %d", A[i]);
    }

    printf("\nVetor B:");
    for (i=0; i<10; i++){
        printf(" %d", B[i]);
    }

    printf("\nVetor C:");
    for (i=0; i<10; i++){
        printf(" %d", C[i]);
    }
}
