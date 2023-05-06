#include <stdio.h>
#include <stdlib.h>

int* cria_vetor(int N) {
	int i;
    int* vetor = calloc(N, sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memoria!");
    }else{
	    for (i = 0; i < N; i++) {
	        vetor[i] = i;
	    }
	}
	return vetor;
}

int main() {
    int N, i;
    printf("Entre com o tamanho do vetor: ");
    scanf("%d", &N);
    int* vetor = cria_vetor(N);
    if(vetor != NULL){
	    for (i = 0; i < N; i++) {
	        printf("%d ", vetor[i]);
	    }
	    printf("\n");
	}
	free(vetor);
    return 0;
}

