#include <stdio.h>

int main(){
	double produto, preco_novo;

	printf("informe o valor do produto: ");
	fflush(stdout);
	scanf("%lf", &produto);


	if(produto <= 50){
		preco_novo = (produto * 0.05) + produto;
		printf("o preço do produto atualizado com imposto e de: %.2lf", preco_novo);
	}else if(produto > 50 && produto <= 100){
		preco_novo = (produto * 0.10) + produto;
		printf("o preço do produto atualizado com imposto e de: %.2lf", preco_novo);
	}else if(produto > 100){
		preco_novo = (produto * 0.15) + produto;
		printf("o preço do produto atualizado com imposto e de: %.2lf", preco_novo);
	}else{
		printf("erro!");
	}


	return 0;
}
