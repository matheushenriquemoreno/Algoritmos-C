#include <stdio.h>

int main(){
	int vetor[10], soma = 0, media = 0;


	for(int i = 0; i < 10; i++){
		printf("popule o vetor[%d]: ", i + 1);
		fflush(stdout);
		scanf("%d", &vetor[i]);
		if(vetor[i] < 0){
		 vetor[i] = 0;
		}
		soma += vetor[i];
	}
	media = soma / 10;
	printf("soma: %d\n"
			"media: %d\n", soma, media);
	printf("numero digitados: ");
	for(int i = 0; i < 10; i++){
		printf("%d\n", vetor[i]);
	}

}
