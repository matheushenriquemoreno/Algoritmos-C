#include <stdio.h>

int main() {
	int opcao;
	float angulo, conversao;
	printf("deseja ler o angulo em qual medida?\nGraus (1)\nradianos (2)\ndigite: ");
	fflush(stdout);
	scanf("%d",&opcao);

	if(opcao == 1){
		printf("digite o valor do algulo em graus: ");
		fflush(stdout);
		scanf("%f", &angulo);
		conversao =  (angulo * 3.14 / 180);
		printf("A conversão de graus para radianos e de: %.3f", conversao);
	}else if(opcao == 2) {
		printf("digite o valor do angulo em radianos: ");
		fflush(stdout);
		scanf("%f",&angulo);
		conversao = ((angulo * 180) / 3.14);
		printf("A conversão de radianos em graus e de: %.3f", conversao);
	}else{
		printf("erro!!");
	}
}
