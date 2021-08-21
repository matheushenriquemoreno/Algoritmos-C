#include <stdio.h>

int main(){
	float massa, conversao;

	printf("informe o valor de massa em quilogramas para conversão em libras: ");
	fflush(stdout);
	scanf("%f", &massa);

	conversao = massa / 0.45;

	printf("o valor converdido e de: %.2f", conversao);
}
