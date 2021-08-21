// escreva um algoritmo que leia e mostre um vetor de 20 elementos inteiros,
// mostre a soma de todos os elementos.

#include <stdio.h>

int main(){
	int vetor[20], soma = 0;

	for(int i = 0; i < 20; i++){
	printf("informe o valor para o vetor %d/20: ", (i+1));
	fflush(stdout);
	scanf("%d", &vetor[i]);
	soma = soma + vetor[i];
	}
	printf("A soma do vetor é %d", soma);


}
