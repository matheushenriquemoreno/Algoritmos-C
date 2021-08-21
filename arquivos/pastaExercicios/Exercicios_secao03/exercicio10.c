#include <stdio.h>

int main(){

	int velocidade;
	printf("digite sua velocidade em km/h: ");
	fflush(stdout);
	scanf("%d", &velocidade);

	float conversao = velocidade / 3.6;
	printf("a conversão da sua velocidade atual em m/s e de: %.2f ", conversao);


}
