#include <stdio.h>

int main(){
	int n;
	printf("quantos numeros deseja digitas: ");
	fflush(stdout);
	scanf("%d", &n);
	double vetor[n];

	for(int i = 0; i < n; i++){
		printf("digite um numero: ");
		fflush(stdout);
		scanf("%lf", &vetor[i]);
	}
	printf("\nvalores digitado: ");
	for(int i = 0; i < n; i++){
		printf("%.1lf   ", vetor[i]);
	}
	printf("\n");
	double soma = 0, media;
	for(int i = 0; i < n; i++){
		soma += vetor[i];
	}
	printf("soma = %.2lf\n", soma);
	printf("media = %.2lf", media = soma / n);

}
