#include <stdio.h>

typedef struct
{
    char rua[60];
    char cidade[30];
    int numero;
} Endereco;

typedef struct
{
    char nome[40];
    int idade;
    Endereco endereco;
} Pessoa;

int main(){

    Pessoa p1;

    printf("Entre com o nome: ");
    scanf("%[^\n]", &p1.nome);

    printf("Entre com a idade: ");
    scanf("%d", &p1.idade);

    fflush(stdin);
    printf("Entre com a cidade: ");
    scanf("%[^\n]", &p1.endereco.cidade);

    fflush(stdin);
    printf("Entre com a rua: ");
    scanf("%[^\n]", &p1.endereco.rua);

    fflush(stdin);
    printf("Entre com o numero: ");
    scanf("%d", &p1.endereco.numero);

    printf("\n==================\n");

    printf("\nNome: %s", p1.nome);
    printf("\nIdade: %d", p1.idade);
    printf("\nEndereco\nCidade:: %s", p1.endereco.cidade);
    printf("\nRua: %s", p1.endereco.rua);
    printf("\nNumero: %d", p1.endereco.numero);


}
