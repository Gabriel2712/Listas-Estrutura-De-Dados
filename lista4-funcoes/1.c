#include <stdio.h>

int verifica_maior(int, int);

int main(){
    int n1, n2;

    printf("Entre com o primeiro numero: ");
    scanf("%d", &n1);

    printf("Entre com o primeiro numero: ");
    scanf("%d", &n2);

    int maior;

    maior = verifica_maior(n1, n2);
    printf("\nO maior numero e: %d", maior);
}

int verifica_maior(int num1, int num2){
    if (num1 > num2){
        return num1;
    }else{
        return num2;
    }
}
