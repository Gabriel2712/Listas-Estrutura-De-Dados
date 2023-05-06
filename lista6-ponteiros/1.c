#include <stdio.h>

int main(){

    int n1, n2;

    printf("Entre com um numero inteiro: ");
    scanf("%d", &n1);
    printf("Entre com outro numero inteiro: ");
    scanf("%d", &n2);

    if(&n1 > &n2){
         printf("\nA variavel n1 possui o maior endereco, sendo: %p", &n1);
    }else{
        printf("\nA variavel n2 possui o maior endereco, sendo: %p", &n2);
    }

    if(n1 > n2){
        printf("\nA variavel n1 possui o maior conteudo, com: %d", n1);
    }else{
        printf("\nA variavel n2 possui o maior conteudo, com: %d", n2);
    }
}
