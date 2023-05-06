#include <stdio.h>

int main() {
    int i, j, aux, vetor[10];
  
    for (i = 0; i < 10; i++){
    	printf("Entre com um valor inteiro: ");
        scanf("%d,", &vetor[i]);
    }
  
    for (i = 0; i < 9; i++) {
    	for (j = i + 1; j < 10; j++) {
        	if (vetor[j] < vetor[i]) {
        		aux = vetor[i];
        		vetor[i] = vetor[j];
        		vetor[j] = aux;
      		}
    	}
    }
  
    printf("\nNumeros que se repetem em ordem crescente:\n"); // escrevendo cada um desses valores repetidos uma única vez
  	
    for (i = 0; i < 9; i++) {
    	if(i == 0){
    		aux = vetor[i];
    		if(vetor[i] == vetor[i+1]){
    			printf("%d ", vetor[i]);
			}
		}
		if(vetor[i] != aux && vetor[i] == vetor[i+1]){
			printf("%d ", vetor[i]);
			aux = vetor[i];
		}
    }
}
