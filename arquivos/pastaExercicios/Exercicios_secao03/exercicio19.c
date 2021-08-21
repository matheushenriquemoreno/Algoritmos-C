#include <stdio.h>

int main(){
	float litros, conversao;

	printf("informe o valor em litroa para conversão em metros cúbicos: ");
	fflush(stdout);
	scanf("%d", &litros);

	conversao = litros / 1000;

	printf("o valor converdido e: %.2f", conversao);



}
