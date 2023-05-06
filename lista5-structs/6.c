#include <stdio.h>

typedef struct
{
    int dia;
	int mes;
    int ano;
} Data;

int main(){

    int i, total_d[2], diferenca;
	Data d[2];
	
    for (i=0; i < 2; i++){
    	
    	printf("Data %d\n", i + 1 );

        printf("Entre com o dia: ");
        scanf("%d", &d[i].dia); 
        
        printf("Entre com o mes (de 1 a 12): ");
        scanf("%d", &d[i].mes);
        
        printf("Entre com o ano: ");
        scanf("%d", &d[i].ano);
        
        total_d[i] = d[i].ano * 360 + d[i].mes * 30 + d[i].dia;
	}
	
	if(total_d[0] > total_d[1]){
		diferenca = total_d[0] - total_d[1];
	}else{
		diferenca = total_d[1] - total_d[0];
	}

	printf("Diferenca: %d dias", diferenca);
}

