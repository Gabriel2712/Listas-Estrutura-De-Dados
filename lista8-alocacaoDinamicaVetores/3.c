#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    float *vetor, soma = 0, media;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    vetor = (float*) malloc(n * sizeof(float));

    if (vetor == NULL) {
        printf("Erro ao alocar memoria.");
        return 1;
    }

    for (i = 0; i < n; i++) {
    	printf("Entre com o %d numero: ", i+1);
        scanf("%f", &vetor[i]);
        soma += vetor[i];
    }

    media = soma / n;

    printf("\nSoma = %.2f", soma);
	printf("\nMedia = %.2f", media);

    free(vetor);
    return 0;
}

