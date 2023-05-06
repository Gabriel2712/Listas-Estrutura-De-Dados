#include <stdio.h>

int main()
{
	int qtd_vendas, i;
    float preco_kg, peso_total = 0, valor_total = 0;

    printf("Entre com o preco do quilo de bananas: ");
    scanf("%f", &preco_kg);

    printf("Entre com a quantidade de vendas: ");
    scanf("%d", &qtd_vendas);

    for (i = 1; i <= qtd_vendas; i++)
    {
        float peso_venda, valor_venda;

        printf("\nEntre com o peso da venda %d (em quilos): ", i);
        scanf("%f", &peso_venda);

        valor_venda = preco_kg * peso_venda;

        printf("Valor da venda %d: R$ %.2f\n", i, valor_venda);

        peso_total += peso_venda;
        valor_total += valor_venda;
    }

	printf("\nINFORMACOES DO DIA\n");
    printf("Peso total vendido: %.2f kg\n", peso_total);
    printf("Valor total vendido: R$ %.2f\n", valor_total);
    printf("Peso medio por venda: %.2f kg\n", peso_total / qtd_vendas);
}
