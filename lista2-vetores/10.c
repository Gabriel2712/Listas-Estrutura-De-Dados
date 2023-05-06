#include <stdio.h>

int main(){

    int i, vetor[100], aux = 0;

    for (i=0; i<100; i++){
        vetor[i] = aux;
		aux = aux + 7; 
    }

	printf("Vetor com 100 primeiros numeros naturais multiplos de 7: ");
    for (i=0; i<100; i++){
        printf("\n%d", vetor[i]);
    }

}
