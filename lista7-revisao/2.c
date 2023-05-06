#include <stdio.h>

int main(){
    int i, qtd_dias, ano, mes, dia_quente, temp_quente, dia_frio, temp_frio, dias_acima = 0;;

    printf("Informe o mes: ");
    scanf("%d", &mes);

    printf("Informe o ano: ");
    scanf("%d", &ano);

    printf("Informe a quantidade dias: ");
    scanf("%d", &qtd_dias);

    int temperatura[qtd_dias];

    for(i = 0; i < qtd_dias; i++){
        printf("Entre com a temperatura do dia %d: ", i+1);
        scanf("%d", &temperatura[i]);

        if(temperatura[i] > 17){
            dias_acima++;
        }

        if(i == 0){
            dia_frio = i;
            temp_frio = temperatura[i];
            dia_quente = i;
            temp_quente = temperatura[i];
        }else{
            if (temperatura[i] < temperatura[i-1]){
                dia_frio = i;
                temp_frio = temperatura[i];
            }else if (temperatura[i] > temperatura[i-1]){
                dia_quente = i;
                temp_quente = temperatura[i];
            }
        }
    }

    printf("\nMes e ano: %d/%d", mes, ano);
    printf("\nTemperatura mais quente: dia %d (posicao %d) com %d graus", dia_quente + 1, dia_quente, temp_quente);
    printf("\nTemperatura mais fria: dia %d (posicao %d) com %d graus", dia_frio + 1, dia_frio, temp_frio);
    printf("\nQuantidade de dias com temperatura acima de 17: %d", dias_acima);
    for(i = 0; i < qtd_dias; i++){
        if(temperatura[i] > 17){
            printf("\n  - Dia %d com %d graus", i+1, temperatura[i]);
        }
    }
}
