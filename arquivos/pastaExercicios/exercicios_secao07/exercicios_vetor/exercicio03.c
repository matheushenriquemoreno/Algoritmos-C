#include <stdio.h>

int main(){
	double vetor[10], vetor_quadrado[10];

	for(int i = 0; i < 10; i++){
		printf("popule o vetor na posição %d: ", i+1);
		fflush(stdout);
		scanf("%lf", &vetor[i]);
	}

	for(int i = 0; i < 10; i++){
		vetor_quadrado[i] = vetor[i] * vetor[i];
	}

	printf("=== Vetor digitado=== \n");
	for(int i = 0; i < 10; i++){
		printf("%.2lf ", vetor[i]);
	}
	printf("\n=== Quadrado do vetor digitado === \n");
	for(int i = 0; i < 10; i++){
		printf("%.2lf ", vetor_quadrado[i]);
	}

	return 0;
}
