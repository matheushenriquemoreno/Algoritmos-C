#include <stdio.h>

int main(){
	float valor_produto, valor_desconto, valor_parcela, comissao_vendedor,produto_com_desconto;
	printf("informe o valor do produto: ");
	fflush(stdout);
	scanf("%f", &valor_produto);

	valor_desconto = valor_produto * 0.10;
	produto_com_desconto = valor_produto - valor_desconto;
	valor_parcela = valor_produto /3;
	comissao_vendedor = valor_produto * 0.05;

	printf("valor produto com desconto: R$%.2f\n"
			"valor do produto divido em 3x R$%.2f\n"
			"valor da comissao do vendedor R$%.2f", produto_com_desconto, valor_parcela,comissao_vendedor);









}
