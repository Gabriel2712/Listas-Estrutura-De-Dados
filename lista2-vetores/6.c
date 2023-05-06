#include <stdio.h>

int main(){

    int i, numero[10], n_pares = 0, n_impares = 0, aux_par = 0, aux_impar = 0;

    for (i=0; i<10; i++){
        printf("Entre com um valor inteiro: ");
        scanf("%d,", &numero[i]);
        if (numero[i] %2 == 0){
            n_pares++;
        }else{
            n_impares++;
        }
    }

    int pares[n_pares], impares[n_impares];

    for (i=0; i<10; i++){
        if (numero[i] %2 == 0){
            pares[aux_par] = numero[i];
            aux_par++;
        }else{
            impares[aux_impar] = numero[i];
            aux_impar++;
        }
    }

    printf("\nQuantidade de pares: %d\n", n_pares);
    for (i=0; i< n_pares; i++){
        printf("%d ", pares[i]);
    }

    printf("\nQuantidade de impares: %d\n", n_impares);
    for (i=0; i< n_impares; i++){
        printf("%d ", impares[i]);
    }
}
