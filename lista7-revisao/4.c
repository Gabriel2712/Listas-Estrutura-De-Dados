#include <stdio.h>

int main(){
    int i,  qtd_partidas, v_ponte = 0, v_guarani = 0, empate = 0;

    printf("Entre com a quantidade de confrontos: ");
    scanf("%d", &qtd_partidas);

    int tabela[qtd_partidas][2];

    printf("Placares de Guarani e Ponte -->\n");
    for (i=0; i < qtd_partidas; i++){
        printf("\nConfronto %d\n", i+1);
        printf("Guarani: ");
        scanf("%d", &tabela[i][0]);
        printf("Ponte: ");
        scanf("%d", &tabela[i][1]);

        if (tabela[i][0] > tabela[i][1]){
            v_guarani++;
        }else if(tabela[i][0] == tabela[i][1]){
            empate++;
        }else{
            v_ponte++;
        }
    }

    printf("\n=====================\n");
    printf("\nTotal de vitorias do Guarani: %d", v_guarani);
    printf("\nTotal de vitorias da Ponte: %d", v_ponte);
    printf("\nTotal de empate entre os dois clubes: %d", empate);
    if(v_guarani > v_ponte){
        printf("\nCom base nos resultados, Guarani eh o melhor clube!");
    }else if(v_ponte > v_guarani){
        printf("\nCom base nos resultados, Ponte Preta eh o melhor clube!");
    }else{
        printf("\nHá um equilibrio em resultados entre os dois clubes!");
    }

}

