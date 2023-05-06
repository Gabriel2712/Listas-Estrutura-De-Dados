#include <stdio.h>

int main(){

    int A[] = {1, 0, 5, -2, -5, 7}, soma, i;

    soma = A[0] + A[1] + A[5];
    printf("Soma: %d", soma);

    A[4] = 100;

    printf("\n\nValores: ");
    for (i=0; i<6; i++){
        printf("\n%d", A[i]);
    }
}
