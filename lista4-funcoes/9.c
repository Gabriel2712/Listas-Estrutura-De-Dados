#include <stdio.h>

int verifica_aprovacao(int, int, double);

int main() {
    int total_aulas, flts_aluno;
    double nota_aluno;
    printf("Entre com o total de aulas: ");
    scanf("%d", &total_aulas);
    printf("Entre com o numero de faltas do aluno: ");
    scanf("%d", &flts_aluno);
    fflush(stdin);
    printf("Entre com a nota do aluno: ");
    scanf("%lf", &nota_aluno);
    printf("=========================\n");
    int resultado = verifica_aprovacao(total_aulas, flts_aluno, nota_aluno);
    
    if (resultado == 1) {
        printf("Aluno aprovado!\n");
    } else {
        printf("Aluno reprovado!\n");
    }
}

int verifica_aprovacao(int tot_aulas, int faltas, double nota) {
    double freq_aluno = (double)(tot_aulas - faltas) / tot_aulas;
    if (freq_aluno < 0.75) {
        printf("Frequencia insuficiante, %d faltas em %d aulas totalizando %.2lf de 1.00\n", faltas, tot_aulas, freq_aluno);
        return 0;
    } else if (nota < 6.0) {
        printf("Nota insuficiente, %.2lf não alcanca a media 6\n", nota);
        return 0;
    } else {
    	printf("Frequencia OK: %.2lf de 1.0\nNota OK: %.2lf (>=6)\n", freq_aluno, nota);
        return 1;
    }
}

