#include <stdio.h>

int main(){
	float metros_cubicos;

	printf("informe o valor em metros c�bicos para a convers�o em litros: ");
	fflush(stdout);
	scanf("%f", &metros_cubicos);

	float conversao = 1000 * metros_cubicos;

	printf("o valor convertido e: %.fL", conversao);


}
