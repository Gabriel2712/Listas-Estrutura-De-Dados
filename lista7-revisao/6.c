#include <stdio.h>

void conversao(float *metragem){
    printf("\nJardas: %.2f", *metragem * 1094);
    printf("\nPes: %.2f", *metragem * 3.281);
    printf("\nPolegadas: %.2f", *metragem * 39.3701);
}

int main(){

    float metro;

    printf("Entre com uma medida (metros): ");
    scanf("%f", &metro);

    float *p = &metro;

    conversao(p);

}
