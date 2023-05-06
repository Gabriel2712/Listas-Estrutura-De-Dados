#include <stdio.h>

float calcula_media(float, float, float, char);

int main(){
    float nota[3];
    char tipo_media;
    int i;

    for(i=0; i<3; i++){
        printf("Entre com a nota %d: ", i+1);
        scanf("%f", &nota[i]);
    }
    fflush(stdin);
    printf("Entre com a letra referente ao tipo de media a ser calculada: ");
    scanf("%c", &tipo_media);

    if(tipo_media == 'A' || tipo_media == 'P'){
        float media = calcula_media (nota[0], nota[1], nota[2], tipo_media);
        printf("\nA media solicitada (tipo %c) eh: %.2f", tipo_media, media);
    }else{
        printf("Tipo invalido!");
    }
}

float calcula_media(float n1, float n2, float n3, char tipo){
    float media;
    if (tipo == 'A'){
        media = (n1 + n2 + n3) / 3;
    }else{
        media = (n1 * 0.5) + (n2 * 0.3) + (n3 * 0.2);
    }
    return media;
}
