#include <stdio.h>

int main(){
	double kilometro, litros;

	printf("informe quantos kilometros dirigiu: ");
	fflush(stdout);
	scanf("%lf", &kilometro);

	printf("Qual foi a quantidade de litros de gastos no percuso de %.1lfkm: ", kilometro);
	fflush(stdout);
	scanf("%lf", &litros);

	int comsumo = (int) kilometro / litros;
	if(comsumo < 8){
		printf("O consumo do seu caro foi de %dkm/l.\n", comsumo);
		printf("Venda seu carro!!");
	}else if(comsumo >= 8 && comsumo <= 14){
		printf("O consumo do seu caro foi de %dkm/l.\n", comsumo);
		printf("Seu carro e Econômico!!");
	}else if(comsumo >= 15){
		printf("O consumo do seu caro foi de %dkm/l.\n", comsumo);
		printf("Super Econômico!!");
	}else{
		printf("erro!!");
	}
	return 0;
}
