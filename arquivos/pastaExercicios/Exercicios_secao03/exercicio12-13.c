#include <stdio.h>

int main(){
	int opcao;
	float distancia, conversao;

	printf("Qual a medida de distancia utilizada no seu Pais?\ndigite (1) para Milhas e (2) para Quil�metros.\ndigite:");
	fflush(stdout);

	scanf("%d",&opcao);
	if(opcao == 1){
		printf("Agora digite a distancia percorrida:");
		fflush(stdout);
		scanf("%f",&distancia);
		conversao = 1.61 * distancia;
		printf("A convers�o de Milhas para Quil�metros e de: %.2f", conversao);
	}else if(opcao == 2){
		printf("Agora digite a distancia percorrida: ");
		fflush(stdout);
		scanf("%f",&distancia);
		conversao = distancia / 1.61;
		printf("A convers�o de Quil�metros para Milhas e de: %.2f", conversao);
	}else{
		printf("erro!");
	}
}
