#include <stdio.h>

int main(){
	float produto;

	printf("Informe o valor do produto para aplicarmos o desconto de 12%: ");
	fflush(stdout);
	scanf("%f", &produto);

	float desconto = produto * 0.12;
	float produto_com_desconto = produto - desconto;

	printf("o valor do produto e de R$%.2f", produto_com_desconto);

}
