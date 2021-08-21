#include <stdio.h>

int main(){
	int opcao;
	float comprimento, conversao;

	printf("o comprimento e em qual medida:\npolegadas (1) \ncentimetros (2)\ndigite:");
	fflush(stdout);
	scanf("%d",&opcao);
	if(opcao == 1){
		printf("digite comprimeto em polegadas: ");
		fflush(stdout);
		scanf("%f",&comprimento);
		conversao = comprimento * 2.54;
		printf("o valor converdido de polegadas para centimetros e de: %.2f", conversao);

	}else if(opcao == 2){
		printf("digite o comprimento em centímetros: ");
		fflush(stdout);
		scanf("%f", &comprimento);
		conversao = comprimento / 2.54;
		printf("A conversão de centímetros para polegadas foi de: %.2f", conversao);
	}else{
		printf("erro!");
	}

}
