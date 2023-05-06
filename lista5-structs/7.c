#include <stdio.h>

typedef struct
{
    int matricula;
    char nome[50];
    float prova[2];
    float trabalho[2];
    float media;
} Aluno;

int main(){

    Aluno geral[50], aprov[50], reprov[50]; //Como nao eh possivel deixar com tamanho indefinido, defini um valor alto
    int  i=0, op, j, cont_aprovado = 0, cont_reprovado = 0;

	do{
		printf("1 - Cadastrar novo aluno");
        printf("\n2 - Encerrar e exibir informacoes");

        printf("\n\nEntre com a opcao desejada: ");
        scanf("%d", &op);

        if(op == 1){
	        printf("\nAluno %d", i+1);
	        printf("\nEntre com o nome: ");
	        fflush(stdin);
	        scanf("%[^\n]", &geral[i].nome);
	
	        printf("Entre com a matricula: ");
	        scanf("%d", &geral[i].matricula);
	        fflush(stdin);
	
	        for (j=0; j < 2; j++){
	            if (j==0){
	                geral[i].media = 0;
	            }
	
	            printf("Entre com a nota da prova %d: ", j+1);
	            scanf("%f",  &geral[i].prova[j]);
	            printf("Entre com a nota do trabalho %d: ", j+1);
	            scanf("%f",  &geral[i].trabalho[j]);
	
	            geral[i].media += geral[i].prova[j] * 0.3 + geral[i].trabalho[j] * 0.2;
	        }
			
			if (geral[i].media >= 6.0){
				aprov[cont_aprovado] =  geral[i];
				cont_aprovado++;
			}else{
				reprov[cont_reprovado] =  geral[i];
				cont_reprovado++;
			}
	        printf("\n----------------\n\n");
        	i++;
        }
    }while(op != 2);

    printf("\n==================");
    printf("\nTOTAL DE APROVADOS: %d\n\n", cont_aprovado);

    for (i=0; i < cont_aprovado; i++){
        printf("\nNome: %s", aprov[i].nome);
        printf("\nMatricula: %d", aprov[i].matricula);
        for (j=0; j < 2; j++){
            printf("\nNota da prova %d: %.2f", j+1, aprov[i].prova[j]);
            printf("\nNota do trabalho %d: %.2f", j+1, aprov[i].trabalho[j]);
        }
        printf("\nMedia: %.2f", aprov[i].media);
        printf("\n------------------\n");
    }

    printf("\n==================");
    printf("\nTOTAL DE REPROVADOS: %d\n\n", cont_reprovado);

    for (i=0; i < cont_reprovado; i++){
        printf("\nNome: %s", reprov[i].nome);
        printf("\nMatricula: %d", reprov[i].matricula);
        for (j=0; j < 2; j++){
            printf("\nNota da prova %d: %.2f", j+1, reprov[i].prova[j]);
            printf("\nNota do trabalho %d: %.2f", j+1, reprov[i].trabalho[j]);
        }
        printf("\nMedia: %.2f", reprov[i].media);
    }
}

