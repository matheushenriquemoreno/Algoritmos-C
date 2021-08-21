#include <stdio.h>

int main(){
	int vetor[10], soma = 0, media = 0;

	for(int i = 0; i < 10; i++){
		printf("popule o vetor[%d]: ", i + 1);
		fflush(stdout);
		scanf("%d", &vetor[i]);
		soma += vetor[i];
	}
	media = soma / 10;
	printf("soma dos numero digitados: %d\n"
			"media dos numeros digitados: %d\n", soma, media);

}
