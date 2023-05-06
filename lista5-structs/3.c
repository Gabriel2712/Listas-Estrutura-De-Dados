#include <stdio.h>
#include <string.h>
#define qtd_aluno 5

typedef struct
{
    int matricula;
    char nome[50];
    float nota[4];
    float media;
    char situacao[15];
} Aluno;

int main(){

    Aluno alu[qtd_aluno];
    int  i, j;

    for (i=0; i < qtd_aluno; i++){
        printf("Aluno %d\n", i+1);
        printf("\nEntre com o nome: ");
        fflush(stdin);
        scanf("%[^\n]", &alu[i].nome);

        printf("Entre com a matricula: ");
        scanf("%d", &alu[i].matricula);
        fflush(stdin);

        for (j=0; j < 4; j++){
            if (j==0){
                alu[i].media = 0;
            }

            printf("Entre com a nota %d: ", j+1);
            scanf("%f",  &alu[i].nota[j]);

            if(j % 2 ==0) {
                alu[i].media += alu[i].nota[j] * 0.3;
            }else{
                alu[i].media += alu[i].nota[j] * 0.2;
            }
        }

        if (alu[i].media < 4){
            strcpy(alu[i].situacao, "Reprovado");
        }else if (alu[i].media < 6){
            strcpy(alu[i].situacao, "Recuperacao");
        }else{
            strcpy(alu[i].situacao, "Aprovado");
        }

        printf("\n----------------\n\n");
    }

    printf("\n==================");
    printf("\nEXIBICAO DOS ALUNOS\n\n");

    for (i=0; i < qtd_aluno; i++){
        printf("\nNome: %s", alu[i].nome);
        printf("\nMatricula: %d", alu[i].matricula);
        for (j=0; j < 4; j++){
            printf("\nNota %d: %.2f", j+1, alu[i].nota[j]);
        }
        printf("\nMedia: %.2f", alu[i].media);
        printf("\nSituacao: %s", alu[i].situacao);
        printf("\n------------------\n");
    }
}

