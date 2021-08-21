#include <stdio.h>

int main(){
	int vetor[6] = {1, 0, 5, -2, -5, 7};
	int soma = 0, soma2;

	soma2 = vetor[0] + vetor[1] + vetor[5];
	printf("Soma = %d\n", soma2);

	for(int i = 0; i < 6; i++){
		soma += vetor[i];
	}
	vetor[3] = 100;
	printf("=== valores do vetor === \n");
	for(int i = 0; i < 6; i++){
		printf("%d ", vetor[i]);
	}

	printf("\nSoma = %d\n", soma);
}
