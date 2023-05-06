#include <stdio.h>
#include <string.h>

int main(){

    char string1[20], string2[20];


    printf("Entre com uma string: ");
    scanf("%20[^\n]", &string1);
    setbuf(stdin, NULL);

    printf("Entre com outra string: ");
    scanf("%20[^\n]", &string2);

    int i=0;

    if (strlen(string1) == strlen(string2)){
        while (string1[i] == string2[i]){
            i++;
        }
        if((i-1) == strlen(string1)){
            printf("Strings iguais");
        }else{
            printf("Strings diferentes");
        }
    }else{
        printf("Strings diferentes");
    }
}


