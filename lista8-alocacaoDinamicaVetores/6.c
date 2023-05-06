#include <stdio.h>
#include <stdlib.h>

struct Endereco {
    int numero;
    char cidade[30];
    char estado[3];
    char cep[10];
};
struct Cadastro {
    char nome[50];
    int idade;
    struct Endereco endereco;
};
struct Cadastro* criarVetorCadastro(int N) {
    struct Cadastro* vetorCadastro = (struct Cadastro*) malloc(N * sizeof(struct Cadastro));
    return vetorCadastro;
}

void preencherVetorCadastro(struct Cadastro* vetorCadastro, int N) {
	int i;
    for (i = 0; i < N; i++) {
        printf("\n--- Cadastro %d ---\n", i+1);
        printf("Nome: ");
        scanf(" %[^\n]", vetorCadastro[i].nome);
        printf("Idade: ");
        scanf("%d", &vetorCadastro[i].idade);
        printf("Endereco:\n");
        printf("Cidade: ");
        scanf(" %[^\n]", vetorCadastro[i].endereco.cidade);
        printf("Estado: ");
        scanf(" %[^\n]", vetorCadastro[i].endereco.estado);
        printf("CEP: ");
        scanf(" %[^\n]", vetorCadastro[i].endereco.cep);
        printf("Numero: ");
        scanf("%d", &vetorCadastro[i].endereco.numero);
    }
}

void imprimirVetorCadastro(struct Cadastro* vetorCadastro, int N) {
    int i;
    printf("\n========= EXIBICAO DOS CADASTROS =========\n");
	for (i = 0; i < N; i++) {
        printf("\n--- Cadastro %d ---\n", i+1);
        printf("Nome: %s\n", vetorCadastro[i].nome);
        printf("Idade: %d\n", vetorCadastro[i].idade);
        printf("Endereco:\n");
        printf("Cidade: %s\n", vetorCadastro[i].endereco.cidade);
        printf("Estado: %s\n", vetorCadastro[i].endereco.estado);
        printf("CEP: %s\n", vetorCadastro[i].endereco.cep);
        printf("Numero: %d\n", vetorCadastro[i].endereco.numero);
    }
}

int main() {
    int N;
    printf("Digite o numero de cadastros: ");
    scanf("%d", &N);
    struct Cadastro* vetorCadastro = criarVetorCadastro(N);
    if (vetorCadastro == NULL) {
        printf("Erro ao alocar memoria!");
    }else{
	    preencherVetorCadastro(vetorCadastro, N);
	    imprimirVetorCadastro(vetorCadastro, N);
	}
    free(vetorCadastro);
    return 0;
}
