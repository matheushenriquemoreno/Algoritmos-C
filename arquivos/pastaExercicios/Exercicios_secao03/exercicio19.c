#include <stdio.h>

int main(){
	float litros, conversao;

	printf("informe o valor em litroa para convers�o em metros c�bicos: ");
	fflush(stdout);
	scanf("%d", &litros);

	conversao = litros / 1000;

	printf("o valor converdido e: %.2f", conversao);



}
