#include <stdio.h>

int main(){

    char nome[50];

    printf("Entre com um nome: ");
    scanf("%50[^\n]", &nome);

    int i;

	printf("Codigo ASCII original: ");
    for (i = 0; i < strlen(nome); i++){
		printf("%d ", (int)nome[i]);
    }
    
    printf("\nNovo codigo ASCII (com incremento de 1): ");
    for (i = 0; i < strlen(nome); i++){
    	(int)nome[i]++;
		printf("%d ", (int)nome[i]);
    }
    
    printf("\nString resultante: %s", nome);
}
