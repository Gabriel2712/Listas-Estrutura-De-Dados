#include <stdio.h>
#include <string.h>

int main(){

    char nome[40];

    printf("Entre com um nome: ");
    scanf("%40[^\n]", &nome);

    int i, qtd_consoante = 0, qtd_vogal = 0;

    for (i = 0; i < strlen(nome); i++){
        if (nome[i] == 'a' || nome[i] == 'e' || nome[i] == 'i' || nome[i] == 'o' || nome[i] == 'u' ||
            nome[i] == 'A' || nome[i] == 'E' || nome[i] == 'I' || nome[i] == 'O' || nome[i] == 'U')
        {
            qtd_vogal++;
        }
        else{
            qtd_consoante++;
        }
    }
    printf("\nQuantidade de vogais: %d", qtd_vogal);
    printf("\nQuantidade de consoantes: %d", qtd_consoante);
}

