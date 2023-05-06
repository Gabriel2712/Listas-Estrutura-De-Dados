#include <stdio.h>

typedef struct {
    int ano;
    int mes;
    int dia;
} DataNascimento;

typedef struct {
    char cidade[40];
    char bairro[70];
    char rua[70];
    int numero;
} Endereco;

typedef struct {
    char nome[40];
    char cpf[15];
    DataNascimento dataNascimento;
    Endereco endereco;
} Pessoa;


int main(){
    Pessoa p[50];
    int i, fim = 1, qtd = 0;

    while(fim != 0){

        fflush(stdin);
        printf("Deseja cadastrar uma nova pessoa (0 para sair)? ");
        scanf("%d", &fim);

        if (fim!=0){
            printf("\nPessoa %d", qtd+1);

            fflush(stdin);
            printf("\nEntre com o nome: ");
            gets(p[qtd].nome);

            fflush(stdin);
            printf("Entre com o cpf: ");
            gets(p[qtd].cpf);

            fflush(stdin);
            printf("Entre com o dia de nascimento: ");
            scanf("%d", &p[qtd].dataNascimento.dia);

            printf("Entre com o mes de nascimento: ");
            scanf("%d", &p[qtd].dataNascimento.mes);

            printf("Entre com o ano de nascimento: ");
            scanf("%d", &p[qtd].dataNascimento.ano);

            fflush(stdin);
            printf("Entre com a cidade: ");
            gets(p[qtd].endereco.cidade);

            fflush(stdin);
            printf("Entre com o bairro: ");
            gets(p[qtd].endereco.bairro);

            fflush(stdin);
            printf("Entre com a rua: ");
            gets(p[qtd].endereco.rua);

            printf("Entre com o numero: ");
            scanf("%d", &p[qtd].endereco.numero);

            qtd++;
        }
    }

    printf("\n-----------------");
    printf("\nQuantidade de pessoas armazenadas: %d", qtd);

    for(i = 0; i < qtd; i++){
        printf("\n-----------------\n");
        printf("\nPessoa %d", qtd);
        printf("\nNome: %s", p[i].nome);
        printf("\nCPF: %s", p[i].cpf);
        printf("\nData de nascimento: %d/%d/%d", p[i].dataNascimento.dia, p[i].dataNascimento.mes, p[i].dataNascimento.ano);
        printf("\nEndereco: %s, %d. %s - %s ",p[i].endereco.rua, p[i].endereco.numero, p[i].endereco.bairro, p[i].endereco.cidade);
    }
}
