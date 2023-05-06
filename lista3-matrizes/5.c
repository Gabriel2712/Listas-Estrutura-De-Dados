#include <stdio.h>
#include <string.h>

int main(){

    char nome[40];

    printf("Entre com um nome: ");
    scanf("%40[^\n]", &nome);

    int i, cont=0;

    for (i = 0; i < strlen(nome); i++){
        if (nome[i] == '1')
        {
            cont++;
        }
    }
    printf("\Quantidade de 1's: %d", cont);
}
