//fa�a um algoritmo para "calcular o estoque m�dio de uma pe�a sendo que:
// estoque_medio = (quantidade_minima + quantidade_maxima) /2
#include <stdio.h>
int main(){
	int quantidade_minima, quantidade_maxima;
	float estoque_medio;

	printf("Informe a quantidade m�nima:");
	fflush(stdout);
	scanf("%d", &quantidade_minima);

	printf("Informe a quantidade maxima: ");
	fflush(stdout);
	scanf("%d", &quantidade_maxima);

	estoque_medio = (quantidade_minima + quantidade_maxima) / 2;

	 printf("O estoque m�dio � %.2f", estoque_medio);// %f = variavel declarada em float
	 return 0;
}
