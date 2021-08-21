#include <stdio.h>

int main(){
	double preco_fabrica, preco_comsumidor;

	printf("informe o custo de fabrica do carro: ");
	fflush(stdout);
	scanf("%lf", &preco_fabrica);

	if(preco_fabrica <= 12000){
		preco_comsumidor = (preco_fabrica * 0.05) + preco_fabrica;
		printf("preco para comsumidor final com 5%% de juros R$%.2lf",preco_comsumidor);
	}else if(preco_fabrica >= 12000 && preco_fabrica <= 25000){
		preco_comsumidor = (preco_fabrica * 0.25) + preco_fabrica;
		printf("preco para comsumidor final com 25 %% de juros R$%.2lf",preco_comsumidor);
	}else if(preco_fabrica >= 25000){
		preco_comsumidor = (preco_fabrica * 0.35) + preco_fabrica;
		printf("preco para comsumidor final com 35%% de juros R$%.2lf",preco_comsumidor);
	}else{
		printf("erro!");
	}
}
