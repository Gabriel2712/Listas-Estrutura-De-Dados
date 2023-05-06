#include <stdio.h>

int main() {
    int i, tamanho;
    
    do{
    
		printf("Entre com a quantidade de numeros reais que voce ira entrar (maximo 20): ");
		scanf("%d", &tamanho);

	    if (tamanho > 20){
	  	 printf("\nQuantidade invalida!\n");
	    }else{
	  
			float vetor[tamanho], quadrado[tamanho];
			  
			for (i = 0; i < tamanho; i++) {
			    printf("Entre com o valor %d: ", i+1);
			    scanf("%f", &vetor[i]);
			    quadrado[i] = vetor[i] * vetor[i];
			}
			  
			printf("\nVetor original:\n");
			for (i = 0; i < tamanho; i++){
			    printf("%.2f ", vetor[i]);
			}
			printf("\n\nVetor com os quadrados:\n");
			for (i = 0; i < tamanho; i++){
			    printf("%.2f ", quadrado[i]);
			}
		}
	}while(tamanho > 20 || tamanho < 0); // nesse laço, haverá a repetição do trecho do while caso o usuário com tamanho inválido para o vetor
}
