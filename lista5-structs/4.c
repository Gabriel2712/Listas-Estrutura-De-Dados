#include <stdio.h>

typedef struct
{
    int horas;
    int minutos;
    int segundos;
} Tempo;

int main(){

    Tempo t1;

    printf("Entre com o total de segundos: ");
    scanf("%d", &t1.segundos);

    if (t1.segundos / 3600  >= 1){
        t1.horas = t1.segundos / 3600;
        t1.segundos = t1.segundos % 3600;
    }

    if (t1.segundos / 60  >= 1){
        t1.minutos = t1.segundos / 60;
        t1.segundos = t1.segundos % 60;
    }

    printf("\n==================\n");
    printf("Conversao para horas, minutos e segundos..");
    printf("\nHoras: %d", t1.horas);
    printf("\nMinutos: %d", t1.minutos);
    printf("\nSegundos: %d", t1.segundos);
}

