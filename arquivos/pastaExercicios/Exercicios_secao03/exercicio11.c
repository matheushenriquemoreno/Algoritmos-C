#include <stdio.h>

int main(){
	int velocidade;

	printf("digite sua velocidade em metros por segundo: ");
	fflush(stdout);
	scanf("%d", &velocidade);

	int conversao = velocidade * 3.6;

	printf("a sua velocidade em km/h é de: %d", conversao);


}
