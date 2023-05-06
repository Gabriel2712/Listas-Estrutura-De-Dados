#include <stdio.h>

int converte_para_segundos(int, int, int);

int main(){
    int horas, minutos, segundos;

    printf("Entre com a quantidade de horas: ");
    scanf("%d", &horas);

    printf("Entre com a quantidade de minutos: ");
    scanf("%d", &minutos);

    printf("Entre com a quantidade de segundos: ");
    scanf("%d", &segundos);

    int total_segundos = converte_para_segundos(horas, minutos, segundos);

    printf("\nTotal de segundos: %d", converte_para_segundos(horas, minutos, segundos));
}

int converte_para_segundos(int hrs, int mins, int sgds){
    int total_sgds;

    total_sgds = (hrs * 3600) + (mins * 60) + sgds;

    return total_sgds;
}


