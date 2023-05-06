#include <stdio.h>
#include <string.h>

int main(){

    char frase[20];

    printf("Entre com um nome: ");
    scanf("%20[^\n]", &frase);

    int i, cont=0;

    for (i = 0; i < strlen(frase); i++){
        if (frase[i] == ' ')
        {
            cont++;
        }
    }
    printf("\Quantidade de espacos em branco: %d", cont);
}
