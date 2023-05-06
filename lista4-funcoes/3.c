#include <stdio.h>
#include <math.h>

float calcula_volume(float, float);

int main(){
    float alt, vol;

    printf("Entre a altura do cilindro: ");
    scanf("%f", &alt);

    printf("Entre com o raio do mesmo: ");
    scanf("%f", &vol);

    float volume = calcula_volume(alt, vol);

    printf("\nVolume: %.2f", volume);
}

float calcula_volume(float altura, float raio){
    float v;
    //V = p * raio² * altura, em que p = 3.1414592

    v = 3.1414592 * (pow(raio,2) * altura);

    return v;
}

