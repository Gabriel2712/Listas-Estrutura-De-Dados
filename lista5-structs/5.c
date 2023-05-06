#include <stdio.h>

typedef struct
{
    int dia;
	int mes;
    int ano;
} Data;

typedef struct
{
    char nome[40];
    Data dataNascimento;
} Pessoa;


int main(){

    int qtd_pessoas, i;

    printf("Entre com o numero de pessoas que voce ira entrar entrar: ");
    scanf("%d", &qtd_pessoas);

	Pessoa p[qtd_pessoas], p_mais_velha, p_mais_nova;
	
    for (i=0; i < qtd_pessoas; i++){
    	
    	printf("\nPessoa %d", i + 1 );
    	
    	setbuf(stdin, NULL);
    	printf("\nEntre com o nome: ");
        scanf("%[^\n]", &p[i].nome);

        printf("Entre com o ano de nascimento: ");
        scanf("%d", &p[i].dataNascimento.ano);
        
        printf("Entre com o mes de nascimento (de 1 a 12): ");
        scanf("%d", &p[i].dataNascimento.mes);
        
        printf("Entre com o dia de nascimento: ");
        scanf("%d", &p[i].dataNascimento.dia);
        
        if (i == 0){
        	p_mais_velha = p[i];
        	p_mais_nova = p[i];
		}else{
			if (p[i].dataNascimento.ano >= p_mais_nova.dataNascimento.ano){
				if(p[i].dataNascimento.ano > p_mais_nova.dataNascimento.ano){
					p_mais_nova = p[i];
				}else{
					if (p[i].dataNascimento.mes >= p_mais_nova.dataNascimento.mes){
						if (p[i].dataNascimento.mes > p_mais_nova.dataNascimento.mes){
							p_mais_nova = p[i];	
						}else{
							if (p[i].dataNascimento.dia > p_mais_nova.dataNascimento.dia){
								p_mais_nova = p[i];
							}
						}
					}
				}
			}
				
			if (p[i].dataNascimento.ano <= p_mais_velha.dataNascimento.ano){
				if (p[i].dataNascimento.ano < p_mais_velha.dataNascimento.ano){
					p_mais_velha = p[i];
				}else{
					if (p[i].dataNascimento.mes <= p_mais_velha.dataNascimento.mes){
						if (p[i].dataNascimento.mes < p_mais_velha.dataNascimento.mes){
							p_mais_velha = p[i];
						}else{
							if (p[i].dataNascimento.dia < p_mais_velha.dataNascimento.dia){
								p_mais_velha = p[i];
							}
						}
					}
				}
			}
		}
	}

	printf("\nPessoa mais velha -->");
	printf("\nNome: %s", p_mais_velha.nome);
	printf("\ndata de nascimento: %d/%d/%d", p_mais_velha.dataNascimento.dia, p_mais_velha.dataNascimento.mes, p_mais_velha.dataNascimento.ano);

	printf("\n\nPessoa mais nova -->");
	printf("\nNome: %s", p_mais_nova.nome);
	printf("\nData de nascimento: %d/%d/%d", p_mais_nova.dataNascimento.dia, p_mais_nova.dataNascimento.mes, p_mais_nova.dataNascimento.ano);

}

