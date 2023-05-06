#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno{
	int num_matricula;
	char nome[60];
	float prova[3];
};

int main(){
	printf("Tamanho da estrutura Aluno: %d bytes", sizeof(struct Aluno));
}
