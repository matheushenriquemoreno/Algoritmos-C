#include <stdio.h>

int main(){

	int posicoes;

	printf("informe o tamanho do vetor");
	fflush(stdout);
	scanf("%d", &posicoes);

	double vetor[posicoes];

	for(int i = 0; i < posicoes; i++){
		printf("popule o vetor [%d]", i+1);
		fflush(stdout);
		scanf("%lf", &vetor[i]);
	}

	printf("\nnumeros digitados: \n");
	for(int i = 0; i < posicoes; i++){
		printf("%.1lf\n",vetor[i]);
	}


	return 0;

}
