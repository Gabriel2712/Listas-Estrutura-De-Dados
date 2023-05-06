#include <stdio.h>
#include <string.h>

int main(){

    char palavra[30];

    printf("Entre com uma palavra: ");
    scanf("%30[^\n]", &palavra);

    int i;

    printf("Palavra de tras para frente: ");
    for (i = strlen(palavra); i >= 0; i--){
        printf("%c", palavra[i]);
    }
}
