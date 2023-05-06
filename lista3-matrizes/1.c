#include <stdio.h>

int main(){
    char string[100];

    printf("Entre com uma string: ");
    scanf("%100[^\n]", &string);

    int cont=0;

    while (string[cont] != '\0'){
        printf("%c\n", string[cont]);
        cont++;
    }
    printf("Total de caracteres: %d", cont);
}
