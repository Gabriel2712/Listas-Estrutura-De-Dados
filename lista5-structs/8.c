#include <stdio.h>
#define qtd_prod 10

typedef struct
{
    int codigo;
    char nome[15];
    float preco;
    int quantidade;
} Produto;

typedef struct
{
    Produto produto[50]; // declarando um numero alto pois ainda nao vimos alocacao dinamica
    int qtd_itens;
    float valor_pedido;
} Pedido;


int main(){

    Produto estoque[qtd_prod];
	Pedido pedido;
    
    int  i, op, cont_prod = 0, cod = 1, qtd;

	for (i=0; i < qtd_prod; i++){
		printf("Produto %d", i+1);
		printf("\nEntre com o codigo: ");
        fflush(stdin);
        scanf("%d", &estoque[i].codigo);
		
        fflush(stdin);
        printf("Entre com o nome: ");
        scanf("%[^\n]", &estoque[i].nome);

        printf("Entre com o preco: ");
        scanf("%f", &estoque[i].preco);
        
		printf("Entre com a quantidade em estoque: ");
        scanf("%d", &estoque[i].quantidade);
        
        printf("\n----------------\n\n");
	}
	
	printf("Produtos cadastrados!");
	printf("\nPARTINDO PARA REALIZACAO DE PEDIDO (para encerrar digite 0)\n");
	
	pedido.valor_pedido = 0;
	pedido.qtd_itens = 0;
	// nao tratarei os casos de erro (exibindo por exemplo codigo inexistente ou estoque insuficente) por conta de ja ser um exercicio bem extenso em uma lista enorme, demandando muitas e muitas horas para realizacao;
	while(cod != 0){
		printf("\nItem %d do pedido\n", cont_prod + 1);
		printf("Entre com o codigo do produto: ");
        scanf("%d", &cod);
        
        if (cod != 0){
        
	        printf("Entre com a quantidade: ");
	        scanf("%d", &qtd);
	        
	        for(i=0; i < qtd_prod; i++){
	        	if (estoque[i].codigo == cod && estoque[i].quantidade >= qtd){
	        		estoque[i].quantidade -= qtd;
	        		pedido.produto[cont_prod] = estoque[i];
	        		pedido.produto[cont_prod].quantidade = qtd;
	        		pedido.valor_pedido += qtd * pedido.produto[i].preco;
	        		pedido.qtd_itens += qtd;
	        		cont_prod++;
	        	}
			}
		}
        
    }

    printf("\n==================");
    printf("\nExibicao do pedido");
    printf("\nValor total: %.2f", pedido.valor_pedido);
    printf("\nQuantidade de itens: %d", pedido.qtd_itens);

	printf("\nListagem de itens do pedido:\n");
    for (i=0; i < cont_prod; i++){
    	printf("\nCodigo do produto: %d", pedido.produto[i].codigo);
        printf("\nNome do produto: %s", pedido.produto[i].nome);
        printf("\nQuantidade comprada: %d", pedido.produto[i].quantidade);
        printf("\nValor unitario: %.2f", pedido.produto[i].preco);
        printf("\nValor total gasto nesse produto: %.2f", pedido.produto[i].quantidade * pedido.produto[i].preco);
        printf("\n------------------\n");
    }
}

