#include <stdio.h>

void verifica_mes(int);

int main(){
    int mes;

    do{
        printf("Entre com um inteiro de 1 a 12 simbolizando um mes: ");
        scanf("%d", &mes);

        if(mes <1 || mes > 12){
            printf("Mes invalido! Tente novamente");
        }else{
            verifica_mes(mes);
        }
    }while(mes <1 || mes > 12);
}

void verifica_mes(int mes){
    if (mes == 1){
        printf("\nJaneiro. 31 dias");
    }else if (mes == 2){
        printf("\nFevereiro. 28 dias");
    }else if (mes == 3){
        printf("\nMarco. 31 dias");
    }else if (mes == 4){
        printf("\nAbril. 30 dias");
    }else if (mes == 5){
        printf("\nMaio. 31 dias");
    }else if (mes == 6){
        printf("\nJunho. 30 dias");
    }else if (mes == 7){
        printf("\nJulho. 31 dias");
    }else if (mes == 8){
        printf("\nAgosto. 31 dias");
    }else if (mes == 9){
        printf("\nSetembro. 30 dias");
    }else if (mes == 10){
        printf("\nOutubro. 31 dias");
    }else if (mes == 11){
        printf("\nNovembro. 30 dias");
    }else if (mes == 12){
        printf("\nDezembro. 31 dias");
    }
}

