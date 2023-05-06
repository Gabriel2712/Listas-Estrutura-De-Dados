#include <stdio.h>

int main(){

    char nome[25];

    printf("Entre com um nome: ");
    scanf("%25[^\n]", &nome);

    if (nome[0] == 'A' || nome[0] == 'a'){
        printf("%s", nome);
    }
}
