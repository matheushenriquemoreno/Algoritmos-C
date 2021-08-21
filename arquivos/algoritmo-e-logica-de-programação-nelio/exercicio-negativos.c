#include <stdio.h>

int main(){
	int n;

	printf("quantos numeros voce vai digitar: ");
	fflush(stdout);
	scanf("%d", &n);

	int vetor[n];


	for(int i = 0; i < n; i++){
		printf("digite um numero: ");
		fflush(stdout);
		scanf("%d", &vetor[i]);
	}
	printf("\nnumeros negativos:\n");
	for(int i = 0; i < n; i++){
		if(vetor[i] < 0){
			printf("%d\n", vetor[i]);
		}
	}
	return 0;

}
