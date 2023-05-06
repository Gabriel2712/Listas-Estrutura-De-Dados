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

    Pessoa p[20];
    int op, total_p = 0, i;

    do{
        printf("1 - Cadastrar nova pessoa");
        printf("\n2 - Encerrar e exibir informacoes");

        printf("\n\nEntre com a opcao desejada: ");
        scanf("%d", &op);

        if(op == 1){
            fflush(stdin);
            printf("\nEntre com o nome: ");
            scanf("%[^\n]", &p[total_p].nome);

            printf("Entre com a idade: ");
            scanf("%d", &p[total_p].idade);

            fflush(stdin);
            printf("Entre com a cidade: ");
            scanf("%[^\n]", &p[total_p].endereco.cidade);

            fflush(stdin);
            printf("Entre com a rua: ");
            scanf("%[^\n]", &p[total_p].endereco.rua);

            fflush(stdin);
            printf("Entre com o numero: ");
            scanf("%d", &p[total_p].endereco.numero);

            total_p++;
            printf("\n");
        }
    }while(op != 2);

    printf("\n==================");
    printf("\nEXIBICAO DOS DADOS\n\n");
    printf("Total de pessoas cadastradas: %d", total_p);

    for (i=0; i < total_p; i++){
        printf("\nNome: %s", p[i].nome);
        printf("\nIdade: %d", p[i].idade);
        printf("\nEndereco\nCidade: %s", p[i].endereco.cidade);
        printf("\nRua: %s", p[i].endereco.rua);
        printf("\nNumero: %d", p[i].endereco.numero);
        printf("\n------------------\n");
    }


}

